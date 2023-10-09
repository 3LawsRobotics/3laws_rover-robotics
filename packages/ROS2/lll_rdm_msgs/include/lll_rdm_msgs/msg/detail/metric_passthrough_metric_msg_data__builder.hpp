// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__BUILDER_HPP_

#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_MetricPassthroughMetricMsgData_value
{
public:
  Init_MetricPassthroughMetricMsgData_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsgData value(::lll_rdm_msgs::msg::MetricPassthroughMetricMsgData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_MetricPassthroughMetricMsgData_value();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__BUILDER_HPP_
