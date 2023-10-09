// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sender_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MsgHeader in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__MsgHeader
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String sender_id;
} lll_rdm_msgs__msg__MsgHeader;

// Struct for a sequence of lll_rdm_msgs__msg__MsgHeader.
typedef struct lll_rdm_msgs__msg__MsgHeader__Sequence
{
  lll_rdm_msgs__msg__MsgHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__MsgHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__STRUCT_H_
