// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__struct.h"


// Include directives for member types
// Member `obstructions_by_sectors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `obstructions`
#include "lll_rdm_msgs/msg/sensor_obstruction_data.h"
// Member `obstructions`
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__SensorObstructionMetricMsgData__init(message_memory);
}

void SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__SensorObstructionMetricMsgData__fini(message_memory);
}

size_t SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__size_function__SensorObstructionData__obstructions(
  const void * untyped_member)
{
  const lll_rdm_msgs__msg__SensorObstructionData__Sequence * member =
    (const lll_rdm_msgs__msg__SensorObstructionData__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__get_const_function__SensorObstructionData__obstructions(
  const void * untyped_member, size_t index)
{
  const lll_rdm_msgs__msg__SensorObstructionData__Sequence * member =
    (const lll_rdm_msgs__msg__SensorObstructionData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__get_function__SensorObstructionData__obstructions(
  void * untyped_member, size_t index)
{
  lll_rdm_msgs__msg__SensorObstructionData__Sequence * member =
    (lll_rdm_msgs__msg__SensorObstructionData__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__resize_function__SensorObstructionData__obstructions(
  void * untyped_member, size_t size)
{
  lll_rdm_msgs__msg__SensorObstructionData__Sequence * member =
    (lll_rdm_msgs__msg__SensorObstructionData__Sequence *)(untyped_member);
  lll_rdm_msgs__msg__SensorObstructionData__Sequence__fini(member);
  return lll_rdm_msgs__msg__SensorObstructionData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_member_array[3] = {
  {
    "time_since_last_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorObstructionMetricMsgData, time_since_last_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstructions_by_sectors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorObstructionMetricMsgData, obstructions_by_sectors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstructions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorObstructionMetricMsgData, obstructions),  // bytes offset in struct
    NULL,  // default value
    SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__size_function__SensorObstructionData__obstructions,  // size() function pointer
    SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__get_const_function__SensorObstructionData__obstructions,  // get_const(index) function pointer
    SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__get_function__SensorObstructionData__obstructions,  // get(index) function pointer
    SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__resize_function__SensorObstructionData__obstructions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "SensorObstructionMetricMsgData",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs__msg__SensorObstructionMetricMsgData),
  SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_member_array,  // message members
  SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_type_support_handle = {
  0,
  &SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, SensorObstructionMetricMsgData)() {
  SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, SensorObstructionData)();
  if (!SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_type_support_handle.typesupport_identifier) {
    SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorObstructionMetricMsgData__rosidl_typesupport_introspection_c__SensorObstructionMetricMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
