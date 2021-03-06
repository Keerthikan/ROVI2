// Generated by gencpp from file caros_control_msgs/GripperSetVelocityQ.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSETVELOCITYQ_H
#define CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSETVELOCITYQ_H

#include <ros/service_traits.h>


#include <caros_control_msgs/GripperSetVelocityQRequest.h>
#include <caros_control_msgs/GripperSetVelocityQResponse.h>


namespace caros_control_msgs
{

struct GripperSetVelocityQ
{

typedef GripperSetVelocityQRequest Request;
typedef GripperSetVelocityQResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GripperSetVelocityQ
} // namespace caros_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::caros_control_msgs::GripperSetVelocityQ > {
  static const char* value()
  {
    return "6364873f803d54771b419bcf1075611d";
  }

  static const char* value(const ::caros_control_msgs::GripperSetVelocityQ&) { return value(); }
};

template<>
struct DataType< ::caros_control_msgs::GripperSetVelocityQ > {
  static const char* value()
  {
    return "caros_control_msgs/GripperSetVelocityQ";
  }

  static const char* value(const ::caros_control_msgs::GripperSetVelocityQ&) { return value(); }
};


// service_traits::MD5Sum< ::caros_control_msgs::GripperSetVelocityQRequest> should match 
// service_traits::MD5Sum< ::caros_control_msgs::GripperSetVelocityQ > 
template<>
struct MD5Sum< ::caros_control_msgs::GripperSetVelocityQRequest>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::GripperSetVelocityQ >::value();
  }
  static const char* value(const ::caros_control_msgs::GripperSetVelocityQRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::GripperSetVelocityQRequest> should match 
// service_traits::DataType< ::caros_control_msgs::GripperSetVelocityQ > 
template<>
struct DataType< ::caros_control_msgs::GripperSetVelocityQRequest>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::GripperSetVelocityQ >::value();
  }
  static const char* value(const ::caros_control_msgs::GripperSetVelocityQRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::caros_control_msgs::GripperSetVelocityQResponse> should match 
// service_traits::MD5Sum< ::caros_control_msgs::GripperSetVelocityQ > 
template<>
struct MD5Sum< ::caros_control_msgs::GripperSetVelocityQResponse>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::GripperSetVelocityQ >::value();
  }
  static const char* value(const ::caros_control_msgs::GripperSetVelocityQResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::GripperSetVelocityQResponse> should match 
// service_traits::DataType< ::caros_control_msgs::GripperSetVelocityQ > 
template<>
struct DataType< ::caros_control_msgs::GripperSetVelocityQResponse>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::GripperSetVelocityQ >::value();
  }
  static const char* value(const ::caros_control_msgs::GripperSetVelocityQResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_GRIPPERSETVELOCITYQ_H
