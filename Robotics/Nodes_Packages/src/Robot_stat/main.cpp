#include <ros/ros.h>
#include <caros_control_msgs/RobotState.h>

#include <caros/common.h>
#include <caros/common_robwork.h>

#include <rw/math/MetricFactory.hpp>

#include <ros/assert.h>

#include <string>
#include <vector>
#include <iostream>

class robot_state_node
{
protected:

    ros::NodeHandle nh_;
    ros::NodeHandle nhPrivate_;

    caros_control_msgs::RobotStateConstPtr robot_stateIn;
    caros_control_msgs::RobotStateConstPtr robot_stateIn_temp;
    ros::Subscriber sub;


//    caros_control_msgs::RobotState newRobotState;
//    ros::Publisher pub;

//private:
//    int count = 0;

public:

    robot_state_node(ros::NodeHandle& nh):nh_(nh)
    {
        sub = nh.subscribe("/caros_universalrobot/caros_serial_device_service_interface/robot_state", 1, &robot_state_node::robotCb, this);
//        pub = nh.advertise<caros_control_msgs::RobotState>("chatter", 1000);
    }

    void robotCb(const caros_control_msgs::RobotStateConstPtr& robotstate)
    {
        if ( &robotstate == NULL)
        return;

        ROS_ERROR("callback");
        robot_stateIn = robotstate;
    }

    void robot_state()
    {
        if ( robot_stateIn == NULL || robot_stateIn == robot_stateIn_temp)
        return;

        ROS_ERROR("process");
        robot_stateIn_temp = robot_stateIn;
        rw::math::Q newQ = caros::toRw(robot_stateIn_temp.get()->q);
        std::cout << newQ << std::endl;

//        if(count == 0)
//        {
//            rw::math::Q newnewQ[6]{0, 0, 0, 0, 0, 0};
//            newRobotState = robot_stateIn_temp;

//            newRobotState.q = caros::toRos(newnewQ);
//            newRobotState.header.stamp = ros::Time::now();

//            newRobotState.is_colliding = caros::toRos(false);

//            pub.publish(newRobotState);
//            count++;
//        }
        //        std::cout << robot_stateIn_temp.get()->header.stamp.now() << std::endl;
        //        std::cout <<  robot_stateIn_temp->q << std::endl;
    }


    void spin()
    {
        ros::Rate rate(30);
        while (ros::ok())
        {
              ROS_ERROR("spin");
              ros::spinOnce();
              robot_state();
              rate.sleep();
        }
    }

};


int main(int argc, char** argv)
{
    ros::init(argc, argv, "heyhey");
    ros::NodeHandle nh;
    robot_state_node node(nh);
    node.spin();
}
