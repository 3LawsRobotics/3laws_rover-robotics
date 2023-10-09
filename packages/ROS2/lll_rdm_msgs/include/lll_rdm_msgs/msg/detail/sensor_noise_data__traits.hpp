// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_

#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_rdm_msgs::msg::SensorNoiseData>()
{
  return "lll_rdm_msgs::msg::SensorNoiseData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SensorNoiseData>()
{
  return "lll_rdm_msgs/msg/SensorNoiseData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SensorNoiseData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SensorNoiseData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::SensorNoiseData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_
