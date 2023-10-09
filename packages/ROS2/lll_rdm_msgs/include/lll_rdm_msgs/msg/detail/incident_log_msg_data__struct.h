// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/IncidentLogMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'detail'
// Member 'domain'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/IncidentLogMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__IncidentLogMsgData
{
  bool in_progress;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String detail;
  rosidl_runtime_c__String domain;
} lll_rdm_msgs__msg__IncidentLogMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__IncidentLogMsgData.
typedef struct lll_rdm_msgs__msg__IncidentLogMsgData__Sequence
{
  lll_rdm_msgs__msg__IncidentLogMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__IncidentLogMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_
