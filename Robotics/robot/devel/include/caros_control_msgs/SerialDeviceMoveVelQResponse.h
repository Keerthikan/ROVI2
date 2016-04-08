// Generated by gencpp from file caros_control_msgs/SerialDeviceMoveVelQResponse.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELQRESPONSE_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELQRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace caros_control_msgs
{
template <class ContainerAllocator>
struct SerialDeviceMoveVelQResponse_
{
  typedef SerialDeviceMoveVelQResponse_<ContainerAllocator> Type;

  SerialDeviceMoveVelQResponse_()
    : success(false)  {
    }
  SerialDeviceMoveVelQResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
    }



   typedef uint8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SerialDeviceMoveVelQResponse_

typedef ::caros_control_msgs::SerialDeviceMoveVelQResponse_<std::allocator<void> > SerialDeviceMoveVelQResponse;

typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelQResponse > SerialDeviceMoveVelQResponsePtr;
typedef boost::shared_ptr< ::caros_control_msgs::SerialDeviceMoveVelQResponse const> SerialDeviceMoveVelQResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg'], 'caros_control_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceMoveVelQResponse";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
\n\
";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SerialDeviceMoveVelQResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_control_msgs::SerialDeviceMoveVelQResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELQRESPONSE_H
