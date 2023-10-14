// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_rclpy_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#ifndef ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__TRAITS_HPP_
#define ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__TRAITS_HPP_

#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_rclpy_package_msgs::srv::MultiSpawn_Request>()
{
  return "ros_rclpy_package_msgs::srv::MultiSpawn_Request";
}

template<>
inline const char * name<ros_rclpy_package_msgs::srv::MultiSpawn_Request>()
{
  return "ros_rclpy_package_msgs/srv/MultiSpawn_Request";
}

template<>
struct has_fixed_size<ros_rclpy_package_msgs::srv::MultiSpawn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_rclpy_package_msgs::srv::MultiSpawn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_rclpy_package_msgs::srv::MultiSpawn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_rclpy_package_msgs::srv::MultiSpawn_Response>()
{
  return "ros_rclpy_package_msgs::srv::MultiSpawn_Response";
}

template<>
inline const char * name<ros_rclpy_package_msgs::srv::MultiSpawn_Response>()
{
  return "ros_rclpy_package_msgs/srv/MultiSpawn_Response";
}

template<>
struct has_fixed_size<ros_rclpy_package_msgs::srv::MultiSpawn_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_rclpy_package_msgs::srv::MultiSpawn_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_rclpy_package_msgs::srv::MultiSpawn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_rclpy_package_msgs::srv::MultiSpawn>()
{
  return "ros_rclpy_package_msgs::srv::MultiSpawn";
}

template<>
inline const char * name<ros_rclpy_package_msgs::srv::MultiSpawn>()
{
  return "ros_rclpy_package_msgs/srv/MultiSpawn";
}

template<>
struct has_fixed_size<ros_rclpy_package_msgs::srv::MultiSpawn>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_rclpy_package_msgs::srv::MultiSpawn_Request>::value &&
    has_fixed_size<ros_rclpy_package_msgs::srv::MultiSpawn_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_rclpy_package_msgs::srv::MultiSpawn>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_rclpy_package_msgs::srv::MultiSpawn_Request>::value &&
    has_bounded_size<ros_rclpy_package_msgs::srv::MultiSpawn_Response>::value
  >
{
};

template<>
struct is_service<ros_rclpy_package_msgs::srv::MultiSpawn>
  : std::true_type
{
};

template<>
struct is_service_request<ros_rclpy_package_msgs::srv::MultiSpawn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_rclpy_package_msgs::srv::MultiSpawn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__TRAITS_HPP_
