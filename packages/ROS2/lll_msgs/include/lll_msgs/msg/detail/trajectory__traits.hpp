// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "lll_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_msgs::msg::Trajectory>()
{
  return "lll_msgs::msg::Trajectory";
}

template<>
inline const char * name<lll_msgs::msg::Trajectory>()
{
  return "lll_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<lll_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
