//
//  main.cpp
//  stereo
//
//  Created by Keerthikan Ratnarajah on 19/03/16.
//  Copyright (c) 2016 Keerthikan Ratnarajah. All rights reserved.
//

#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace cv;

// Types
typedef cv::Mat_<cv::Vec3f> ImgT; // 3-channel image

//slider values
const int hSlider = 180;
int hSliderMin;
int hSliderMax;

const int sSlider = 255;
int sSliderMin;
int sSliderMax;

const int vSlider = 255;
int vSliderMin;
int vSliderMax;

double hue;
double beta;

cv::Mat dst;
cv::Mat imghsv;


void separateChannels (cv::Mat img) {
    //initialize a matrix for each channel in img
    cv::Mat ch1(img.rows, img.cols, CV_8UC1);
    cv::Mat ch2(img.rows, img.cols, CV_8UC1);
    cv::Mat ch3(img.rows, img.cols, CV_8UC1);
    
    //initialize an int array of size 2
    int from_to[2];
    
    //copy channel 2 of img to channel 0 of ch1
    from_to[0] = 2;
    from_to[1] = 0;
    cv::mixChannels( &img, 1, &ch1, 1, from_to, 1);
    //cv::imshow("Value", ch1);
    
    //copy channel 1 of img to channel 0 of ch2
    from_to[0] = 1;
    from_to[1] = 0;
    cv::mixChannels( &img, 1, &ch2, 1, from_to, 1);
    //cv::imshow("Saturation", ch2);
    
    //copy channel 0 of img to channel 0 of ch3
    from_to[0] = 0;
    from_to[1] = 0;
    cv::mixChannels( &img, 1, &ch3, 1, from_to, 1);
    //cv::imshow("Hue", ch3);
    
    //cv::waitKey(0);
}

void on_trackbar( int, void* )
{
    cv::inRange(imghsv, cv::Scalar(hSliderMin, sSliderMin, vSliderMin), cv::Scalar(hSliderMax, sSliderMax, vSliderMax), dst);
    cout << "Hmin: " << hSliderMin << " Hmax: " << hSliderMax << endl;
    cout << "Smin: " << sSliderMin << " Smax: " << sSliderMax << endl;
    cout << "Vmin: " << vSliderMin << " Vmax: " << vSliderMax << endl;
    imshow( "Colour Segmentation", dst );
}




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Open CV Version " << CV_VERSION << std::endl;
    
    
    cv::Mat img = cv::imread("/Users/keerthikanratnarajah/Dropbox/Eksamen/ROVI2/Project/Vision/stereo/images.png");

    
    //Part 1
    cv::Mat imgBGR[3];
    cv::split(img,imgBGR);
    //cv::imshow("Blue",imgBGR[0]);
    //cv::imshow("Green",imgBGR[1]);
    //cv::imshow("Red",imgBGR[2]);
    //cv::waitKey(0);
    //cv::destroyWindow("Red");
    
    //Part 2
    cv::cvtColor(img, imghsv, CV_BGR2HSV);
    separateChannels(imghsv); //alternatively use cv::split() as above
    
    //Part 3
    hSliderMin = 0;
    hSliderMax = 180;
    sSliderMin = 0;
    sSliderMax = 255;
    vSliderMin = 0;
    vSliderMax = 255;
    
    namedWindow("Colour Segmentation", cv::WINDOW_AUTOSIZE);
    
    cv::createTrackbar( "Hue min", "Colour Segmentation", &hSliderMin, hSlider, on_trackbar );
    cv::createTrackbar( "Hue max", "Colour Segmentation", &hSliderMax, hSlider, on_trackbar );
    cv::createTrackbar( "S min", "Colour Segmentation", &sSliderMin, sSlider, on_trackbar );
    cv::createTrackbar( "S max", "Colour Segmentation", &sSliderMax, sSlider, on_trackbar );
    cv::createTrackbar( "V min", "Colour Segmentation", &vSliderMin, vSlider, on_trackbar );
    cv::createTrackbar( "V max", "Colour Segmentation", &vSliderMax, vSlider, on_trackbar );
    cv::waitKey(0);
    
    //Part 4
    
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    
    findContours( imghsv, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );
    
    Mat drawing = Mat::zeros( imghsv.size(), CV_8UC3 );
    for( int i = 0; i< contours.size(); i++ )
    {
        Scalar color = Scalar( 255,0,0 );
        drawContours( drawing, contours, i, color, 2, 8, hierarchy, 0, Point() );
    }
    
    /// Show in a window
    namedWindow( "Contours", CV_WINDOW_AUTOSIZE );
    imshow( "Contours", drawing );
    cv::waitKey(0);

    
    return 0;
}
