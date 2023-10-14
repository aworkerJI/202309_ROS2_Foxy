// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_rclpy_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice
#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__init(ros_rclpy_package_msgs__srv__MultiSpawn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(ros_rclpy_package_msgs__srv__MultiSpawn_Request * msg)
{
  if (!msg) {
    return;
  }
  // num
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__are_equal(const ros_rclpy_package_msgs__srv__MultiSpawn_Request * lhs, const ros_rclpy_package_msgs__srv__MultiSpawn_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__copy(
  const ros_rclpy_package_msgs__srv__MultiSpawn_Request * input,
  ros_rclpy_package_msgs__srv__MultiSpawn_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

ros_rclpy_package_msgs__srv__MultiSpawn_Request *
ros_rclpy_package_msgs__srv__MultiSpawn_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Request * msg = (ros_rclpy_package_msgs__srv__MultiSpawn_Request *)allocator.allocate(sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request));
  bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Request__destroy(ros_rclpy_package_msgs__srv__MultiSpawn_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__init(ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Request * data = NULL;

  if (size) {
    data = (ros_rclpy_package_msgs__srv__MultiSpawn_Request *)allocator.zero_allocate(size, sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(&data[i - 1]);
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
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__fini(ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * array)
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
      ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(&array->data[i]);
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

ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence *
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * array = (ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence *)allocator.allocate(sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__destroy(ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__are_equal(const ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * lhs, const ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_rclpy_package_msgs__srv__MultiSpawn_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence__copy(
  const ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * input,
  ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request);
    ros_rclpy_package_msgs__srv__MultiSpawn_Request * data =
      (ros_rclpy_package_msgs__srv__MultiSpawn_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_rclpy_package_msgs__srv__MultiSpawn_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(&data[i]);
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
    if (!ros_rclpy_package_msgs__srv__MultiSpawn_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `x`
// Member `y`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__init(ros_rclpy_package_msgs__srv__MultiSpawn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(msg);
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__init(&msg->theta, 0)) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(ros_rclpy_package_msgs__srv__MultiSpawn_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // theta
  rosidl_runtime_c__double__Sequence__fini(&msg->theta);
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__are_equal(const ros_rclpy_package_msgs__srv__MultiSpawn_Response * lhs, const ros_rclpy_package_msgs__srv__MultiSpawn_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  return true;
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__copy(
  const ros_rclpy_package_msgs__srv__MultiSpawn_Response * input,
  ros_rclpy_package_msgs__srv__MultiSpawn_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  return true;
}

ros_rclpy_package_msgs__srv__MultiSpawn_Response *
ros_rclpy_package_msgs__srv__MultiSpawn_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Response * msg = (ros_rclpy_package_msgs__srv__MultiSpawn_Response *)allocator.allocate(sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response));
  bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Response__destroy(ros_rclpy_package_msgs__srv__MultiSpawn_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__init(ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Response * data = NULL;

  if (size) {
    data = (ros_rclpy_package_msgs__srv__MultiSpawn_Response *)allocator.zero_allocate(size, sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(&data[i - 1]);
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
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__fini(ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * array)
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
      ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(&array->data[i]);
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

ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence *
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * array = (ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence *)allocator.allocate(sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__destroy(ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__are_equal(const ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * lhs, const ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_rclpy_package_msgs__srv__MultiSpawn_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence__copy(
  const ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * input,
  ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response);
    ros_rclpy_package_msgs__srv__MultiSpawn_Response * data =
      (ros_rclpy_package_msgs__srv__MultiSpawn_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_rclpy_package_msgs__srv__MultiSpawn_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(&data[i]);
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
    if (!ros_rclpy_package_msgs__srv__MultiSpawn_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
