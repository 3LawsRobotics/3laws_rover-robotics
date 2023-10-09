// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__TRAITS_HPP_

#include "lll_supervisor_msgs/msg/detail/object_detections__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::msg::ObjectDetections>()
{
  return "lll_supervisor_msgs::msg::ObjectDetections";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::ObjectDetections>()
{
  return "lll_supervisor_msgs/msg/ObjectDetections";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::ObjectDetections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::ObjectDetections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::ObjectDetections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__TRAITS_HPP_
