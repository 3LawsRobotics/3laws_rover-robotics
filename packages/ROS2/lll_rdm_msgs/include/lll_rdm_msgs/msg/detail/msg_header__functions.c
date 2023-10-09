// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/msg_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sender_id`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_rdm_msgs__msg__MsgHeader__init(lll_rdm_msgs__msg__MsgHeader * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    lll_rdm_msgs__msg__MsgHeader__fini(msg);
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__init(&msg->sender_id)) {
    lll_rdm_msgs__msg__MsgHeader__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__MsgHeader__fini(lll_rdm_msgs__msg__MsgHeader * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // sender_id
  rosidl_runtime_c__String__fini(&msg->sender_id);
}

bool
lll_rdm_msgs__msg__MsgHeader__are_equal(const lll_rdm_msgs__msg__MsgHeader * lhs, const lll_rdm_msgs__msg__MsgHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sender_id), &(rhs->sender_id)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__MsgHeader__copy(
  const lll_rdm_msgs__msg__MsgHeader * input,
  lll_rdm_msgs__msg__MsgHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // sender_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sender_id), &(output->sender_id)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__MsgHeader *
lll_rdm_msgs__msg__MsgHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MsgHeader * msg = (lll_rdm_msgs__msg__MsgHeader *)allocator.allocate(sizeof(lll_rdm_msgs__msg__MsgHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__MsgHeader));
  bool success = lll_rdm_msgs__msg__MsgHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__MsgHeader__destroy(lll_rdm_msgs__msg__MsgHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__MsgHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__MsgHeader__Sequence__init(lll_rdm_msgs__msg__MsgHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MsgHeader * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__MsgHeader *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__MsgHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__MsgHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__MsgHeader__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lll_rdm_msgs__msg__MsgHeader__Sequence__fini(lll_rdm_msgs__msg__MsgHeader__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lll_rdm_msgs__msg__MsgHeader__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lll_rdm_msgs__msg__MsgHeader__Sequence *
lll_rdm_msgs__msg__MsgHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MsgHeader__Sequence * array = (lll_rdm_msgs__msg__MsgHeader__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__MsgHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__MsgHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__MsgHeader__Sequence__destroy(lll_rdm_msgs__msg__MsgHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__MsgHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__MsgHeader__Sequence__are_equal(const lll_rdm_msgs__msg__MsgHeader__Sequence * lhs, const lll_rdm_msgs__msg__MsgHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__MsgHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__MsgHeader__Sequence__copy(
  const lll_rdm_msgs__msg__MsgHeader__Sequence * input,
  lll_rdm_msgs__msg__MsgHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__MsgHeader);
    lll_rdm_msgs__msg__MsgHeader * data =
      (lll_rdm_msgs__msg__MsgHeader *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__MsgHeader__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__MsgHeader__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__MsgHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
