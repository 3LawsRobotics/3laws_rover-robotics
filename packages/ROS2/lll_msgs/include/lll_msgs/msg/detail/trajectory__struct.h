// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'times'
// Member 'states'
// Member 'inputs'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Trajectory in the package lll_msgs.
typedef struct lll_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  uint64_t nx;
  uint64_t nu;
  uint64_t length;
  rosidl_runtime_c__int64__Sequence times;
  rosidl_runtime_c__double__Sequence states;
  rosidl_runtime_c__double__Sequence inputs;
} lll_msgs__msg__Trajectory;

// Struct for a sequence of lll_msgs__msg__Trajectory.
typedef struct lll_msgs__msg__Trajectory__Sequence
{
  lll_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
