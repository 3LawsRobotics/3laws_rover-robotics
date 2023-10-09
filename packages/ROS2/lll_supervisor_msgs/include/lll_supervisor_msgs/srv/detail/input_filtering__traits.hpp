// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_

#include "lll_supervisor_msgs/srv/detail/input_filtering__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'input_desired'
#include "lll_msgs/msg/detail/float64_vector_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering_Request>()
{
  return "lll_supervisor_msgs::srv::InputFiltering_Request";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering_Request>()
{
  return "lll_supervisor_msgs/srv/InputFiltering_Request";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::integral_constant<bool, has_fixed_size<lll_msgs::msg::Float64VectorStamped>::value> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::integral_constant<bool, has_bounded_size<lll_msgs::msg::Float64VectorStamped>::value> {};

template<>
struct is_message<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'res'
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering_Response>()
{
  return "lll_supervisor_msgs::srv::InputFiltering_Response";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering_Response>()
{
  return "lll_supervisor_msgs/srv/InputFiltering_Response";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::integral_constant<bool, has_fixed_size<lll_supervisor_msgs::msg::InputFilteringResult>::value> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::integral_constant<bool, has_bounded_size<lll_supervisor_msgs::msg::InputFilteringResult>::value> {};

template<>
struct is_message<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering>()
{
  return "lll_supervisor_msgs::srv::InputFiltering";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering>()
{
  return "lll_supervisor_msgs/srv/InputFiltering";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering>
  : std::integral_constant<
    bool,
    has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Request>::value &&
    has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Response>::value
  >
{
};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering>
  : std::integral_constant<
    bool,
    has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Request>::value &&
    has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Response>::value
  >
{
};

template<>
struct is_service<lll_supervisor_msgs::srv::InputFiltering>
  : std::true_type
{
};

template<>
struct is_service_request<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_
