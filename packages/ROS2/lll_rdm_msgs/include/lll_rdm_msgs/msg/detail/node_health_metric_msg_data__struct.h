// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topics'
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__struct.h"

// Struct defined in msg/NodeHealthMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__NodeHealthMetricMsgData
{
  bool timeout;
  int64_t time_since_last_msg;
  bool ok;
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence topics;
} lll_rdm_msgs__msg__NodeHealthMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__NodeHealthMetricMsgData.
typedef struct lll_rdm_msgs__msg__NodeHealthMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__NodeHealthMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__NodeHealthMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__STRUCT_H_
