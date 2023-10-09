// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg__functions.h"
#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg__struct.h"


// Include directives for member types
// Member `header`
#include "lll_rdm_msgs/msg/msg_header.h"
// Member `header`
#include "lll_rdm_msgs/msg/detail/msg_header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "lll_rdm_msgs/msg/control_tracking_metric_high_frequency_msg_data.h"
// Member `data`
#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg_data__rosidl_typesupport_introspection_c.h"
// Member `tags`
#include "lll_rdm_msgs/msg/metric_tags_msg_data.h"
// Member `tags`
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__init(message_memory);
}

void ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__fini(message_memory);
}

size_t ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__size_function__MetricTagsMsgData__tags(
  const void * untyped_member)
{
  const lll_rdm_msgs__msg__MetricTagsMsgData__Sequence * member =
    (const lll_rdm_msgs__msg__MetricTagsMsgData__Sequence *)(untyped_member);
  return member->size;
}

const void * ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__get_const_function__MetricTagsMsgData__tags(
  const void * untyped_member, size_t index)
{
  const lll_rdm_msgs__msg__MetricTagsMsgData__Sequence * member =
    (const lll_rdm_msgs__msg__MetricTagsMsgData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__get_function__MetricTagsMsgData__tags(
  void * untyped_member, size_t index)
{
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence * member =
    (lll_rdm_msgs__msg__MetricTagsMsgData__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__resize_function__MetricTagsMsgData__tags(
  void * untyped_member, size_t size)
{
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence * member =
    (lll_rdm_msgs__msg__MetricTagsMsgData__Sequence *)(untyped_member);
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__fini(member);
  return lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg, tags),  // bytes offset in struct
    NULL,  // default value
    ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__size_function__MetricTagsMsgData__tags,  // size() function pointer
    ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__get_const_function__MetricTagsMsgData__tags,  // get_const(index) function pointer
    ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__get_function__MetricTagsMsgData__tags,  // get(index) function pointer
    ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__resize_function__MetricTagsMsgData__tags  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "ControlTrackingMetricHighFrequencyMsg",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg),
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_member_array,  // message members
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_type_support_handle = {
  0,
  &ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, ControlTrackingMetricHighFrequencyMsg)() {
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, MsgHeader)();
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, ControlTrackingMetricHighFrequencyMsgData)();
  ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, MetricTagsMsgData)();
  if (!ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_type_support_handle.typesupport_identifier) {
    ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControlTrackingMetricHighFrequencyMsg__rosidl_typesupport_introspection_c__ControlTrackingMetricHighFrequencyMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
