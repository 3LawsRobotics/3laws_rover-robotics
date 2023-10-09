// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__struct.h"


// Include directives for member types
// Member `system_status`
// Member `behavior_status`
// Member `hardware_status`
// Member `perception_status`
// Member `control_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(message_memory);
}

void DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_member_array[5] = {
  {
    "system_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DomainStatusMetricMsgData, system_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DomainStatusMetricMsgData, behavior_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DomainStatusMetricMsgData, hardware_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perception_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DomainStatusMetricMsgData, perception_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DomainStatusMetricMsgData, control_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "DomainStatusMetricMsgData",  // message name
  5,  // number of fields
  sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData),
  DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_member_array,  // message members
  DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_type_support_handle = {
  0,
  &DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, DomainStatusMetricMsgData)() {
  if (!DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_type_support_handle.typesupport_identifier) {
    DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DomainStatusMetricMsgData__rosidl_typesupport_introspection_c__DomainStatusMetricMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
