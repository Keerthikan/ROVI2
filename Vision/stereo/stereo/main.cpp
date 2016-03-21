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

//  cam0=   [3962.004 0 1146.717;
//           0 3962.004 975.476;
//           0 0 1]

//  cam1=[3962.004 0 1254.628;
//        0 3962.004 975.476;
//        0 0 1]

//  doffs=107.911 -  x-difference of principal points, doffs = cx1 - cx0

//  baseline=237.604  - camera baseline in mm

//  width=3000
//  height=1920 -   image size

//  ndisp=250 - a conservative bound on the number of disparity levels;
              //the stereo algorithm MAY utilize this bound and search from d = 0 .. ndisp-1

//  isint=0 -   whether the GT disparites only have integer precision (true for the older datasets;
                //in this case submitted floating-point disparities are rounded to ints before evaluating)

//  vmin=12     a tight bound on minimum and maximum disparities, used for color visualization;
//  vmax=213    the stereo algorithm MAY NOT utilize this information


//  dyavg=0     average and maximum absolute y-disparities, providing an indication of
//  dymax=0     the calibration error present in the imperfect datasets.


// Z = baseline * f / (d + doffs)

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Open CV Version " << CV_VERSION << std::endl;
    
    
    Mat g1, g2;
    Mat disp, disp8;
    
    Mat LeftImage = imread("/Users/keerthikanratnarajah/Dropbox/Eksamen/ROVI2/Project/Vision/Classroom1-perfect/im0.png");
    Mat RightImage = imread("/Users/keerthikanratnarajah/Dropbox/Eksamen/ROVI2/Project/Vision/Classroom1-perfect/im1.png");
    
    cvtColor(LeftImage, g1, CV_BGR2GRAY);
    cvtColor(RightImage, g2, CV_BGR2GRAY);
    

    
    //namedWindow("left",CV_WINDOW_KEEPRATIO);
    //namedWindow("right",CV_WINDOW_KEEPRATIO);
    
    //imshow("left", LeftImage);
    //imshow("right", RightImage);
    
    waitKey();
    return 0;
}
