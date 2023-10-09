// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/planning_consistency_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lll_rdm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PlanningConsistencyMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::PlanningConsistencyMsg(_init);
}

void PlanningConsistencyMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::PlanningConsistencyMsg *>(message_memory);
  typed_message->~PlanningConsistencyMsg();
}

size_t size_function__PlanningConsistencyMsg__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningConsistencyMsg__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningConsistencyMsg__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return &member[index];
}

void resize_function__PlanningConsistencyMsg__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningConsistencyMsg_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::MsgHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::PlanningConsistencyMsgData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyMsg, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::MetricTagsMsgData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyMsg, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningConsistencyMsg__tags,  // size() function pointer
    get_const_function__PlanningConsistencyMsg__tags,  // get_const(index) function pointer
    get_function__PlanningConsistencyMsg__tags,  // get(index) function pointer
    resize_function__PlanningConsistencyMsg__tags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningConsistencyMsg_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "PlanningConsistencyMsg",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs::msg::PlanningConsistencyMsg),
  PlanningConsistencyMsg_message_member_array,  // message members
  PlanningConsistencyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningConsistencyMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningConsistencyMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningConsistencyMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lll_rdm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lll_rdm_msgs::msg::PlanningConsistencyMsg>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningConsistencyMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, PlanningConsistencyMsg)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningConsistencyMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
