// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lll_supervisor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InputConstraints_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_supervisor_msgs::msg::InputConstraints(_init);
}

void InputConstraints_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_supervisor_msgs::msg::InputConstraints *>(message_memory);
  typed_message->~InputConstraints();
}

size_t size_function__InputConstraints__lb(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InputConstraints__lb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InputConstraints__lb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__InputConstraints__lb(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__InputConstraints__m(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InputConstraints__m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InputConstraints__m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__InputConstraints__m(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__InputConstraints__ub(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InputConstraints__ub(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InputConstraints__ub(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__InputConstraints__ub(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InputConstraints_message_member_array[5] = {
  {
    "nu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::InputConstraints, nu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_cstr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::InputConstraints, n_cstr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::InputConstraints, lb),  // bytes offset in struct
    nullptr,  // default value
    size_function__InputConstraints__lb,  // size() function pointer
    get_const_function__InputConstraints__lb,  // get_const(index) function pointer
    get_function__InputConstraints__lb,  // get(index) function pointer
    resize_function__InputConstraints__lb  // resize(index) function pointer
  },
  {
    "m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::InputConstraints, m),  // bytes offset in struct
    nullptr,  // default value
    size_function__InputConstraints__m,  // size() function pointer
    get_const_function__InputConstraints__m,  // get_const(index) function pointer
    get_function__InputConstraints__m,  // get(index) function pointer
    resize_function__InputConstraints__m  // resize(index) function pointer
  },
  {
    "ub",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::InputConstraints, ub),  // bytes offset in struct
    nullptr,  // default value
    size_function__InputConstraints__ub,  // size() function pointer
    get_const_function__InputConstraints__ub,  // get_const(index) function pointer
    get_function__InputConstraints__ub,  // get(index) function pointer
    resize_function__InputConstraints__ub  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InputConstraints_message_members = {
  "lll_supervisor_msgs::msg",  // message namespace
  "InputConstraints",  // message name
  5,  // number of fields
  sizeof(lll_supervisor_msgs::msg::InputConstraints),
  InputConstraints_message_member_array,  // message members
  InputConstraints_init_function,  // function to initialize message memory (memory has to be allocated)
  InputConstraints_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InputConstraints_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InputConstraints_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lll_supervisor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lll_supervisor_msgs::msg::InputConstraints>()
{
  return &::lll_supervisor_msgs::msg::rosidl_typesupport_introspection_cpp::InputConstraints_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_supervisor_msgs, msg, InputConstraints)() {
  return &::lll_supervisor_msgs::msg::rosidl_typesupport_introspection_cpp::InputConstraints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
