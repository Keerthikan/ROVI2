#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

namespace enc = sensor_msgs::image_encodings;

class harris_node
{
protected:
    //   image_transport::ImageTransport it_;
    image_transport::Subscriber sub_;
    ros::NodeHandle nh_;
    ros::NodeHandle nhPrivate_;

    sensor_msgs::ImageConstPtr imageIn_;
    sensor_msgs::ImageConstPtr imageIn_temp; //used for storing

    cv_bridge::CvImagePtr image_in;   //pointer to input image
    cv_bridge::CvImagePtr image_out;  //for ros msg conversion



public:
    cv::Mat cvImage_in;       //for processing, input at each step
    cv::Mat cvImage_out;      //for processing, output at each step

    harris_node(ros::NodeHandle& nh):nh_(nh)
    {
        image_transport::ImageTransport it_(nh_);
        sub_ = it_.subscribe("/stereo_camera/left/image_raw", 1, &harris_node::imageCb, this);
    }

    void imageCb(const sensor_msgs::ImageConstPtr& image)
    {
        ROS_ERROR("callback");
        if ( &image == NULL)
        return;

        try
        {
            imageIn_ = image;
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("Conversion error: %s", e.what());
            return;
        }
    }

    void harris_detector()
    {
        if ( imageIn_ == NULL || imageIn_ == imageIn_temp)
         return;

        imageIn_temp = imageIn_;

        ROS_ERROR("It works - bitches");

        image_in = cv_bridge::toCvCopy(imageIn_, enc::BGR8);
        cvImage_in = image_in->image;

    }


    void spin()
    {
        ros::Rate rate(30);
        while (ros::ok())
        {
              ros::spinOnce();
              harris_detector();
              rate.sleep();
        }
    }

//    virtual void spinOnce()
//    {
//
//        spin();

//    }
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
    harris_node node(nh);
    node.spin();

}
