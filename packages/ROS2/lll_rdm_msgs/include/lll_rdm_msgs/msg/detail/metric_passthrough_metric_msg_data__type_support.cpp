// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsgData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__struct.hpp"
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

void MetricPassthroughMetricMsgData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::MetricPassthroughMetricMsgData(_init);
}

void MetricPassthroughMetricMsgData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData *>(message_memory);
  typed_message->~MetricPassthroughMetricMsgData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MetricPassthroughMetricMsgData_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::MetricPassthroughMetricMsgData, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MetricPassthroughMetricMsgData_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "MetricPassthroughMetricMsgData",  // message name
  1,  // number of fields
  sizeof(lll_rdm_msgs::msg::MetricPassthroughMetricMsgData),
  MetricPassthroughMetricMsgData_message_member_array,  // message members
  MetricPassthroughMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  MetricPassthroughMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MetricPassthroughMetricMsgData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MetricPassthroughMetricMsgData_message_members,
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
get_message_type_support_handle<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::MetricPassthroughMetricMsgData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, MetricPassthroughMetricMsgData)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::MetricPassthroughMetricMsgData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
