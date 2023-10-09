// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG__BUILDER_HPP_

#include "lll_rdm_msgs/msg/detail/clock_health_metric_utc_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ClockHealthMetricUtcMsg_tags
{
public:
  explicit Init_ClockHealthMetricUtcMsg_tags(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg tags(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg msg_;
};

class Init_ClockHealthMetricUtcMsg_data
{
public:
  explicit Init_ClockHealthMetricUtcMsg_data(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg & msg)
  : msg_(msg)
  {}
  Init_ClockHealthMetricUtcMsg_tags data(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ClockHealthMetricUtcMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg msg_;
};

class Init_ClockHealthMetricUtcMsg_header
{
public:
  Init_ClockHealthMetricUtcMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClockHealthMetricUtcMsg_data header(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClockHealthMetricUtcMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ClockHealthMetricUtcMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_ClockHealthMetricUtcMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG__BUILDER_HPP_
