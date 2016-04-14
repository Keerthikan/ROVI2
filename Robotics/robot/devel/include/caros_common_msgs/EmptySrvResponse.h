// Generated by gencpp from file caros_common_msgs/EmptySrvResponse.msg
// DO NOT EDIT!


#ifndef CAROS_COMMON_MSGS_MESSAGE_EMPTYSRVRESPONSE_H
#define CAROS_COMMON_MSGS_MESSAGE_EMPTYSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace caros_common_msgs
{
template <class ContainerAllocator>
struct EmptySrvResponse_
{
  typedef EmptySrvResponse_<ContainerAllocator> Type;

  EmptySrvResponse_()
    : success(false)  {
    }
  EmptySrvResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
    }



   typedef uint8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct EmptySrvResponse_

typedef ::caros_common_msgs::EmptySrvResponse_<std::allocator<void> > EmptySrvResponse;

typedef boost::shared_ptr< ::caros_common_msgs::EmptySrvResponse > EmptySrvResponsePtr;
typedef boost::shared_ptr< ::caros_common_msgs::EmptySrvResponse const> EmptySrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_common_msgs/EmptySrvResponse";
  }

  static const char* value(const ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
\n\
";
  }

  static const char* value(const ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct EmptySrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_common_msgs::EmptySrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_COMMON_MSGS_MESSAGE_EMPTYSRVRESPONSE_H