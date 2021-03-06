// Generated by gencpp from file caros_control_msgs/SerialDeviceForceControlStart.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEFORCECONTROLSTART_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEFORCECONTROLSTART_H

#include <ros/service_traits.h>


#include <caros_control_msgs/SerialDeviceForceControlStartRequest.h>
#include <caros_control_msgs/SerialDeviceForceControlStartResponse.h>


namespace caros_control_msgs
{

struct SerialDeviceForceControlStart
{

typedef SerialDeviceForceControlStartRequest Request;
typedef SerialDeviceForceControlStartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SerialDeviceForceControlStart
} // namespace caros_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStart > {
  static const char* value()
  {
    return "5e3ec31bde7d465f1f29c724fa9f5796";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStart&) { return value(); }
};

template<>
struct DataType< ::caros_control_msgs::SerialDeviceForceControlStart > {
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceForceControlStart";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStart&) { return value(); }
};


// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStartRequest> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStart > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStart >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceForceControlStartRequest> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceForceControlStart > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceForceControlStartRequest>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceForceControlStart >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStartResponse> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStart > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceForceControlStart >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceForceControlStartResponse> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceForceControlStart > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceForceControlStartResponse>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceForceControlStart >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceForceControlStartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEFORCECONTROLSTART_H
