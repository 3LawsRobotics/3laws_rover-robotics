// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `min_dist_sensor_id`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__init(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // timeout
  // time_since_last_msg
  // min_dist
  // min_dist_sensor_id
  if (!rosidl_runtime_c__String__init(&msg->min_dist_sensor_id)) {
    lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * msg)
{
  if (!msg) {
    return;
  }
  // timeout
  // time_since_last_msg
  // min_dist
  // min_dist_sensor_id
  rosidl_runtime_c__String__fini(&msg->min_dist_sensor_id);
}

bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__are_equal(const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * lhs, const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // time_since_last_msg
  if (lhs->time_since_last_msg != rhs->time_since_last_msg) {
    return false;
  }
  // min_dist
  if (lhs->min_dist != rhs->min_dist) {
    return false;
  }
  // min_dist_sensor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->min_dist_sensor_id), &(rhs->min_dist_sensor_id)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__copy(
  const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * input,
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // time_since_last_msg
  output->time_since_last_msg = input->time_since_last_msg;
  // min_dist
  output->min_dist = input->min_dist;
  // min_dist_sensor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->min_dist_sensor_id), &(output->min_dist_sensor_id)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData *
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * msg = (lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData));
  bool success = lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__destroy(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__init(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__fini(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence *
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * array = (lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__destroy(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * lhs, const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * input,
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData);
    lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * data =
      (lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__fini(&data[i]);
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
    if (!lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
