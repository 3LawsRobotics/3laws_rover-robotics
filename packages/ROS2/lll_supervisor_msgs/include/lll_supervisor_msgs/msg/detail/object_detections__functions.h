// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__FUNCTIONS_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_supervisor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_supervisor_msgs/msg/detail/object_detections__struct.h"

/// Initialize msg/ObjectDetections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_supervisor_msgs__msg__ObjectDetections
 * )) before or use
 * lll_supervisor_msgs__msg__ObjectDetections__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__init(lll_supervisor_msgs__msg__ObjectDetections * msg);

/// Finalize msg/ObjectDetections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
void
lll_supervisor_msgs__msg__ObjectDetections__fini(lll_supervisor_msgs__msg__ObjectDetections * msg);

/// Create msg/ObjectDetections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_supervisor_msgs__msg__ObjectDetections__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
lll_supervisor_msgs__msg__ObjectDetections *
lll_supervisor_msgs__msg__ObjectDetections__create();

/// Destroy msg/ObjectDetections message.
/**
 * It calls
 * lll_supervisor_msgs__msg__ObjectDetections__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
void
lll_supervisor_msgs__msg__ObjectDetections__destroy(lll_supervisor_msgs__msg__ObjectDetections * msg);

/// Check for msg/ObjectDetections message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__are_equal(const lll_supervisor_msgs__msg__ObjectDetections * lhs, const lll_supervisor_msgs__msg__ObjectDetections * rhs);

/// Copy a msg/ObjectDetections message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__copy(
  const lll_supervisor_msgs__msg__ObjectDetections * input,
  lll_supervisor_msgs__msg__ObjectDetections * output);

/// Initialize array of msg/ObjectDetections messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_supervisor_msgs__msg__ObjectDetections__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__init(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array, size_t size);

/// Finalize array of msg/ObjectDetections messages.
/**
 * It calls
 * lll_supervisor_msgs__msg__ObjectDetections__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
void
lll_supervisor_msgs__msg__ObjectDetections__Sequence__fini(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array);

/// Create array of msg/ObjectDetections messages.
/**
 * It allocates the memory for the array and calls
 * lll_supervisor_msgs__msg__ObjectDetections__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
lll_supervisor_msgs__msg__ObjectDetections__Sequence *
lll_supervisor_msgs__msg__ObjectDetections__Sequence__create(size_t size);

/// Destroy array of msg/ObjectDetections messages.
/**
 * It calls
 * lll_supervisor_msgs__msg__ObjectDetections__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
void
lll_supervisor_msgs__msg__ObjectDetections__Sequence__destroy(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array);

/// Check for msg/ObjectDetections message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__are_equal(const lll_supervisor_msgs__msg__ObjectDetections__Sequence * lhs, const lll_supervisor_msgs__msg__ObjectDetections__Sequence * rhs);

/// Copy an array of msg/ObjectDetections messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_supervisor_msgs
bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__copy(
  const lll_supervisor_msgs__msg__ObjectDetections__Sequence * input,
  lll_supervisor_msgs__msg__ObjectDetections__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__FUNCTIONS_H_
