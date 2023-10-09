// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return "lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return "lll_rdm_msgs/msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_
