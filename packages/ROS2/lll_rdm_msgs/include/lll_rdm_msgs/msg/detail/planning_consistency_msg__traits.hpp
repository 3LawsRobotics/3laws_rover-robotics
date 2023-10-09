// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/planning_consistency_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "lll_rdm_msgs/msg/detail/msg_header__traits.hpp"
// Member 'data'
#include "lll_rdm_msgs/msg/detail/planning_consistency_msg_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::PlanningConsistencyMsg>()
{
  return "lll_rdm_msgs::msg::PlanningConsistencyMsg";
}

template<>
inline const char * name<lll_rdm_msgs::msg::PlanningConsistencyMsg>()
{
  return "lll_rdm_msgs/msg/PlanningConsistencyMsg";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::PlanningConsistencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::PlanningConsistencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::PlanningConsistencyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__TRAITS_HPP_
