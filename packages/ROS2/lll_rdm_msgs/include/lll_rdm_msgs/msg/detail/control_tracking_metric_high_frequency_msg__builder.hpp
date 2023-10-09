// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__BUILDER_HPP_

#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlTrackingMetricHighFrequencyMsg_tags
{
public:
  explicit Init_ControlTrackingMetricHighFrequencyMsg_tags(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg tags(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg msg_;
};

class Init_ControlTrackingMetricHighFrequencyMsg_data
{
public:
  explicit Init_ControlTrackingMetricHighFrequencyMsg_data(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg & msg)
  : msg_(msg)
  {}
  Init_ControlTrackingMetricHighFrequencyMsg_tags data(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ControlTrackingMetricHighFrequencyMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg msg_;
};

class Init_ControlTrackingMetricHighFrequencyMsg_header
{
public:
  Init_ControlTrackingMetricHighFrequencyMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTrackingMetricHighFrequencyMsg_data header(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlTrackingMetricHighFrequencyMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_ControlTrackingMetricHighFrequencyMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__BUILDER_HPP_