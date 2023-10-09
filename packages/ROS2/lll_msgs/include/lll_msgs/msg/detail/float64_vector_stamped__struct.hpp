// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_msgs:msg/Float64VectorStamped.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_HPP_
#define LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_msgs__msg__Float64VectorStamped __attribute__((deprecated))
#else
# define DEPRECATED__lll_msgs__msg__Float64VectorStamped __declspec(deprecated)
#endif

namespace lll_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float64VectorStamped_
{
  using Type = Float64VectorStamped_<ContainerAllocator>;

  explicit Float64VectorStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Float64VectorStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_msgs__msg__Float64VectorStamped
    std::shared_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_msgs__msg__Float64VectorStamped
    std::shared_ptr<lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float64VectorStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float64VectorStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float64VectorStamped_

// alias to use template instance with default allocator
using Float64VectorStamped =
  lll_msgs::msg::Float64VectorStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_msgs

#endif  // LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_HPP_
