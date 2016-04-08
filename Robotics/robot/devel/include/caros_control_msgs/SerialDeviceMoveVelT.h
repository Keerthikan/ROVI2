// Generated by gencpp from file caros_control_msgs/SerialDeviceMoveVelT.msg
// DO NOT EDIT!


#ifndef CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELT_H
#define CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELT_H

#include <ros/service_traits.h>


#include <caros_control_msgs/SerialDeviceMoveVelTRequest.h>
#include <caros_control_msgs/SerialDeviceMoveVelTResponse.h>


namespace caros_control_msgs
{

struct SerialDeviceMoveVelT
{

typedef SerialDeviceMoveVelTRequest Request;
typedef SerialDeviceMoveVelTResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SerialDeviceMoveVelT
} // namespace caros_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelT > {
  static const char* value()
  {
    return "82ef1143126410b5082ced32f5c883a9";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelT&) { return value(); }
};

template<>
struct DataType< ::caros_control_msgs::SerialDeviceMoveVelT > {
  static const char* value()
  {
    return "caros_control_msgs/SerialDeviceMoveVelT";
  }

  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelT&) { return value(); }
};


// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelTRequest> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelT > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelTRequest>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelT >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceMoveVelTRequest> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceMoveVelT > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceMoveVelTRequest>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceMoveVelT >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelTResponse> should match 
// service_traits::MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelT > 
template<>
struct MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelTResponse>
{
  static const char* value()
  {
    return MD5Sum< ::caros_control_msgs::SerialDeviceMoveVelT >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_control_msgs::SerialDeviceMoveVelTResponse> should match 
// service_traits::DataType< ::caros_control_msgs::SerialDeviceMoveVelT > 
template<>
struct DataType< ::caros_control_msgs::SerialDeviceMoveVelTResponse>
{
  static const char* value()
  {
    return DataType< ::caros_control_msgs::SerialDeviceMoveVelT >::value();
  }
  static const char* value(const ::caros_control_msgs::SerialDeviceMoveVelTResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAROS_CONTROL_MSGS_MESSAGE_SERIALDEVICEMOVEVELT_H
