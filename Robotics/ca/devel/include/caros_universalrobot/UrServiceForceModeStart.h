// Generated by gencpp from file caros_universalrobot/UrServiceForceModeStart.msg
// DO NOT EDIT!


#ifndef CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEFORCEMODESTART_H
#define CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEFORCEMODESTART_H

#include <ros/service_traits.h>


#include <caros_universalrobot/UrServiceForceModeStartRequest.h>
#include <caros_universalrobot/UrServiceForceModeStartResponse.h>


namespace caros_universalrobot
{

struct UrServiceForceModeStart
{

typedef UrServiceForceModeStartRequest Request;
typedef UrServiceForceModeStartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UrServiceForceModeStart
} // namespace caros_universalrobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::caros_universalrobot::UrServiceForceModeStart > {
  static const char* value()
  {
    return "17f1800eba3c421c9cb128cbf7d53ac9";
  }

  static const char* value(const ::caros_universalrobot::UrServiceForceModeStart&) { return value(); }
};

template<>
struct DataType< ::caros_universalrobot::UrServiceForceModeStart > {
  static const char* value()
  {
    return "caros_universalrobot/UrServiceForceModeStart";
  }

  static const char* value(const ::caros_universalrobot::UrServiceForceModeStart&) { return value(); }
};


// service_traits::MD5Sum< ::caros_universalrobot::UrServiceForceModeStartRequest> should match 
// service_traits::MD5Sum< ::caros_universalrobot::UrServiceForceModeStart > 
template<>
struct MD5Sum< ::caros_universalrobot::UrServiceForceModeStartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::caros_universalrobot::UrServiceForceModeStart >::value();
  }
  static const char* value(const ::caros_universalrobot::UrServiceForceModeStartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_universalrobot::UrServiceForceModeStartRequest> should match 
// service_traits::DataType< ::caros_universalrobot::UrServiceForceModeStart > 
template<>
struct DataType< ::caros_universalrobot::UrServiceForceModeStartRequest>
{
  static const char* value()
  {
    return DataType< ::caros_universalrobot::UrServiceForceModeStart >::value();
  }
  static const char* value(const ::caros_universalrobot::UrServiceForceModeStartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::caros_universalrobot::UrServiceForceModeStartResponse> should match 
// service_traits::MD5Sum< ::caros_universalrobot::UrServiceForceModeStart > 
template<>
struct MD5Sum< ::caros_universalrobot::UrServiceForceModeStartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::caros_universalrobot::UrServiceForceModeStart >::value();
  }
  static const char* value(const ::caros_universalrobot::UrServiceForceModeStartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::caros_universalrobot::UrServiceForceModeStartResponse> should match 
// service_traits::DataType< ::caros_universalrobot::UrServiceForceModeStart > 
template<>
struct DataType< ::caros_universalrobot::UrServiceForceModeStartResponse>
{
  static const char* value()
  {
    return DataType< ::caros_universalrobot::UrServiceForceModeStart >::value();
  }
  static const char* value(const ::caros_universalrobot::UrServiceForceModeStartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAROS_UNIVERSALROBOT_MESSAGE_URSERVICEFORCEMODESTART_H
