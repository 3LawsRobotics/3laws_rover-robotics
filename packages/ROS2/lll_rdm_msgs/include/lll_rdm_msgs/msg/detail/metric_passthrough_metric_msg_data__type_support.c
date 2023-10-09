// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__struct.h"


// Include directives for member types
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__init(message_memory);
}

void MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__MetricPassthroughMetricMsgData, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "MetricPassthroughMetricMsgData",  // message name
  1,  // number of fields
  sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsgData),
  MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_member_array,  // message members
  MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_type_support_handle = {
  0,
  &MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, MetricPassthroughMetricMsgData)() {
  if (!MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_type_support_handle.typesupport_identifier) {
    MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MetricPassthroughMetricMsgData__rosidl_typesupport_introspection_c__MetricPassthroughMetricMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
