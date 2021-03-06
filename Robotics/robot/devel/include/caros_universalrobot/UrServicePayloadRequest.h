// Generated by gencpp from file caros_universalrobot/UrServicePayloadRequest.msg
// DO NOT EDIT!


#ifndef CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEPAYLOADREQUEST_H
#define CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEPAYLOADREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace caros_universalrobot
{
template <class ContainerAllocator>
struct UrServicePayloadRequest_
{
  typedef UrServicePayloadRequest_<ContainerAllocator> Type;

  UrServicePayloadRequest_()
    : mass(0.0)
    , com()  {
      com.assign(0.0);
  }
  UrServicePayloadRequest_(const ContainerAllocator& _alloc)
    : mass(0.0)
    , com()  {
      com.assign(0.0);
  }



   typedef double _mass_type;
  _mass_type mass;

   typedef boost::array<double, 3>  _com_type;
  _com_type com;




  typedef boost::shared_ptr< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct UrServicePayloadRequest_

typedef ::caros_universalrobot::UrServicePayloadRequest_<std::allocator<void> > UrServicePayloadRequest;

typedef boost::shared_ptr< ::caros_universalrobot::UrServicePayloadRequest > UrServicePayloadRequestPtr;
typedef boost::shared_ptr< ::caros_universalrobot::UrServicePayloadRequest const> UrServicePayloadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_universalrobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33a2a64ef7f45c8858c7a4f89a773c36";
  }

  static const char* value(const ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33a2a64ef7f45c88ULL;
  static const uint64_t static_value2 = 0x58c7a4f89a773c36ULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_universalrobot/UrServicePayloadRequest";
  }

  static const char* value(const ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 mass\n\
\n\
\n\
float64[3] com\n\
\n\
";
  }

  static const char* value(const ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mass);
      stream.next(m.com);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UrServicePayloadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_universalrobot::UrServicePayloadRequest_<ContainerAllocator>& v)
  {
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
    s << indent << "com[]" << std::endl;
    for (size_t i = 0; i < v.com.size(); ++i)
    {
      s << indent << "  com[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.com[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEPAYLOADREQUEST_H
