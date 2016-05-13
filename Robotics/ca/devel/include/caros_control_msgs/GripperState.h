// Generated by gencpp from file caros_control_msgs/GripperState.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSTATE_H
#define CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSTATE_H


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
#include <caros_common_msgs/Q.h>

namespace caros_control_msgs
{
template <class ContainerAllocator>
struct GripperState_
{
  typedef GripperState_<ContainerAllocator> Type;

  GripperState_()
    : header()
    , q()
    , dq()
    , force()
    , is_moving(false)
    , is_blocked(false)
    , is_stopped(false)
    , e_stopped(false)  {
    }
  GripperState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , q(_alloc)
    , dq(_alloc)
    , force(_alloc)
    , is_moving(false)
    , is_blocked(false)
    , is_stopped(false)
    , e_stopped(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _q_type;
  _q_type q;

   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _dq_type;
  _dq_type dq;

   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef uint8_t _is_moving_type;
  _is_moving_type is_moving;

   typedef uint8_t _is_blocked_type;
  _is_blocked_type is_blocked;

   typedef uint8_t _is_stopped_type;
  _is_stopped_type is_stopped;

   typedef uint8_t _e_stopped_type;
  _e_stopped_type e_stopped;




  typedef boost::shared_ptr< ::caros_control_msgs::GripperState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::GripperState_<ContainerAllocator> const> ConstPtr;

}; // struct GripperState_

typedef ::caros_control_msgs::GripperState_<std::allocator<void> > GripperState;

typedef boost::shared_ptr< ::caros_control_msgs::GripperState > GripperStatePtr;
typedef boost::shared_ptr< ::caros_control_msgs::GripperState const> GripperStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::GripperState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::GripperState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::GripperState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::GripperState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::GripperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::GripperState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::GripperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::GripperState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::GripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25dfabc8c04bee1186049dd520841711";
  }

  static const char* value(const ::caros_control_msgs::GripperState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25dfabc8c04bee11ULL;
  static const uint64_t static_value2 = 0x86049dd520841711ULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::GripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/GripperState";
  }

  static const char* value(const ::caros_control_msgs::GripperState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::GripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# GripperState represents the state of a single gripper in the setup.\n\
\n\
# Header containing information about time and frameid\n\
Header header\n\
\n\
# Joint configuration.\n\
# Angles should be represented as radians and distances in meters.\n\
caros_common_msgs/Q q\n\
\n\
# Velocities should be represented as radians per sec\n\
caros_common_msgs/Q dq\n\
\n\
# Approximate force applied by the gripper joints (most implementations simply output the measured current)\n\
caros_common_msgs/Q force\n\
\n\
# Is the gripper trying to move to a target (notice it can still be blocked even if isMoving is true)\n\
bool is_moving\n\
\n\
# If the gripper is moving then it may be blocked.\n\
bool is_blocked\n\
\n\
# If the gripper reached its target then isStopped is true\n\
bool is_stopped\n\
\n\
# Is Emergency Stopped\n\
bool e_stopped\n\
\n\
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

  static const char* value(const ::caros_control_msgs::GripperState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::GripperState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.q);
      stream.next(m.dq);
      stream.next(m.force);
      stream.next(m.is_moving);
      stream.next(m.is_blocked);
      stream.next(m.is_stopped);
      stream.next(m.e_stopped);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GripperState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::GripperState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::GripperState_<ContainerAllocator>& v)
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
    s << indent << "force: ";
    s << std::endl;
    Printer< ::caros_common_msgs::Q_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "is_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_moving);
    s << indent << "is_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_blocked);
    s << indent << "is_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_stopped);
    s << indent << "e_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.e_stopped);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSTATE_H
