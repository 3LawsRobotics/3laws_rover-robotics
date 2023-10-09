// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__SignalAverageMsgData__init(message_memory);
}

void SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__SignalAverageMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_member_array[3] = {
  {
    "average",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SignalAverageMsgData, average),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SignalAverageMsgData, min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SignalAverageMsgData, max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "SignalAverageMsgData",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs__msg__SignalAverageMsgData),
  SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_member_array,  // message members
  SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_type_support_handle = {
  0,
  &SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, SignalAverageMsgData)() {
  if (!SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_type_support_handle.typesupport_identifier) {
    SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SignalAverageMsgData__rosidl_typesupport_introspection_c__SignalAverageMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
