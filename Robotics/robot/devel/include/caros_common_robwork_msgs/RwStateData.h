// Generated by gencpp from file caros_common_robwork_msgs/RwStateData.msg
// DO NOT EDIT!


#ifndef CAROS_COMMON_ROBWORK_MSGS_MESSAGE_RWSTATEDATA_H
#define CAROS_COMMON_ROBWORK_MSGS_MESSAGE_RWSTATEDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace caros_common_robwork_msgs
{
template <class ContainerAllocator>
struct RwStateData_
{
  typedef RwStateData_<ContainerAllocator> Type;

  RwStateData_()
    : name()
    , size(0)
    , data()  {
    }
  RwStateData_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , size(0)
    , data(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint32_t _size_type;
  _size_type size;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> const> ConstPtr;

}; // struct RwStateData_

typedef ::caros_common_robwork_msgs::RwStateData_<std::allocator<void> > RwStateData;

typedef boost::shared_ptr< ::caros_common_robwork_msgs::RwStateData > RwStateDataPtr;
typedef boost::shared_ptr< ::caros_common_robwork_msgs::RwStateData const> RwStateDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_common_robwork_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'caros_common_robwork_msgs': ['/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62a1470d9f3ca6cf5ead3b2af2c21ebe";
  }

  static const char* value(const ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62a1470d9f3ca6cfULL;
  static const uint64_t static_value2 = 0x5ead3b2af2c21ebeULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_common_robwork_msgs/RwStateData";
  }

  static const char* value(const ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Serialization of RobWork state data\n\
string name\n\
uint32 size\n\
uint8[] data\n\
";
  }

  static const char* value(const ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.size);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RwStateData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_common_robwork_msgs::RwStateData_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.size);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_COMMON_ROBWORK_MSGS_MESSAGE_RWSTATEDATA_H
