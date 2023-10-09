// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::SignalAverageMsgData>()
{
  return "lll_rdm_msgs::msg::SignalAverageMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SignalAverageMsgData>()
{
  return "lll_rdm_msgs/msg/SignalAverageMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_
