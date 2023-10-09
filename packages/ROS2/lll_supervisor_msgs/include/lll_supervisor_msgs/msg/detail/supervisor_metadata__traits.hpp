// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_

#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return "lll_supervisor_msgs::msg::SupervisorMetadata";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return "lll_supervisor_msgs/msg/SupervisorMetadata";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_
