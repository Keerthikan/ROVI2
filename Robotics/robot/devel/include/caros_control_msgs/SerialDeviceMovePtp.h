// Generated by gencpp from file caros_control_msgs/SerialDeviceMovePtp.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEPTP_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEPTP_H

#include <ros/service_traits.h>


#include <caros_control_msgs/SerialDeviceMovePtpRequest.h>
#include <caros_control_msgs/SerialDeviceMovePtpResponse.h>


namespace caros_control_msgs
{

struct SerialDeviceMovePtp
{

typedef SerialDeviceMovePtpRequest Request;
typedef SerialDeviceMovePtpResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SerialDeviceMovePtp
} // namespace caros_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMovePtp > {
  static const char* value()
  {
    return "2fbc9fa7b435c3ead71fa46c56458df1";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtp&) { return value(); }
};

template<>
struct DataType< ::caros_control_msgs::SerialDeviceMovePtp > {
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceMovePtp";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtp&) { return value(); }
};


// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMovePtpRequest> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMovePtp > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMovePtpRequest>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceMovePtp >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtpRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceMovePtpRequest> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceMovePtp > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceMovePtpRequest>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceMovePtp >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtpRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMovePtpResponse> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMovePtp > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMovePtpResponse>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceMovePtp >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtpResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceMovePtpResponse> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceMovePtp > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceMovePtpResponse>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceMovePtp >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMovePtpResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEPTP_H
