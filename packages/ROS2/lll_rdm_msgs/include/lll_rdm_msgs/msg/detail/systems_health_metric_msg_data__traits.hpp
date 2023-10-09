// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SystemsHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/systems_health_metric_msg_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'values'
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>()
{
  return "lll_rdm_msgs::msg::SystemsHealthMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>()
{
  return "lll_rdm_msgs/msg/SystemsHealthMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::integral_constant<bool, has_fixed_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>::value> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::integral_constant<bool, has_bounded_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>::value> {};

template<>
struct is_message<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
