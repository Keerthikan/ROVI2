#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

namespace enc = sensor_msgs::image_encodings;

class Node
{
protected:
    //   image_transport::ImageTransport it_;
    image_transport::Subscriber sub_l;
    image_transport::Subscriber sub_r;
    ros::NodeHandle nh_l_;
    ros::NodeHandle nh_r_;
    ros::NodeHandle nhPrivate_;

    sensor_msgs::ImageConstPtr imageIn_L;
    sensor_msgs::ImageConstPtr imageIn_temp_L; //used for storing


    sensor_msgs::ImageConstPtr imageIn_r;
    sensor_msgs::ImageConstPtr imageIn_temp_r; //used for storing


    cv_bridge::CvImagePtr image_in_l;   //pointer to input image
    cv_bridge::CvImagePtr image_in_r;   //pointer to input image

    cv_bridge::CvImagePtr image_out;  //for ros msg conversion



public:
    cv::Mat cvImage_in_l;       //for processing, input at each step
    cv::Mat cvImage_in_r;       //for processing, input at each step


    Node(ros::NodeHandle& nh):nh_l_(nh), nh_r_(nh)
    {
        image_transport::ImageTransport it_l(nh_l_);
        image_transport::ImageTransport it_r(nh_r_);

        sub_l = it_l.subscribe("/stereo_camera/left/image_raw", 1, &Node::imageCb_l, this);
        sub_r = it_r.subscribe("/stereo_camera/right/image_raw", 1, &Node::imageCb_r, this);

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
