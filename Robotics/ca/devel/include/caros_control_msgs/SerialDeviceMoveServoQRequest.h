// Generated by gencpp from file caros_control_msgs/SerialDeviceMoveServoQRequest.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVESERVOQREQUEST_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVESERVOQREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <caros_common_msgs/Q.h>

namespace caros_control_msgs
{
template <class ContainerAllocator>
struct SerialDeviceMoveServoQRequest_
{
  typedef SerialDeviceMoveServoQRequest_<ContainerAllocator> Type;

  SerialDeviceMoveServoQRequest_()
    : targets()
    , speeds()  {
    }
  SerialDeviceMoveServoQRequest_(const ContainerAllocator& _alloc)
    : targets(_alloc)
    , speeds(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::caros_common_msgs::Q_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::caros_common_msgs::Q_<ContainerAllocator> >::other >  _targets_type;
  _targets_type targets;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _speeds_type;
  _speeds_type speeds;




  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SerialDeviceMoveServoQRequest_

typedef ::caros_control_msgs::SerialDeviceMoveServoQRequest_<std::allocator<void> > SerialDeviceMoveServoQRequest;

typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveServoQRequest > SerialDeviceMoveServoQRequestPtr;
typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveServoQRequest const> SerialDeviceMoveServoQRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9064e7ed416d09a44628778cf5a3df17";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9064e7ed416d09a4ULL;
  static const uint64_t static_value2 = 0x4628778cf5a3df17ULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceMoveServoQRequest";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
caros_common_msgs/Q[] targets\n\
\n\
\n\
float32[] speeds\n\
\n\
\n\
================================================================================\n\
MSG: caros_common_msgs/Q\n\
# A configuration Q\n\
float64[] data\n\
";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.targets);
      stream.next(m.speeds);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SerialDeviceMoveServoQRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::SerialDeviceMoveServoQRequest_<ContainerAllocator>& v)
  {
    s << indent << "targets[]" << std::endl;
    for (size_t i = 0; i < v.targets.size(); ++i)
    {
      s << indent << "  targets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::caros_common_msgs::Q_<ContainerAllocator> >::stream(s, indent + "    ", v.targets[i]);
    }
    s << indent << "speeds[]" << std::endl;
    for (size_t i = 0; i < v.speeds.size(); ++i)
    {
      s << indent << "  speeds[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.speeds[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVESERVOQREQUEST_H
