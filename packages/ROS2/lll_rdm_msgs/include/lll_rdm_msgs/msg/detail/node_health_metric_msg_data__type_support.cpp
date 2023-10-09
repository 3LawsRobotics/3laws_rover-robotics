// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_data__struct.hpp"
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

void NodeHealthMetricMsgData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::NodeHealthMetricMsgData(_init);
}

void NodeHealthMetricMsgData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::NodeHealthMetricMsgData *>(message_memory);
  typed_message->~NodeHealthMetricMsgData();
}

size_t size_function__NodeHealthMetricMsgData__topics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeHealthMetricMsgData__topics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeHealthMetricMsgData__topics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeHealthMetricMsgData__topics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeHealthMetricMsgData_message_member_array[4] = {
  {
    "timeout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::NodeHealthMetricMsgData, timeout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_since_last_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::NodeHealthMetricMsgData, time_since_last_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ok",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::NodeHealthMetricMsgData, ok),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::NodeHealthMetricMsgData, topics),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeHealthMetricMsgData__topics,  // size() function pointer
    get_const_function__NodeHealthMetricMsgData__topics,  // get_const(index) function pointer
    get_function__NodeHealthMetricMsgData__topics,  // get(index) function pointer
    resize_function__NodeHealthMetricMsgData__topics  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeHealthMetricMsgData_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "NodeHealthMetricMsgData",  // message name
  4,  // number of fields
  sizeof(lll_rdm_msgs::msg::NodeHealthMetricMsgData),
  NodeHealthMetricMsgData_message_member_array,  // message members
  NodeHealthMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeHealthMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeHealthMetricMsgData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeHealthMetricMsgData_message_members,
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
get_message_type_support_handle<lll_rdm_msgs::msg::NodeHealthMetricMsgData>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::NodeHealthMetricMsgData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, NodeHealthMetricMsgData)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::NodeHealthMetricMsgData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
