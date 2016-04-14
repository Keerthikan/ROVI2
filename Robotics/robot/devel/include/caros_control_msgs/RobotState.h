// Generated by gencpp from file caros_control_msgs/RobotState.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_ROBOTSTATE_H
#define CAROS_CONTROL_MSGS_MESSAGE_ROBOTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <caros_common_msgs/Q.h>
#include <caros_common_msgs/Q.h>

namespace caros_control_msgs
{
template <class ContainerAllocator>
struct RobotState_
{
  typedef RobotState_<ContainerAllocator> Type;

  RobotState_()
    : header()
    , q()
    , dq()
    , is_moving(false)
    , is_colliding(false)
    , e_stopped(false)  {
    }
  RobotState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , q(_alloc)
    , dq(_alloc)
    , is_moving(false)
    , is_colliding(false)
    , e_stopped(false)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _q_type;
  _q_type q;

   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _dq_type;
  _dq_type dq;

   typedef uint8_t _is_moving_type;
  _is_moving_type is_moving;

   typedef uint8_t _is_colliding_type;
  _is_colliding_type is_colliding;

   typedef uint8_t _e_stopped_type;
  _e_stopped_type e_stopped;




  typedef boost::shared_ptr< ::caros_control_msgs::RobotState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::RobotState_<ContainerAllocator> const> ConstPtr;

}; // struct RobotState_

typedef ::caros_control_msgs::RobotState_<std::allocator<void> > RobotState;

typedef boost::shared_ptr< ::caros_control_msgs::RobotState > RobotStatePtr;
typedef boost::shared_ptr< ::caros_control_msgs::RobotState const> RobotStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::RobotState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::RobotState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::RobotState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::RobotState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::RobotState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::RobotState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::RobotState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::RobotState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::RobotState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "085b53002a7297f33a35f15c71b21bba";
  }

  static const char* value(const ::caros_control_msgs::RobotState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x085b53002a7297f3ULL;
  static const uint64_t static_value2 = 0x3a35f15c71b21bbaULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::RobotState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/RobotState";
  }

  static const char* value(const ::caros_control_msgs::RobotState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::RobotState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#RobotState represents the state of one a single robot in the setup.\n\
\n\
#Header containing information about time and frameid\n\
Header header\n\
\n\
#Joint configuration.\n\
# Angles should be represented as radians and distances in meters.\n\
caros_common_msgs/Q q\n\
\n\
#Velocities should be represented as radians per sec\n\
caros_common_msgs/Q dq\n\
\n\
#Is the robot moving\n\
bool is_moving\n\
\n\
#Is the robot in collision\n\
bool is_colliding\n\
\n\
#Is Emergency Stopped\n\
bool e_stopped\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: caros_common_msgs/Q\n\
# A configuration Q\n\
float64[] data\n\
";
  }

  static const char* value(const ::caros_control_msgs::RobotState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::RobotState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.q);
      stream.next(m.dq);
      stream.next(m.is_moving);
      stream.next(m.is_colliding);
      stream.next(m.e_stopped);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::RobotState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::RobotState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "q: ";
    s << std::endl;
    Printer< ::caros_common_msgs::Q_<ContainerAllocator> >::stream(s, indent + "  ", v.q);
    s << indent << "dq: ";
    s << std::endl;
    Printer< ::caros_common_msgs::Q_<ContainerAllocator> >::stream(s, indent + "  ", v.dq);
    s << indent << "is_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_moving);
    s << indent << "is_colliding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_colliding);
    s << indent << "e_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.e_stopped);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_ROBOTSTATE_H