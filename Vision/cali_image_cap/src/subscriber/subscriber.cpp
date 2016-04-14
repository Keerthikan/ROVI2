#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

#include <opencv2/core/core.hpp>
#include "opencv2/core/version.hpp"
#include <opencv2/video/tracking.hpp>
//#include "opencv2/calib3d/calib3d_c.h"
#include <opencv2/core/core_c.h>
//#include "opencv2/calib3d.hpp"
#include <opencv2/calib3d/calib3d.hpp>

using namespace cv;
using namespace std;

#define ST_CIRCLE       0
//#define ST_SQUARE       1
#define ST_ALL          2

#define INF             999999999

#define THICKNESS_ONE   1
#define LINETYPE_EIGHT  8
#define FONTFACE_ZERO   0

cv::Mat img_all_contours;
std::vector<cv::Point> centers;
cv::Point curr_center;

cv::Point center_info, center_last;

cv::Point global_center;

double center_x, center_y;

double closest_dist = INF;

cv::Point closest_object, prev, curr, best_curr, best_prev;

vector<Point> trackv,kalmanv;

std::vector<std::vector<cv::Point> > closed_contours;
std::vector<cv::Vec4i> heirarchy;

namespace enc = sensor_msgs::image_encodings;

// Init Detection
cv::Point centerRight, centerLeft;

Mat projRight = (Mat_<float>(3, 4) << 1292.607813, 0.000000, 517.859631, -154.515600, 0.000000, 1292.607813, 404.358028, 0.000000, 0.000000, 0.000000, 1.000000, 0.000000);
Mat projLeft = (Mat_<float>(3, 4) << 1292.607813, 0.000000, 517.859631, 0.000000,0.000000, 1292.607813, 404.358028, 0.000000,0.000000, 0.000000, 1.000000, 0.000000);

// Init Kalman


// Function to approximate contours by closed contours
std::vector<std::vector<cv::Point> > make_contours_closed(std::vector<std::vector<cv::Point> > contours)
{
    std::vector<std::vector<cv::Point> > closed_contours;
    closed_contours.resize(contours.size());
    for(uint i = 0; i < contours.size(); i++)
        cv::approxPolyDP(contours[i], closed_contours[i], 0.1, true);

    return closed_contours;
}

// Draw outline-box and label
void detectShape(cv::Mat& im, const std::string label, std::vector<cv::Point>& contour, int thresh)
{
    int fontface = cv::FONT_HERSHEY_SIMPLEX;
    double scale = 0.4;
    int baseline = 0;

    cv::Size text = cv::getTextSize(label, FONTFACE_ZERO, scale, THICKNESS_ONE, &baseline);
    cv::Rect r = cv::boundingRect(contour);

    // Center of the detected object
    cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
    cv::rectangle(im, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255,255,255), CV_FILLED);
    cv::putText(im, label, pt, fontface, scale, CV_RGB(0,0,0), THICKNESS_ONE, LINETYPE_EIGHT);
    cv::rectangle(im, r, cv::Scalar(0,255,0), THICKNESS_ONE, LINETYPE_EIGHT, 0);

    if(r.height < r.width + thresh && r.height > r.width - thresh)
        centers.push_back(pt);

    curr_center = pt;
}

cv::Point findCenter(std::string imgName, cv::Mat imgOriginal,int iLowH,int iHighH,int iLowS,int iHighS,int iLowV,int iHighV,int pixel_low,int pixel_high,int all,int diff,int canny_low,int canny_high){

    Mat imgHSV;
ROS_ERROR("2");
    cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV
ROS_ERROR("3");
    Mat imgThresholded;

    inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

    erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
    dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

    dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
    erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

    // Ugly hack for fixing HSV2GRAY
    imwrite("tmp_img.png",imgThresholded);
    cv::Mat src = imread("tmp_img.png");

    cv::Mat gray, bw;

    img_all_contours = src.clone();

    cv::cvtColor(src, gray, CV_BGR2GRAY);
    cv::GaussianBlur(gray,gray,cv::Size(3,3),0,0);
    cv::Canny(gray,bw,canny_low,canny_high,3);   // Different threshold's, stable

    // Find contours
    std::vector<std::vector<cv::Point> > contours;
    cv::findContours(bw.clone(),contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);
    cv::Mat dst = src.clone();

    // Draw contours
    closed_contours = make_contours_closed(contours);
    cv::drawContours(dst, closed_contours, -1, cv::Scalar(0, 255, 255));

    // The array for storing the approximation curve
    std::vector<cv::Point> approx;

    for (uint i = 0; i<contours.size(); i++)
    {
        // Approximate contour with accuracy proportional to the contour perimeter
        cv::approxPolyDP(cv::Mat(contours[i]),approx,cv::arcLength(cv::Mat(contours[i]), true) * 0.02,true);

        // Skip all object there is not between the thresholds-pixels
        if (std::fabs(cv::contourArea(contours[i])) < pixel_low || std::fabs(cv::contourArea(contours[i])) > pixel_high || !cv::isContourConvex(approx))
            continue;

        else if (all == 1)
            detectShape(dst, "o", contours[i], diff);

        else{
            double area = cv::contourArea(contours[i]);
            cv::Rect r = cv::boundingRect(contours[i]);
            int radius = r.width / 2;

            if (std::abs(1 - ((double)r.width / r.height)) <= 0.2 &&
                    std::abs(1 - (area / (CV_PI * std::pow(radius, 2)))) <= 0.2)
            {
                detectShape(dst, "C", contours[i], diff);
            }
        }
    }

    cv::putText(dst, "Center", global_center, cv::FONT_HERSHEY_SIMPLEX, 0.4, CV_RGB(0,0,0), THICKNESS_ONE, LINETYPE_EIGHT);

    cv::Point curr;

    if(!centers.empty())
        curr = *centers.begin();


    cv::namedWindow( imgName, CV_WINDOW_NORMAL);
    cv::imshow( imgName, imgOriginal);

    // Update the frame
    cv::namedWindow( imgName+" Lines", CV_WINDOW_NORMAL);
    cv::imshow( imgName+" Lines", dst);

    return curr_center;
}

void drawCross(Mat img, Point center, Scalar color, int d ){
    line( img, Point( center.x - d, center.y - d ), Point( center.x + d, center.y + d ), color, 2, CV_AA, 0);
    line( img, Point( center.x + d, center.y - d ), Point( center.x - d, center.y + d ), color, 2, CV_AA, 0 );
}

class Node
{
protected:
    //   image_transport::ImageTransport it_;
    image_transport::Subscriber sub_l;
    image_transport::Subscriber sub_r;
    ros::NodeHandle nh_l_;
    ros::NodeHandle nh_r_;
    ros::NodeHandle nhPrivate_;
    
    KalmanFilter *KF;
    Mat_<float> *state;
    Mat_<float> *processNoise;

    sensor_msgs::ImageConstPtr imageIn_L;
    sensor_msgs::ImageConstPtr imageIn_temp_L; //used for storing


    sensor_msgs::ImageConstPtr imageIn_r;
    sensor_msgs::ImageConstPtr imageIn_temp_r; //used for storing


    cv_bridge::CvImagePtr image_in_l;   //pointer to input image
    cv_bridge::CvImagePtr image_in_r;   //pointer to input image

    cv_bridge::CvImagePtr image_out;  //for ros msg conversion

    vector<Point> trackv,kalmanv;

public:
    cv::Mat cvImage_in_l;       //for processing, input at each step
    cv::Mat cvImage_in_r;       //for processing, input at each step

    int iLowH = 0;
    int iHighH = 179;

    int iLowS = 0;
    int iHighS = 185;

    int iLowV = 0;
    int iHighV = 255;

    int canny_low = 5;
    int canny_high = 250;

    int pixel_low = 2500;
    int pixel_high = 13600;

    int all = 1;
    int diff = 50 ;

    Node(ros::NodeHandle& nh):nh_l_(nh), nh_r_(nh)
    {
        center_info.x = -1;
        center_info.y = -1;


        // Init Kalman
        KalmanFilter KF(4, 2, 0);

        Mat processNoise(4, 1, CV_32F);

        //char code = (char)-1;

        KF.statePre.at<float>(0) = center_info.x;
        KF.statePre.at<float>(1) = center_info.y;
        KF.statePre.at<float>(2) = 0;
        KF.statePre.at<float>(3) = 0;

        image_transport::ImageTransport it_l(nh_l_);
        image_transport::ImageTransport it_r(nh_r_);

        //sub_l = it_l.subscribe("/stereo_camera/left/image_raw", 1, &Node::imageCb_l, this);
        //sub_r = it_r.subscribe("/stereo_camera/right/image_raw", 1, &Node::imageCb_r, this);

        sub_l = it_l.subscribe("/stereo_camera/left/image_rect_color", 1, &Node::imageCb_l, this);
        sub_r = it_r.subscribe("/stereo_camera/right/image_rect_color", 1, &Node::imageCb_r, this);


        setIdentity(KF.measurementMatrix);
        setIdentity(KF.processNoiseCov, Scalar::all(0.1)); // 0.0001
        setIdentity(KF.measurementNoiseCov, Scalar::all(0.1)); // 0.01
        setIdentity(KF.errorCovPost, Scalar::all(.1)); // 0.1

        KF.transitionMatrix = (Mat_<float>(4, 4) << 1,0,1,0,   0,1,0,1,  0,0,1,0,  0,0,0,1); // Including velocity
        KF.processNoiseCov = (cv::Mat_<float>(4,4) << 0.2,0,0.2,0,  0,0.2,0,0.2,  0,0,0.3,0,  0,0,0,0.3);
    }

    void imageCb_l(const sensor_msgs::ImageConstPtr& image)
    {
        ROS_ERROR("callback - l");
        if ( &image == NULL)
            return;

        try
        {
            imageIn_L = image;
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("Conversion error: %s", e.what());
            return;
        }
    }


    void imageCb_r(const sensor_msgs::ImageConstPtr& image)
    {
        ROS_ERROR("callback - r");
        if ( &image == NULL)
            return;

        try
        {
            imageIn_r = image;
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("Conversion error: %s", e.what());
            return;
        }
    }

    void process()
    {
        //Make sure that We only proces new  images and dont run this function multiple times unessesarly
        vector<vector<Point> > contours;
        Mat frame;



        if ( imageIn_L == NULL || imageIn_L == imageIn_temp_L)
            return;

        imageIn_temp_L = imageIn_L;

        if ( imageIn_r == NULL || imageIn_r == imageIn_temp_r)
            return;
        imageIn_temp_r = imageIn_r;
        //--------------------------------------------------------------------------------------------//
        //Actual process

        ROS_ERROR("It works - bitches");
        image_in_l = cv_bridge::toCvCopy(imageIn_L, enc::BGR8);
        image_in_r = cv_bridge::toCvCopy(imageIn_r, enc::BGR8);

        cvImage_in_l = image_in_l->image;
        cvImage_in_r = image_in_r->image;

        cv::cvtColor(cvImage_in_l,cvImage_in_l,CV_BGR2HSV);
        cv::cvtColor(cvImage_in_r,cvImage_in_r,CV_BGR2HSV);


        cv::inRange(cvImage_in_l, cv::Scalar(0,184,0), cv::Scalar(14,236,255), cvImage_in_l);
        cv::inRange(cvImage_in_r, cv::Scalar(0,184,0), cv::Scalar(14,236,255), cvImage_in_r);

        ROS_ERROR("It works - bitches hough");

        //cv::imshow("imageL", cvImage_in_l);
        //cv::waitKey(1);
        //cv::imshow("imageR", cvImage_in_r);

        //cv::Mat img = cvImage_in_l.clone();

        imwrite("tmp_img_L.png",cvImage_in_l);
        imwrite("tmp_img_R.png",cvImage_in_r);


        cv::Mat imgL = imread("tmp_img_L.png");
        cv::Mat imgR = imread("tmp_img_R.png");
ROS_ERROR("1");
        centerRight = findCenter("Right",imgR,iLowH,iHighH,iLowS,iHighS,iLowV,iHighV,pixel_low,pixel_high,all,diff,canny_low,canny_high);
        centerLeft = findCenter("Left",imgL,iLowH,iHighH,iLowS,iHighS,iLowV,iHighV,pixel_low,pixel_high,all,diff,canny_low,canny_high);

        Mat pointRight(2, 1, CV_64FC4);
        pointRight.at<double>(0,0) = centerRight.x;
        pointRight.at<double>(0,1) = centerRight.y;

        Mat pointLeft(2, 1, CV_64FC4);
        pointLeft.at<double>(0,0) = centerLeft.x;
        pointLeft.at<double>(0,1) = centerLeft.y;

        std::cout << "Right obj center:\t" << centerRight << endl;
        std::cout << "Left obj center:\t" << centerLeft << endl;

        Mat point4D;

        cv::triangulatePoints(projLeft, projRight, pointLeft, pointRight, point4D);

        double w = point4D.at<double>(3,0);
        double x = point4D.at<double>(0,0);// /w;
        double y = point4D.at<double>(1,0);// /w;
        double z = point4D.at<double>(2,0);// /w;

        cout << "\nw?: \t" << w << "\n\n"
             << "x: \t" << x << "\n"
             << "y: \t" << y << "\n"
             << "z: \t" << z << endl;

//        Mat prediction = KF->predict();
//ROS_ERROR(" predict fine");
//        Point predictPt(prediction.at<float>(0),prediction.at<float>(1));
//ROS_ERROR(" predictPt fine");
//        Mat_<float> measurement(2,1); measurement.setTo(Scalar(0));
//        measurement(0) = centerRight.x;
//        measurement(1) = centerRight.y;

//        Point measPt(measurement(0),measurement(1));
//        trackv.push_back(measPt);
//        // generate measurement
//        //measurement += KF.measurementMatrix*state;
//ROS_ERROR(" measPt fine");
//        Mat estimated = KF->correct(measurement);

//        Point statePt(estimated.at<float>(0),estimated.at<float>(1));
//        kalmanv.push_back(statePt);

//        drawCross( img, statePt, Scalar(255,255,255), 5 );
//        drawCross( img, measPt, Scalar(0,0,255), 5 );
//        drawCross( img, predictPt, Scalar(0,255,0), 3 );

//        line( img, statePt, measPt, Scalar(0,0,255), 3, CV_AA, 0 );
//        line( img, statePt, predictPt, Scalar(0,255,255), 3, CV_AA, 0 );

//        for (int i = 0; i < trackv.size()-1; i++) {
//            line(img, trackv[i], trackv[i+1], Scalar(255,255,0), 1);
//        }
//        for (int i = 0; i < kalmanv.size()-1; i++) {
//            line(img, kalmanv[i], kalmanv[i+1], Scalar(0,255,0), 1);
//        }

        //imshow( "Kalman", img );


        cv::waitKey(1);
        //---------------------------------------------------------------------------------------------//


    }


    void spin()
    {
        ros::Rate rate(30);
        while (ros::ok())
        {
            ros::spinOnce();
            process();
            rate.sleep();
        }
    }

};

//class harris_node_with_gui:public harris_node
//{
//public:
//    harris_node_with_gui(ros::NodeHandle& nh, ros::NodeHandle& nhPrivate):   harris_node(nh, nhPrivate){}
//    void spinOnce()
//    {
//        //ROS_ERROR("It works - bitc-hes");
//        harris_node::spinOnce();
//        //cv::imshow("inputImage", cvImage_in);
//        //cv::waitKey(1);
//    }
//};




int main(int argc, char** argv)
{
    ros::init(argc, argv, "image_processor");
    ros::NodeHandle nh;
    Node node(nh);
    node.spin();

}

