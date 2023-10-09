// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/msg_header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::MsgHeader>()
{
  return "lll_rdm_msgs::msg::MsgHeader";
}

template<>
inline const char * name<lll_rdm_msgs::msg::MsgHeader>()
{
  return "lll_rdm_msgs/msg/MsgHeader";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::MsgHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::MsgHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::MsgHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__TRAITS_HPP_
