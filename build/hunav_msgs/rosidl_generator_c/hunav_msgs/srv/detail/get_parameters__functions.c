// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/srv/detail/get_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hunav_msgs__srv__GetParameters_Request__init(hunav_msgs__srv__GetParameters_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hunav_msgs__srv__GetParameters_Request__fini(hunav_msgs__srv__GetParameters_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hunav_msgs__srv__GetParameters_Request__are_equal(const hunav_msgs__srv__GetParameters_Request * lhs, const hunav_msgs__srv__GetParameters_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hunav_msgs__srv__GetParameters_Request__copy(
  const hunav_msgs__srv__GetParameters_Request * input,
  hunav_msgs__srv__GetParameters_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hunav_msgs__srv__GetParameters_Request *
hunav_msgs__srv__GetParameters_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Request * msg = (hunav_msgs__srv__GetParameters_Request *)allocator.allocate(sizeof(hunav_msgs__srv__GetParameters_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__srv__GetParameters_Request));
  bool success = hunav_msgs__srv__GetParameters_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__srv__GetParameters_Request__destroy(hunav_msgs__srv__GetParameters_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__srv__GetParameters_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__srv__GetParameters_Request__Sequence__init(hunav_msgs__srv__GetParameters_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Request * data = NULL;

  if (size) {
    data = (hunav_msgs__srv__GetParameters_Request *)allocator.zero_allocate(size, sizeof(hunav_msgs__srv__GetParameters_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__srv__GetParameters_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__srv__GetParameters_Request__fini(&data[i - 1]);
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
hunav_msgs__srv__GetParameters_Request__Sequence__fini(hunav_msgs__srv__GetParameters_Request__Sequence * array)
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
      hunav_msgs__srv__GetParameters_Request__fini(&array->data[i]);
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

hunav_msgs__srv__GetParameters_Request__Sequence *
hunav_msgs__srv__GetParameters_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Request__Sequence * array = (hunav_msgs__srv__GetParameters_Request__Sequence *)allocator.allocate(sizeof(hunav_msgs__srv__GetParameters_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__srv__GetParameters_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__srv__GetParameters_Request__Sequence__destroy(hunav_msgs__srv__GetParameters_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__srv__GetParameters_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__srv__GetParameters_Request__Sequence__are_equal(const hunav_msgs__srv__GetParameters_Request__Sequence * lhs, const hunav_msgs__srv__GetParameters_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__srv__GetParameters_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__srv__GetParameters_Request__Sequence__copy(
  const hunav_msgs__srv__GetParameters_Request__Sequence * input,
  hunav_msgs__srv__GetParameters_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__srv__GetParameters_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__srv__GetParameters_Request * data =
      (hunav_msgs__srv__GetParameters_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__srv__GetParameters_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__srv__GetParameters_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__srv__GetParameters_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `map`
// Member `simulator`
// Member `yaml_base_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal_ids`
// Member `goal_x_coords`
// Member `goal_y_coords`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hunav_msgs__srv__GetParameters_Response__init(hunav_msgs__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // publish_people
  // map
  if (!rosidl_runtime_c__String__init(&msg->map)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  // simulator
  if (!rosidl_runtime_c__String__init(&msg->simulator)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  // yaml_base_name
  if (!rosidl_runtime_c__String__init(&msg->yaml_base_name)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  // goal_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->goal_ids, 0)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  // goal_x_coords
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal_x_coords, 0)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  // goal_y_coords
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal_y_coords, 0)) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  return true;
}

void
hunav_msgs__srv__GetParameters_Response__fini(hunav_msgs__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // publish_people
  // map
  rosidl_runtime_c__String__fini(&msg->map);
  // simulator
  rosidl_runtime_c__String__fini(&msg->simulator);
  // yaml_base_name
  rosidl_runtime_c__String__fini(&msg->yaml_base_name);
  // goal_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->goal_ids);
  // goal_x_coords
  rosidl_runtime_c__double__Sequence__fini(&msg->goal_x_coords);
  // goal_y_coords
  rosidl_runtime_c__double__Sequence__fini(&msg->goal_y_coords);
}

bool
hunav_msgs__srv__GetParameters_Response__are_equal(const hunav_msgs__srv__GetParameters_Response * lhs, const hunav_msgs__srv__GetParameters_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // publish_people
  if (lhs->publish_people != rhs->publish_people) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // simulator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->simulator), &(rhs->simulator)))
  {
    return false;
  }
  // yaml_base_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yaml_base_name), &(rhs->yaml_base_name)))
  {
    return false;
  }
  // goal_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->goal_ids), &(rhs->goal_ids)))
  {
    return false;
  }
  // goal_x_coords
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal_x_coords), &(rhs->goal_x_coords)))
  {
    return false;
  }
  // goal_y_coords
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal_y_coords), &(rhs->goal_y_coords)))
  {
    return false;
  }
  return true;
}

bool
hunav_msgs__srv__GetParameters_Response__copy(
  const hunav_msgs__srv__GetParameters_Response * input,
  hunav_msgs__srv__GetParameters_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // publish_people
  output->publish_people = input->publish_people;
  // map
  if (!rosidl_runtime_c__String__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // simulator
  if (!rosidl_runtime_c__String__copy(
      &(input->simulator), &(output->simulator)))
  {
    return false;
  }
  // yaml_base_name
  if (!rosidl_runtime_c__String__copy(
      &(input->yaml_base_name), &(output->yaml_base_name)))
  {
    return false;
  }
  // goal_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->goal_ids), &(output->goal_ids)))
  {
    return false;
  }
  // goal_x_coords
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal_x_coords), &(output->goal_x_coords)))
  {
    return false;
  }
  // goal_y_coords
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal_y_coords), &(output->goal_y_coords)))
  {
    return false;
  }
  return true;
}

hunav_msgs__srv__GetParameters_Response *
hunav_msgs__srv__GetParameters_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Response * msg = (hunav_msgs__srv__GetParameters_Response *)allocator.allocate(sizeof(hunav_msgs__srv__GetParameters_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunav_msgs__srv__GetParameters_Response));
  bool success = hunav_msgs__srv__GetParameters_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hunav_msgs__srv__GetParameters_Response__destroy(hunav_msgs__srv__GetParameters_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hunav_msgs__srv__GetParameters_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hunav_msgs__srv__GetParameters_Response__Sequence__init(hunav_msgs__srv__GetParameters_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Response * data = NULL;

  if (size) {
    data = (hunav_msgs__srv__GetParameters_Response *)allocator.zero_allocate(size, sizeof(hunav_msgs__srv__GetParameters_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunav_msgs__srv__GetParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunav_msgs__srv__GetParameters_Response__fini(&data[i - 1]);
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
hunav_msgs__srv__GetParameters_Response__Sequence__fini(hunav_msgs__srv__GetParameters_Response__Sequence * array)
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
      hunav_msgs__srv__GetParameters_Response__fini(&array->data[i]);
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

hunav_msgs__srv__GetParameters_Response__Sequence *
hunav_msgs__srv__GetParameters_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hunav_msgs__srv__GetParameters_Response__Sequence * array = (hunav_msgs__srv__GetParameters_Response__Sequence *)allocator.allocate(sizeof(hunav_msgs__srv__GetParameters_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hunav_msgs__srv__GetParameters_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hunav_msgs__srv__GetParameters_Response__Sequence__destroy(hunav_msgs__srv__GetParameters_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hunav_msgs__srv__GetParameters_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hunav_msgs__srv__GetParameters_Response__Sequence__are_equal(const hunav_msgs__srv__GetParameters_Response__Sequence * lhs, const hunav_msgs__srv__GetParameters_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hunav_msgs__srv__GetParameters_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hunav_msgs__srv__GetParameters_Response__Sequence__copy(
  const hunav_msgs__srv__GetParameters_Response__Sequence * input,
  hunav_msgs__srv__GetParameters_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hunav_msgs__srv__GetParameters_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hunav_msgs__srv__GetParameters_Response * data =
      (hunav_msgs__srv__GetParameters_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hunav_msgs__srv__GetParameters_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hunav_msgs__srv__GetParameters_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hunav_msgs__srv__GetParameters_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
