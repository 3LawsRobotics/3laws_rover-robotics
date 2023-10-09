// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/msg/detail/object_detections__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/msg/detail/object_detections__functions.h"
#include "lll_supervisor_msgs/msg/detail/object_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "lll_supervisor_msgs/msg/object_detection2_d.h"
// Member `detections`
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__msg__ObjectDetections__init(message_memory);
}

void ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_fini_function(void * message_memory)
{
  lll_supervisor_msgs__msg__ObjectDetections__fini(message_memory);
}

size_t ObjectDetections__rosidl_typesupport_introspection_c__size_function__ObjectDetection2D__detections(
  const void * untyped_member)
{
  const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * member =
    (const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectDetections__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2D__detections(
  const void * untyped_member, size_t index)
{
  const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * member =
    (const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectDetections__rosidl_typesupport_introspection_c__get_function__ObjectDetection2D__detections(
  void * untyped_member, size_t index)
{
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * member =
    (lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectDetections__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2D__detections(
  void * untyped_member, size_t size)
{
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * member =
    (lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *)(untyped_member);
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__fini(member);
  return lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__ObjectDetections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__ObjectDetections, detections),  // bytes offset in struct
    NULL,  // default value
    ObjectDetections__rosidl_typesupport_introspection_c__size_function__ObjectDetection2D__detections,  // size() function pointer
    ObjectDetections__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection2D__detections,  // get_const(index) function pointer
    ObjectDetections__rosidl_typesupport_introspection_c__get_function__ObjectDetection2D__detections,  // get(index) function pointer
    ObjectDetections__rosidl_typesupport_introspection_c__resize_function__ObjectDetection2D__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_members = {
  "lll_supervisor_msgs__msg",  // message namespace
  "ObjectDetections",  // message name
  2,  // number of fields
  sizeof(lll_supervisor_msgs__msg__ObjectDetections),
  ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_member_array,  // message members
  ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_type_support_handle = {
  0,
  &ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, ObjectDetections)() {
  ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, ObjectDetection2D)();
  if (!ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_type_support_handle.typesupport_identifier) {
    ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectDetections__rosidl_typesupport_introspection_c__ObjectDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
