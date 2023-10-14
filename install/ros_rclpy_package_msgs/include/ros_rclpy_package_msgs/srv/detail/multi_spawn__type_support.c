// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_rclpy_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
#include "ros_rclpy_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__functions.h"
#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_rclpy_package_msgs__srv__MultiSpawn_Request__init(message_memory);
}

void MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_fini_function(void * message_memory)
{
  ros_rclpy_package_msgs__srv__MultiSpawn_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_member_array[1] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_rclpy_package_msgs__srv__MultiSpawn_Request, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_members = {
  "ros_rclpy_package_msgs__srv",  // message namespace
  "MultiSpawn_Request",  // message name
  1,  // number of fields
  sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Request),
  MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_member_array,  // message members
  MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle = {
  0,
  &MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_rclpy_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Request)() {
  if (!MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle.typesupport_identifier) {
    MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_rclpy_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_rclpy_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_rclpy_package_msgs/srv/detail/multi_spawn__functions.h"
// already included above
// #include "ros_rclpy_package_msgs/srv/detail/multi_spawn__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_rclpy_package_msgs__srv__MultiSpawn_Response__init(message_memory);
}

void MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_fini_function(void * message_memory)
{
  ros_rclpy_package_msgs__srv__MultiSpawn_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_rclpy_package_msgs__srv__MultiSpawn_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_rclpy_package_msgs__srv__MultiSpawn_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_rclpy_package_msgs__srv__MultiSpawn_Response, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_members = {
  "ros_rclpy_package_msgs__srv",  // message namespace
  "MultiSpawn_Response",  // message name
  3,  // number of fields
  sizeof(ros_rclpy_package_msgs__srv__MultiSpawn_Response),
  MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_member_array,  // message members
  MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle = {
  0,
  &MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_rclpy_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Response)() {
  if (!MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle.typesupport_identifier) {
    MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_rclpy_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_rclpy_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_members = {
  "ros_rclpy_package_msgs__srv",  // service namespace
  "MultiSpawn",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle,
  NULL  // response message
  // ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle = {
  0,
  &ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_rclpy_package_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn)() {
  if (!ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.typesupport_identifier) {
    ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_rclpy_package_msgs, srv, MultiSpawn_Response)()->data;
  }

  return &ros_rclpy_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle;
}
