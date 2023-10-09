// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__struct.h"


// Include directives for member types
// Member `xdot_difference`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(message_memory);
}

void DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_member_array[13] = {
  {
    "state_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, state_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_since_last_state_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, time_since_last_state_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, input_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_since_last_input_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, time_since_last_input_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_domain_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, input_domain_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_domain_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, state_domain_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_pdf_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_pdf_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_pdf_value_normalized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_pdf_value_normalized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_1sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_1sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_2sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_2sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_3sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_3sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system_degradation_probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, system_degradation_probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "DynamicConsistencyMsgData",  // message name
  13,  // number of fields
  sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData),
  DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_member_array,  // message members
  DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle = {
  0,
  &DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, DynamicConsistencyMsgData)() {
  if (!DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle.typesupport_identifier) {
    DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
