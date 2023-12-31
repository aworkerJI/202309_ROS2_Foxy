// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_rclpy_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#ifndef ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_
#define ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MultiSpawn in the package ros_rclpy_package_msgs.
typedef struct ros_rclpy_package_msgs__srv__MultiSpawn_Request
{
  int64_t num;
} ros_rclpy_package_msgs__srv__MultiSpawn_Request;

// Struct for a sequence of ros_rclpy_package_msgs__srv__MultiSpawn_Request.
typedef struct ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence
{
  ros_rclpy_package_msgs__srv__MultiSpawn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_rclpy_package_msgs__srv__MultiSpawn_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'theta'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/MultiSpawn in the package ros_rclpy_package_msgs.
typedef struct ros_rclpy_package_msgs__srv__MultiSpawn_Response
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence theta;
} ros_rclpy_package_msgs__srv__MultiSpawn_Response;

// Struct for a sequence of ros_rclpy_package_msgs__srv__MultiSpawn_Response.
typedef struct ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence
{
  ros_rclpy_package_msgs__srv__MultiSpawn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_rclpy_package_msgs__srv__MultiSpawn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_
