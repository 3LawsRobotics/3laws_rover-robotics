// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_H_

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
// Member 'input_desired'
// Member 'input_actual'
// Member 'input_failsafe'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'generation_extras'
// Member 'filtering_extras'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SupervisorMetadata in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__SupervisorMetadata
{
  std_msgs__msg__Header header;
  int64_t t_state;
  int64_t t_input;
  rosidl_runtime_c__double__Sequence input_desired;
  rosidl_runtime_c__double__Sequence input_actual;
  rosidl_runtime_c__double__Sequence input_failsafe;
  double h_distance_current;
  double h_current;
  double h_predicted;
  double input_modification;
  double regulation_map_size;
  rosidl_runtime_c__String__Sequence generation_extras;
  rosidl_runtime_c__String__Sequence filtering_extras;
} lll_supervisor_msgs__msg__SupervisorMetadata;

// Struct for a sequence of lll_supervisor_msgs__msg__SupervisorMetadata.
typedef struct lll_supervisor_msgs__msg__SupervisorMetadata__Sequence
{
  lll_supervisor_msgs__msg__SupervisorMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__SupervisorMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_H_
