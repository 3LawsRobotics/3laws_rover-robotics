// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lll_rdm_msgs__msg__SensorNoiseData__init(lll_rdm_msgs__msg__SensorNoiseData * msg)
{
  if (!msg) {
    return false;
  }
  // average_std_error
  // max_std_error
  // angle_max_error
  // percent_of_sigma
  // p_value
  // reject_model
  return true;
}

void
lll_rdm_msgs__msg__SensorNoiseData__fini(lll_rdm_msgs__msg__SensorNoiseData * msg)
{
  if (!msg) {
    return;
  }
  // average_std_error
  // max_std_error
  // angle_max_error
  // percent_of_sigma
  // p_value
  // reject_model
}

bool
lll_rdm_msgs__msg__SensorNoiseData__are_equal(const lll_rdm_msgs__msg__SensorNoiseData * lhs, const lll_rdm_msgs__msg__SensorNoiseData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // average_std_error
  if (lhs->average_std_error != rhs->average_std_error) {
    return false;
  }
  // max_std_error
  if (lhs->max_std_error != rhs->max_std_error) {
    return false;
  }
  // angle_max_error
  if (lhs->angle_max_error != rhs->angle_max_error) {
    return false;
  }
  // percent_of_sigma
  if (lhs->percent_of_sigma != rhs->percent_of_sigma) {
    return false;
  }
  // p_value
  if (lhs->p_value != rhs->p_value) {
    return false;
  }
  // reject_model
  if (lhs->reject_model != rhs->reject_model) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__SensorNoiseData__copy(
  const lll_rdm_msgs__msg__SensorNoiseData * input,
  lll_rdm_msgs__msg__SensorNoiseData * output)
{
  if (!input || !output) {
    return false;
  }
  // average_std_error
  output->average_std_error = input->average_std_error;
  // max_std_error
  output->max_std_error = input->max_std_error;
  // angle_max_error
  output->angle_max_error = input->angle_max_error;
  // percent_of_sigma
  output->percent_of_sigma = input->percent_of_sigma;
  // p_value
  output->p_value = input->p_value;
  // reject_model
  output->reject_model = input->reject_model;
  return true;
}

lll_rdm_msgs__msg__SensorNoiseData *
lll_rdm_msgs__msg__SensorNoiseData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorNoiseData * msg = (lll_rdm_msgs__msg__SensorNoiseData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SensorNoiseData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__SensorNoiseData));
  bool success = lll_rdm_msgs__msg__SensorNoiseData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__SensorNoiseData__destroy(lll_rdm_msgs__msg__SensorNoiseData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__SensorNoiseData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__SensorNoiseData__Sequence__init(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorNoiseData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__SensorNoiseData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__SensorNoiseData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__SensorNoiseData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__SensorNoiseData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__SensorNoiseData__Sequence__fini(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array)
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
      lll_rdm_msgs__msg__SensorNoiseData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__SensorNoiseData__Sequence *
lll_rdm_msgs__msg__SensorNoiseData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorNoiseData__Sequence * array = (lll_rdm_msgs__msg__SensorNoiseData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SensorNoiseData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__SensorNoiseData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__SensorNoiseData__Sequence__destroy(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__SensorNoiseData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__SensorNoiseData__Sequence__are_equal(const lll_rdm_msgs__msg__SensorNoiseData__Sequence * lhs, const lll_rdm_msgs__msg__SensorNoiseData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__SensorNoiseData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__SensorNoiseData__Sequence__copy(
  const lll_rdm_msgs__msg__SensorNoiseData__Sequence * input,
  lll_rdm_msgs__msg__SensorNoiseData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__SensorNoiseData);
    lll_rdm_msgs__msg__SensorNoiseData * data =
      (lll_rdm_msgs__msg__SensorNoiseData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__SensorNoiseData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__SensorNoiseData__fini(&data[i]);
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
    if (!lll_rdm_msgs__msg__SensorNoiseData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
