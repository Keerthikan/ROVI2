// Generated by gencpp from file caros_sensor_msgs/TactileArrayData.msg
// DO NOT EDIT!


#ifndef CAROS_SENSOR_MSGS_MESSAGE_TACTILEARRAYDATA_H
#define CAROS_SENSOR_MSGS_MESSAGE_TACTILEARRAYDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace caros_sensor_msgs
{
template <class ContainerAllocator>
struct TactileArrayData_
{
  typedef TactileArrayData_<ContainerAllocator> Type;

  TactileArrayData_()
    : height(0)
    , width(0)
    , data()  {
    }
  TactileArrayData_(const ContainerAllocator& _alloc)
    : height(0)
    , width(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _height_type;
  _height_type height;

   typedef uint32_t _width_type;
  _width_type width;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> const> ConstPtr;

}; // struct TactileArrayData_

typedef ::caros_sensor_msgs::TactileArrayData_<std::allocator<void> > TactileArrayData;

typedef boost::shared_ptr< ::caros_sensor_msgs::TactileArrayData > TactileArrayDataPtr;
typedef boost::shared_ptr< ::caros_sensor_msgs::TactileArrayData const> TactileArrayDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace caros_sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'caros_common_msgs': ['/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg'], 'caros_sensor_msgs': ['/home/keerthikan/ca/src/caros/interfaces/caros_sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25f543575cd353f68dacc167e60ccb4d";
  }

  static const char* value(const ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25f543575cd353f6ULL;
  static const uint64_t static_value2 = 0x8dacc167e60ccb4dULL;
};

template<class ContainerAllocator>
struct DataType< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caros_sensor_msgs/TactileArrayData";
  }

  static const char* value(const ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Tepresents the state of a single array of tactile sensors. This should be used\n\
# in conjuction with TactileArrayState.\n\
\n\
# Tactile matrix height (number of rows)\n\
uint32 height\n\
\n\
# Tactile matrix width (number of columns)\n\
uint32 width\n\
\n\
# Tactile data\n\
float64[] data\n\
";
  }

  static const char* value(const ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TactileArrayData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::caros_sensor_msgs::TactileArrayData_<ContainerAllocator>& v)
  {
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAROS_SENSOR_MSGS_MESSAGE_TACTILEARRAYDATA_H
