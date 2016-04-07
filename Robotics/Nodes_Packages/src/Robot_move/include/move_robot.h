#ifndef MOVE_ROBOT_H
#define MOVE_ROBOT_H

#include <caros/serial_device_si_proxy.h>
#include <caros/common_robwork.h>

#include <rw/pathplanning/PlannerConstraint.hpp>
#include <rw/pathplanning/QToQPlanner.hpp>
#include <rwlibs/pathplanners/rrt/RRTQToQPlanner.hpp>
#include <rw/math/MetricFactory.hpp>
#include <rw/pathplanning/QSampler.hpp>
#include <rwlibs/proximitystrategies/ProximityStrategyPQP.hpp>
#include <rw/trajectory/LinearInterpolator.hpp>

#include <ros/ros.h>

#include <string>
#include <stdexcept>
#include <iostream>

class MoveRobot
{
 public:
  MoveRobot() : nodehandle_("~"), sdsip_(nodehandle_, "/caros")
  {
    initWorkCell();
    initDevice();
    initPathPlannerWithCollisionDetector();
  }

  virtual ~MoveRobot()
  {
    /* Empty */
  }
  
  bool My_Moveptp(const rw::math::Q q)
  {
    std::cout<<"Check 3"<<std::endl;

    if (!DoMovePtp(q))
    {
      std::cout<<"DoMovePtp false"<<std::endl;
      return false;
    }
    ROS_INFO_STREAM("Waiting a little moment for the movement to be finished");
    ros::Duration(5).sleep();  // In seconds
    return true;
  }

 protected:
  void initWorkCell()
  {
    std::cout<<"init workcell"<<std::endl;

    workcell_ = caros::getWorkCell();
    if (workcell_ == NULL)
    {
      ROS_ERROR("No workcell was loaded - exiting...");
      throw std::runtime_error("Not able to obtain a workcell.");
    }
  }

  void initDevice()
  {
    std::cout<<"init device"<<std::endl;

    std::string device_name;
    if (!nodehandle_.getParam("device_name", device_name))
    {
      ROS_FATAL_STREAM("The parameter '" << nodehandle_.getNamespace()
                                         << "/device_name' was not present on the parameter "
                                            "server! This parameter has to be specified "
                                            "for this test-node to work properly.");
      throw std::runtime_error("Not able to obtain device name.");
    }

    ROS_DEBUG_STREAM("Looking for the device '" << device_name << "' in the workcell.");
    device_ = workcell_->findDevice(device_name);
    if (device_ == NULL)
    {
      ROS_FATAL_STREAM("Unable to find device " << device_name << " in the loaded workcell");
      throw std::runtime_error("Not able to find the device within the workcell.");
    }
  }

  void initPathPlannerWithCollisionDetector()
  {
    std::cout<<"init pathplanner"<<std::endl;

    rw::kinematics::State state = workcell_->getDefaultState();
    /* Collision detector */
    auto detector = rw::common::ownedPtr(
        new rw::proximity::CollisionDetector(workcell_, rwlibs::proximitystrategies::ProximityStrategyPQP::make()));
    /* PlannerConstraint that uses the collision detector to verify that the _start_ and _end_ configurations are
     * collision free and that the edge(s) between those is/are also collision free. */
    const rw::pathplanning::PlannerConstraint planner_constraint =
        rw::pathplanning::PlannerConstraint::make(detector, device_, state);

    /* Just using a really simple path planner (straight line in the configuration space) */
   // planner_ = rw::pathplanning::QToQPlanner::make(planner_constraint);
      planner_ = rwlibs::pathplanners::RRTQToQPlanner::makeConnect(planner_constraint, rw::pathplanning::QSampler::makeUniform(device_),rw::math::MetricFactory::makeEuclidean<rw::math::Q>(), 0.1);
  }


  bool DoMovePtp(const rw::math::Q& newq)
  {
    std::cout<<"DoMovePtp"<<std::endl;
    const rw::math::Q qmove = newq;
    bool return_status = true;
    ROS_INFO_STREAM("Ask to movePtp to '" << qmove << "'.");
    bool ret = false;
    ret = sdsip_.movePtp(qmove);
    std::cout<<"called move"<<std::endl;
    if (!ret)
    {
      return_status = false;
      ROS_ERROR_STREAM("The serial device didn't acknowledge the movePtp command.");
    }
    
  return return_status;
  }

 protected:
  ros::NodeHandle nodehandle_;
  caros::SerialDeviceSIProxy sdsip_;
  rw::models::WorkCell::Ptr workcell_;
  rw::models::Device::Ptr device_;
  rw::pathplanning::QToQPlanner::Ptr planner_;
};

#endif  // MOVE_ROBOT_H
