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


#define THICKNESS_ONE   1
#define LINETYPE_EIGHT  8
#define FONTFACE_ZERO   0

using namespace std;
using namespace cv;

namespace enc = sensor_msgs::image_encodings;

// Init Detection
cv::Point centerRight, centerLeft;

Mat projRight = (Mat_<float>(3, 4) << 1292.607813, 0.000000, 517.859631, -154.515600, 0.000000, 1292.607813, 404.358028, 0.000000, 0.000000, 0.000000, 1.000000, 0.000000);
Mat projLeft = (Mat_<float>(3, 4) << 1292.607813, 0.000000, 517.859631, 0.000000,0.000000, 1292.607813, 404.358028, 0.000000,0.000000, 0.000000, 1.000000, 0.000000);

// Init Kalman

void drawCross( Mat img, Point center,Scalar color, int d ){
    line(img, Point(center.x - d, center.y - d), Point(center.x + d, center.y + d), color, 2, CV_AA, 0);
    line(img, Point(center.x + d, center.y - d), Point(center.x - d, center.y + d), color, 2, CV_AA, 0 );
}

Point detect(Mat frame){
    Mat thresh_frame;
    vector<Mat> channels;
    Mat_<float> measurement(2,1); measurement.setTo(Scalar(0));
    vector<Vec4i> hierarchy;
    vector<vector<Point> > contours;

    split(frame, channels);
    add(channels[0], channels[1], channels[1]);
    subtract(channels[2], channels[1], channels[2]);
    threshold(channels[2], thresh_frame, 50, 255, CV_THRESH_BINARY);
    medianBlur(thresh_frame, thresh_frame, 5);

    findContours(thresh_frame, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

    Mat drawing = Mat::zeros(thresh_frame.size(), CV_8UC1);

    for(size_t i = 0; i < contours.size(); i++)
    {
        if(contourArea(contours[i]) > 500)
            drawContours(drawing, contours, i, Scalar::all(255), CV_FILLED, 8, vector<Vec4i>(), 0, Point());
    }

    thresh_frame = drawing;

    findContours(thresh_frame, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

    drawing = Mat::zeros(thresh_frame.size(), CV_8UC1);
    for(size_t i = 0; i < contours.size(); i++)
    {
        if(contourArea(contours[i]) > 500)
            drawContours(drawing, contours, i, Scalar::all(255), CV_FILLED, 8, vector<Vec4i>(), 0, Point());
    }
    thresh_frame = drawing;

    // Get the moments
    vector<Moments> mu(contours.size() );
    for( size_t i = 0; i < contours.size(); i++ ){
        mu[i] = moments( contours[i], false );
    }

    //  Get the mass centers:
    vector<Point2f> mc( contours.size() );

    for( size_t i = 0; i < contours.size(); i++ ){
        mc[i] = Point2f( mu[i].m10/mu[i].m00 , mu[i].m01/mu[i].m00 );
    }

    for(size_t i = 0; i < mc.size(); i++){
        drawCross(frame, mc[i], Scalar(255, 0, 0), 5);
        measurement(0) = mc[i].x;
        measurement(1) = mc[i].y;
    }

    Point cpoint(measurement(0),measurement(1));

    return(cpoint);
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

    Node(ros::NodeHandle& nh):nh_l_(nh), nh_r_(nh)
    {

    KF = new KalmanFilter(4,2,0);
    state = new Mat_<float>(4,1);
    processNoise = new Mat_<float>(4,1,CV_32F);


    setIdentity(KF->measurementMatrix);
    setIdentity(KF->processNoiseCov, Scalar::all(1e-2));
    setIdentity(KF->measurementNoiseCov, Scalar::all(1e-1));

    image_transport::ImageTransport it_l(nh_l_);
        image_transport::ImageTransport it_r(nh_r_);

        //sub_l = it_l.subscribe("/stereo_camera/left/image_raw", 1, &Node::imageCb_l, this);
        //sub_r = it_r.subscribe("/stereo_camera/right/image_raw", 1, &Node::imageCb_r, this);

        sub_l = it_l.subscribe("/stereo_camera/left/image_rect_color", 1, &Node::imageCb_l, this);
        sub_r = it_r.subscribe("/stereo_camera/right/image_rect_color", 1, &Node::imageCb_r, this);
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

        image_in_l = cv_bridge::toCvCopy(imageIn_L, enc::BGR8);
        image_in_r = cv_bridge::toCvCopy(imageIn_r, enc::BGR8);

        cvImage_in_l = image_in_l->image;
        cvImage_in_r = image_in_r->image;

        cv::cvtColor(cvImage_in_l,cvImage_in_l,CV_BGR2HSV);
        cv::cvtColor(cvImage_in_r,cvImage_in_r,CV_BGR2HSV);


        cv::inRange(cvImage_in_l, cv::Scalar(0,184,0), cv::Scalar(14,236,255), cvImage_in_l);
        cv::inRange(cvImage_in_r, cv::Scalar(0,184,0), cv::Scalar(14,236,255), cvImage_in_r);

        ROS_ERROR("It works - bitches hough");

        cv::imshow("imageL", cvImage_in_l);
        cv::imshow("imageR", cvImage_in_r);

        imwrite("tmp_img_left.png",cvImage_in_l);
        cv::Mat src_left = imread("tmp_img_left.png");

        imwrite("tmp_img_right.png",cvImage_in_r);
        cv::Mat src_right = imread("tmp_img_right.png");

        Point centerRight = detect(src_right);
        Point centerLeft = detect(src_left);

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

        double x = point4D.at<double>(0,0)/w;// /w;
        double y = point4D.at<double>(1,0)/w;// /w;
        double z = point4D.at<double>(2,0)/w;// /w;

        cout << "\nw?: \t" << w << "\n\n"
             << "x: \t" << x << "\n"
             << "y: \t" << y << "\n"
             << "z: \t" << z << endl;


        Point measPt = centerRight;
        Mat measurement = (Mat_<float>(2,1) << measPt.x,measPt.y);
        // Mat measurement = (Mat_<float>(3,1) << x,y,z);

        std::cout << "Center\t" << measPt << std::endl;


        //imshow("Video", frame);


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




int main(int argc, char** argv)
{
    ros::init(argc, argv, "image_processor");
    ros::NodeHandle nh;
    Node node(nh);
    node.spin();

}
