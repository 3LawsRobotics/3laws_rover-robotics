// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_H_

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
// Member 'detections'
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__struct.h"

// Struct defined in msg/ObjectDetections in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__ObjectDetections
{
  std_msgs__msg__Header header;
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence detections;
} lll_supervisor_msgs__msg__ObjectDetections;

// Struct for a sequence of lll_supervisor_msgs__msg__ObjectDetections.
typedef struct lll_supervisor_msgs__msg__ObjectDetections__Sequence
{
  lll_supervisor_msgs__msg__ObjectDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__ObjectDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_H_
