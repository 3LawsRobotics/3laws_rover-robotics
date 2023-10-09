// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from lll_msgs:msg/Float64VectorStamped.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "lll_msgs/msg/detail/float64_vector_stamped__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace lll_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lll_msgs
cdr_serialize(
  const lll_msgs::msg::Float64VectorStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lll_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lll_msgs::msg::Float64VectorStamped & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lll_msgs
get_serialized_size(
  const lll_msgs::msg::Float64VectorStamped & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lll_msgs
max_serialized_size_Float64VectorStamped(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lll_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lll_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lll_msgs, msg, Float64VectorStamped)();

#ifdef __cplusplus
}
#endif

#endif  // LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
