// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg_data__struct.h"


// Include directives for member types
// Member `min_dist_sensor_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__init(message_memory);
}

void ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_member_array[4] = {
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_since_last_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData, time_since_last_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData, min_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_dist_sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData, min_dist_sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "ObstaclesDistanceMetricMsgData",  // message name
  4,  // number of fields
  sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData),
  ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_member_array,  // message members
  ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_type_support_handle = {
  0,
  &ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, ObstaclesDistanceMetricMsgData)() {
  if (!ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_type_support_handle.typesupport_identifier) {
    ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObstaclesDistanceMetricMsgData__rosidl_typesupport_introspection_c__ObstaclesDistanceMetricMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
