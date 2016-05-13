// Generated by gencpp from file caros_control_msgs/GripperGripQRequest.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_GRIPPERGRIPQREQUEST_H
#define CAROS_CONTROL_MSGS_MESSAGE_GRIPPERGRIPQREQUEST_H


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
struct GripperGripQRequest_
{
  typedef GripperGripQRequest_<ContainerAllocator> Type;

  GripperGripQRequest_()
    : q()  {
    }
  GripperGripQRequest_(const ContainerAllocator& _alloc)
    : q(_alloc)  {
  (void)_alloc;
    }



   typedef  ::caros_common_msgs::Q_<ContainerAllocator>  _q_type;
  _q_type q;




  typedef boost::shared_ptr< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GripperGripQRequest_

typedef ::caros_control_msgs::GripperGripQRequest_<std::allocator<void> > GripperGripQRequest;

typedef boost::shared_ptr< ::caros_control_msgs::GripperGripQRequest > GripperGripQRequestPtr;
typedef boost::shared_ptr< ::caros_control_msgs::GripperGripQRequest const> GripperGripQRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9291f556139bcd303c4d89dd0d338e1d";
  }

  static const char* value(const ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9291f556139bcd30ULL;
  static const uint64_t static_value2 = 0x3c4d89dd0d338e1dULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/GripperGripQRequest";
  }

  static const char* value(const ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
caros_common_msgs/Q q\n\
\n\
================================================================================\n\
MSG: caros_common_msgs/Q\n\
# A configuration Q\n\
float64[] data\n\
";
  }

  static const char* value(const ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.q);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GripperGripQRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::GripperGripQRequest_<ContainerAllocator>& v)
  {
    s << indent << "q: ";
    s << std::endl;
    Printer< ::caros_common_msgs::Q_<ContainerAllocator> >::stream(s, indent + "  ", v.q);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_GRIPPERGRIPQREQUEST_H
