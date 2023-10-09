// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lll_rdm_msgs__msg__SignalAverageMsgData__init(lll_rdm_msgs__msg__SignalAverageMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // average
  // min
  // max
  return true;
}

void
lll_rdm_msgs__msg__SignalAverageMsgData__fini(lll_rdm_msgs__msg__SignalAverageMsgData * msg)
{
  if (!msg) {
    return;
  }
  // average
  // min
  // max
}

bool
lll_rdm_msgs__msg__SignalAverageMsgData__are_equal(const lll_rdm_msgs__msg__SignalAverageMsgData * lhs, const lll_rdm_msgs__msg__SignalAverageMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // average
  if (lhs->average != rhs->average) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__SignalAverageMsgData__copy(
  const lll_rdm_msgs__msg__SignalAverageMsgData * input,
  lll_rdm_msgs__msg__SignalAverageMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // average
  output->average = input->average;
  // min
  output->min = input->min;
  // max
  output->max = input->max;
  return true;
}

lll_rdm_msgs__msg__SignalAverageMsgData *
lll_rdm_msgs__msg__SignalAverageMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalAverageMsgData * msg = (lll_rdm_msgs__msg__SignalAverageMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SignalAverageMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__SignalAverageMsgData));
  bool success = lll_rdm_msgs__msg__SignalAverageMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__SignalAverageMsgData__destroy(lll_rdm_msgs__msg__SignalAverageMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__SignalAverageMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__init(lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalAverageMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__SignalAverageMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__SignalAverageMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__SignalAverageMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__SignalAverageMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__fini(lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__SignalAverageMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__SignalAverageMsgData__Sequence *
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * array = (lll_rdm_msgs__msg__SignalAverageMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SignalAverageMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__destroy(lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * lhs, const lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__SignalAverageMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__SignalAverageMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * input,
  lll_rdm_msgs__msg__SignalAverageMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__SignalAverageMsgData);
    lll_rdm_msgs__msg__SignalAverageMsgData * data =
      (lll_rdm_msgs__msg__SignalAverageMsgData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__SignalAverageMsgData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__SignalAverageMsgData__fini(&data[i]);
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
    if (!lll_rdm_msgs__msg__SignalAverageMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
