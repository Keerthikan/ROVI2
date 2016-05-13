// Generated by gencpp from file caros_control_msgs/SerialDeviceMoveVelTRequest.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELTREQUEST_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>

namespace caros_control_msgs
{
template <class ContainerAllocator>
struct SerialDeviceMoveVelTRequest_
{
  typedef SerialDeviceMoveVelTRequest_<ContainerAllocator> Type;

  SerialDeviceMoveVelTRequest_()
    : vel()  {
    }
  SerialDeviceMoveVelTRequest_(const ContainerAllocator& _alloc)
    : vel(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _vel_type;
  _vel_type vel;




  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SerialDeviceMoveVelTRequest_

typedef ::caros_control_msgs::SerialDeviceMoveVelTRequest_<std::allocator<void> > SerialDeviceMoveVelTRequest;

typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelTRequest > SerialDeviceMoveVelTRequestPtr;
typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelTRequest const> SerialDeviceMoveVelTRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7232eba0461d56f6b1172de04a9957ca";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7232eba0461d56f6ULL;
  static const uint64_t static_value2 = 0xb1172de04a9957caULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceMoveVelTRequest";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
geometry_msgs/Twist vel\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SerialDeviceMoveVelTRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::SerialDeviceMoveVelTRequest_<ContainerAllocator>& v)
  {
    s << indent << "vel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELTREQUEST_H