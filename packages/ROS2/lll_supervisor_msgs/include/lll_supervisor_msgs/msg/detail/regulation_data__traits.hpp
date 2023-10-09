// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_

#include "lll_supervisor_msgs/msg/detail/regulation_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'input_cstr'
#include "lll_supervisor_msgs/msg/detail/input_constraints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::msg::RegulationData>()
{
  return "lll_supervisor_msgs::msg::RegulationData";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::RegulationData>()
{
  return "lll_supervisor_msgs/msg/RegulationData";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::RegulationData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::RegulationData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::RegulationData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_
