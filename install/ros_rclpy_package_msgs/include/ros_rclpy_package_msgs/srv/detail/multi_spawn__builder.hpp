// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_rclpy_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#ifndef ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__BUILDER_HPP_
#define ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__BUILDER_HPP_

#include "ros_rclpy_package_msgs/srv/detail/multi_spawn__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_rclpy_package_msgs
{

namespace srv
{

namespace builder
{

class Init_MultiSpawn_Request_num
{
public:
  Init_MultiSpawn_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Request num(::ros_rclpy_package_msgs::srv::MultiSpawn_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_rclpy_package_msgs::srv::MultiSpawn_Request>()
{
  return ros_rclpy_package_msgs::srv::builder::Init_MultiSpawn_Request_num();
}

}  // namespace ros_rclpy_package_msgs


namespace ros_rclpy_package_msgs
{

namespace srv
{

namespace builder
{

class Init_MultiSpawn_Response_theta
{
public:
  explicit Init_MultiSpawn_Response_theta(::ros_rclpy_package_msgs::srv::MultiSpawn_Response & msg)
  : msg_(msg)
  {}
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Response theta(::ros_rclpy_package_msgs::srv::MultiSpawn_Response::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Response msg_;
};

class Init_MultiSpawn_Response_y
{
public:
  explicit Init_MultiSpawn_Response_y(::ros_rclpy_package_msgs::srv::MultiSpawn_Response & msg)
  : msg_(msg)
  {}
  Init_MultiSpawn_Response_theta y(::ros_rclpy_package_msgs::srv::MultiSpawn_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MultiSpawn_Response_theta(msg_);
  }

private:
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Response msg_;
};

class Init_MultiSpawn_Response_x
{
public:
  Init_MultiSpawn_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiSpawn_Response_y x(::ros_rclpy_package_msgs::srv::MultiSpawn_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MultiSpawn_Response_y(msg_);
  }

private:
  ::ros_rclpy_package_msgs::srv::MultiSpawn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_rclpy_package_msgs::srv::MultiSpawn_Response>()
{
  return ros_rclpy_package_msgs::srv::builder::Init_MultiSpawn_Response_x();
}

}  // namespace ros_rclpy_package_msgs

#endif  // ROS_RCLPY_PACKAGE_MSGS__SRV__DETAIL__MULTI_SPAWN__BUILDER_HPP_
