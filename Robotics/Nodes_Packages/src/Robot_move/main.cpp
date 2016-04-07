#include "include/move_robot.h"
#include <ros/ros.h>
#include <rw/math.hpp>

int main(int argc, char* argv[])
{
  ros::init(argc, argv, "caros_universalrobot");

  const rw::math::Q newq = rw::math::Q(6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
  //Q q = Q(6, 0.859, 0.208, -0.825, -0.746,  -1.632, 1.527);

  MoveRobot move_Robot;
  bool ret = false;
  std::cout<<"Check 1"<<std::endl;
  ret = move_Robot.My_Moveptp(newq);
  std::cout<<"Check 2"<<std::endl;
  if (!ret)
  {
    ROS_ERROR_STREAM("Could not properly do the testMovePtp");
    return 1;
  }

  return 0;
}
