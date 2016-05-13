// Generated by gencpp from file caros_universalrobot/UrServiceServoTRequest.msg
// DO NOT EDIT!


#ifndef CAROS_UNIVERSALROBOT_MESSAGE_URSERVICESERVOTREQUEST_H
#define CAROS_UNIVERSALROBOT_MESSAGE_URSERVICESERVOTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace caros_universalrobot
{
template <class ContainerAllocator>
struct UrServiceServoTRequest_
{
  typedef UrServiceServoTRequest_<ContainerAllocator> Type;

  UrServiceServoTRequest_()
    : target()  {
    }
  UrServiceServoTRequest_(const ContainerAllocator& _alloc)
    : target(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _target_type;
  _target_type target;




  typedef boost::shared_ptr< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> const> ConstPtr;

}; // struct UrServiceServoTRequest_

typedef ::caros_universalrobot::UrServiceServoTRequest_<std::allocator<void> > UrServiceServoTRequest;

typedef boost::shared_ptr< ::caros_universalrobot::UrServiceServoTRequest > UrServiceServoTRequestPtr;
typedef boost::shared_ptr< ::caros_universalrobot::UrServiceServoTRequest const> UrServiceServoTRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_universalrobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg'], 'caros_universalrobot': ['/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fc9461ac6e09623639c126b44c8a738d";
  }

  static const char* value(const ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfc9461ac6e096236ULL;
  static const uint64_t static_value2 = 0x39c126b44c8a738dULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_universalrobot/UrServiceServoTRequest";
  }

  static const char* value(const ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/Transform target\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
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
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UrServiceServoTRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_universalrobot::UrServiceServoTRequest_<ContainerAllocator>& v)
  {
    s << indent << "target: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_UNIVERSALROBOT_MESSAGE_URSERVICESERVOTREQUEST_H