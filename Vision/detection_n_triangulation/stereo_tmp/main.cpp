#include <iostream>

#include <time.h>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/calib3d/calib3d_c.h"
#include <opencv2/core/core.hpp>
#include "opencv2/calib3d.hpp"

using namespace cv;
using namespace std;

#define ST_CIRCLE       0
#define ST_SQUARE       1
#define ST_ALL          2

#define INF             999999999

#define THICKNESS_ONE   1
#define LINETYPE_EIGHT  8
#define FONTFACE_ZERO   0

cv::Mat img_all_contours;
std::vector<cv::Point> centers;
cv::Point curr_center;

cv::Point global_center;

double center_x, center_y;

double closest_dist = INF;

cv::Point closest_object, prev, curr, best_curr, best_prev;

std::vector<std::vector<cv::Point> > closed_contours;
std::vector<cv::Vec4i> heirarchy;

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
    float time1 = clock();

    Mat imgHSV;

    cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

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

    float time2 = (clock() - time1) * 1.0 / CLOCKS_PER_SEC;

    //cout << "Time ; " << time2*1000 << " ; ms" << endl;

    return curr_center;
}


int main()
{
    namedWindow("Control",CV_WINDOW_AUTOSIZE); //create a window called "Control"

    int iLowH = 0;
    int iHighH = 179;

    int iLowS = 0;
    int iHighS = 255;

    int iLowV = 0;
    int iHighV = 255;

    int canny_low = 5;
    int canny_high = 250;

    int pixel_low = 2500;
    int pixel_high = 13600;

    int all = 1;
    int diff = 50 ;

    // Initial setup
    iLowH = 0;
    iHighH = 179;

    iLowS = 0;
    iHighS = 185;

    iLowV = 0;
    iHighV = 255;

    //Create trackbars in "Control" window
    cvCreateTrackbar("LowH", "Control", &iLowH, 179); //Hue (0 - 179)
    cvCreateTrackbar("HighH", "Control", &iHighH, 179);

    cvCreateTrackbar("LowS", "Control", &iLowS, 255); //Saturation (0 - 255)
    cvCreateTrackbar("HighS", "Control", &iHighS, 255);

    cvCreateTrackbar("LowV", "Control", &iLowV, 255);//Value (0 - 255)
    cvCreateTrackbar("HighV", "Control", &iHighV, 255);

    cvCreateTrackbar("Pixel Low", "Control", &pixel_low, 30000);
    cvCreateTrackbar("Pixel High", "Control", &pixel_high, 160000);

    cvCreateTrackbar("Detect all?", "Control", &all, 1);
    cvCreateTrackbar("Difference", "Control", &diff, 100);

    cv::Point centerRight, centerLeft;

    //float dataRight[3][4] = {{1292.607813, 0.000000, 517.859631, 0.000000}, {0.000000, 1292.607813, 404.358028, 0.000000}, {0.000000, 0.000000, 1.000000, 0.000000}};
    float dataLeft[12] = {1292.607813, 0.000000, 517.859631, 0.000000,0.000000, 1292.607813, 404.358028, 0.000000,0.000000, 0.000000, 1.000000, 0.000000};

    //float dataLeft[3][4] = {{1292.607813, 0.000000, 517.859631, -154.515600}, {0.000000, 1292.607813, 404.358028, 0.000000}, {0.000000, 0.000000, 1.000000, 0.000000}};
    float dataRight[12] = {1292.607813, 0.000000, 517.859631, -154.515600, 0.000000, 1292.607813, 404.358028, 0.000000, 0.000000, 0.000000, 1.000000, 0.000000};

    //CvMat projRight = Mat(3,4,CV_32FC1,&dataRight, 2);
    //CvMat projLeft = Mat(3,4,CV_32FC1,&dataLeft, 2);

    Mat projRight = Mat(3, 4, CV_32FC1, dataRight);
    Mat projLeft = Mat(3, 4, CV_32FC1, dataLeft);

    while (true)
    {
        cv::Mat imgRight = imread("right.png");
        cv::Mat imgLeft = imread("left.png");

        //global_center.x = imgRight.cols/2;
        //global_center.y = imgRight.rows/2;
        //cout << global_center << endl;

        centerRight = findCenter("Right",imgRight,iLowH,iHighH,iLowS,iHighS,iLowV,iHighV,pixel_low,pixel_high,all,diff,canny_low,canny_high);
        centerLeft = findCenter("Left",imgLeft,iLowH,iHighH,iLowS,iHighS,iLowV,iHighV,pixel_low,pixel_high,all,diff,canny_low,canny_high);

        float co1[] = {centerRight.x,centerRight.y};
        Mat pointRight(2, 1, CV_32FC1, co1);
        float co2[] = {centerLeft.x,centerLeft.y};
        Mat pointLeft(2, 1, CV_32FC1, co2);

        std::cout << "Right obj center:\t" << centerRight << endl;
        std::cout << "Left obj center:\t" << centerLeft << endl;

        Mat point4D;

        cv::triangulatePoints(projLeft, projRight, pointLeft, pointRight, point4D);

        double w = point4D.at<double>(3,0);
        double x = point4D.at<double>(0,0);// /w;
        double y = point4D.at<double>(1,0);// /w;
        double z = point4D.at<double>(2,0);// /w;

        cout << "\nw: \t" << w << "\n\n"
             << "x: \t" << x << "\n"
             << "y: \t" << y << "\n"
             << "z: \t" << z << endl;

        if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
        {
            cout << "esc key is pressed by user" << endl;
            break;
        }
    }

    return 0;
}
