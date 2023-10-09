// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsg.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "lll_rdm_msgs/msg/detail/msg_header__functions.h"
// Member `data`
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__functions.h"
// Member `tags`
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__functions.h"

bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__init(lll_rdm_msgs__msg__DomainStatusMetricMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__init(&msg->header)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(msg);
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(&msg->data)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(msg);
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__init(&msg->tags, 0)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(lll_rdm_msgs__msg__DomainStatusMetricMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  lll_rdm_msgs__msg__MsgHeader__fini(&msg->header);
  // data
  lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(&msg->data);
  // tags
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__fini(&msg->tags);
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__are_equal(const lll_rdm_msgs__msg__DomainStatusMetricMsg * lhs, const lll_rdm_msgs__msg__DomainStatusMetricMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__copy(
  const lll_rdm_msgs__msg__DomainStatusMetricMsg * input,
  lll_rdm_msgs__msg__DomainStatusMetricMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__DomainStatusMetricMsg *
lll_rdm_msgs__msg__DomainStatusMetricMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsg * msg = (lll_rdm_msgs__msg__DomainStatusMetricMsg *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsg));
  bool success = lll_rdm_msgs__msg__DomainStatusMetricMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsg__destroy(lll_rdm_msgs__msg__DomainStatusMetricMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__init(lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsg * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__DomainStatusMetricMsg *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__DomainStatusMetricMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__fini(lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * array)
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
      lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(&array->data[i]);
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

lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence *
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * array = (lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__destroy(lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__are_equal(const lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * lhs, const lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__DomainStatusMetricMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence__copy(
  const lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * input,
  lll_rdm_msgs__msg__DomainStatusMetricMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsg);
    lll_rdm_msgs__msg__DomainStatusMetricMsg * data =
      (lll_rdm_msgs__msg__DomainStatusMetricMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__DomainStatusMetricMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__DomainStatusMetricMsg__fini(&data[i]);
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
    if (!lll_rdm_msgs__msg__DomainStatusMetricMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
