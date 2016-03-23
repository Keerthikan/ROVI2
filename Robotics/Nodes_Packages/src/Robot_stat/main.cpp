#include <ros/ros.h>
#include <caros_control_msgs/RobotState.h>
#include <iostream>

class robot_state_node
{
protected:

    ros::NodeHandle nh_;
    ros::NodeHandle nhPrivate_;

    caros_control_msgs::RobotStateConstPtr robot_stateIn;
    caros_control_msgs::RobotStateConstPtr robot_stateIn_temp;

public:

    robot_state_node(ros::NodeHandle& nh):nh_(nh)
    {
        ros::Subscriber sub = nh.subscribe("/caros_universalrobot/caros_serial_device_service_interface/robot_state", 1, &robot_state_node::robotCb, this);
    }

    void robotCb(const caros_control_msgs::RobotStateConstPtr& robotstate)
    {
        ROS_ERROR("callback");
        if ( &robotstate == NULL)
        return;

        robot_stateIn = robotstate;
    }

    void robot_state()
    {

        robot_stateIn_temp = robot_stateIn;
        std::cout << robot_stateIn_temp << std::endl;
    }


    void spin()
    {
        ros::Rate rate(30);
        while (ros::ok())
        {
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
