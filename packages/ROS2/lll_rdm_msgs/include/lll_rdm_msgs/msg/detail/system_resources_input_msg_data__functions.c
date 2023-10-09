// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_id`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__init(lll_rdm_msgs__msg__SystemResourcesInputMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // system_id
  if (!rosidl_runtime_c__String__init(&msg->system_id)) {
    lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(msg);
    return false;
  }
  // cpu_load
  // ram_usage
  // disk_usage
  // network_read
  // network_write
  // cpu_nb
  // procs_nb
  return true;
}

void
lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(lll_rdm_msgs__msg__SystemResourcesInputMsgData * msg)
{
  if (!msg) {
    return;
  }
  // system_id
  rosidl_runtime_c__String__fini(&msg->system_id);
  // cpu_load
  // ram_usage
  // disk_usage
  // network_read
  // network_write
  // cpu_nb
  // procs_nb
}

bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__are_equal(const lll_rdm_msgs__msg__SystemResourcesInputMsgData * lhs, const lll_rdm_msgs__msg__SystemResourcesInputMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // system_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->system_id), &(rhs->system_id)))
  {
    return false;
  }
  // cpu_load
  if (lhs->cpu_load != rhs->cpu_load) {
    return false;
  }
  // ram_usage
  if (lhs->ram_usage != rhs->ram_usage) {
    return false;
  }
  // disk_usage
  if (lhs->disk_usage != rhs->disk_usage) {
    return false;
  }
  // network_read
  if (lhs->network_read != rhs->network_read) {
    return false;
  }
  // network_write
  if (lhs->network_write != rhs->network_write) {
    return false;
  }
  // cpu_nb
  if (lhs->cpu_nb != rhs->cpu_nb) {
    return false;
  }
  // procs_nb
  if (lhs->procs_nb != rhs->procs_nb) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__copy(
  const lll_rdm_msgs__msg__SystemResourcesInputMsgData * input,
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // system_id
  if (!rosidl_runtime_c__String__copy(
      &(input->system_id), &(output->system_id)))
  {
    return false;
  }
  // cpu_load
  output->cpu_load = input->cpu_load;
  // ram_usage
  output->ram_usage = input->ram_usage;
  // disk_usage
  output->disk_usage = input->disk_usage;
  // network_read
  output->network_read = input->network_read;
  // network_write
  output->network_write = input->network_write;
  // cpu_nb
  output->cpu_nb = input->cpu_nb;
  // procs_nb
  output->procs_nb = input->procs_nb;
  return true;
}

lll_rdm_msgs__msg__SystemResourcesInputMsgData *
lll_rdm_msgs__msg__SystemResourcesInputMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * msg = (lll_rdm_msgs__msg__SystemResourcesInputMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SystemResourcesInputMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__SystemResourcesInputMsgData));
  bool success = lll_rdm_msgs__msg__SystemResourcesInputMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__SystemResourcesInputMsgData__destroy(lll_rdm_msgs__msg__SystemResourcesInputMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__init(lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__SystemResourcesInputMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__SystemResourcesInputMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__SystemResourcesInputMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__fini(lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence *
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * array = (lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__destroy(lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * lhs, const lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__SystemResourcesInputMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * input,
  lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__SystemResourcesInputMsgData);
    lll_rdm_msgs__msg__SystemResourcesInputMsgData * data =
      (lll_rdm_msgs__msg__SystemResourcesInputMsgData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__SystemResourcesInputMsgData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__SystemResourcesInputMsgData__fini(&data[i]);
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
    if (!lll_rdm_msgs__msg__SystemResourcesInputMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
