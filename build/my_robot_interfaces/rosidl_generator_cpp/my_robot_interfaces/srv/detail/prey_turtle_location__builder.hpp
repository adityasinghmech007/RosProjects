// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/PreyTurtleLocation.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/prey_turtle_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_PreyTurtleLocation_Request_y_coordinate
{
public:
  explicit Init_PreyTurtleLocation_Request_y_coordinate(::my_robot_interfaces::srv::PreyTurtleLocation_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::PreyTurtleLocation_Request y_coordinate(::my_robot_interfaces::srv::PreyTurtleLocation_Request::_y_coordinate_type arg)
  {
    msg_.y_coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::PreyTurtleLocation_Request msg_;
};

class Init_PreyTurtleLocation_Request_x_coordinate
{
public:
  Init_PreyTurtleLocation_Request_x_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PreyTurtleLocation_Request_y_coordinate x_coordinate(::my_robot_interfaces::srv::PreyTurtleLocation_Request::_x_coordinate_type arg)
  {
    msg_.x_coordinate = std::move(arg);
    return Init_PreyTurtleLocation_Request_y_coordinate(msg_);
  }

private:
  ::my_robot_interfaces::srv::PreyTurtleLocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::PreyTurtleLocation_Request>()
{
  return my_robot_interfaces::srv::builder::Init_PreyTurtleLocation_Request_x_coordinate();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_PreyTurtleLocation_Response_status_message
{
public:
  Init_PreyTurtleLocation_Response_status_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::PreyTurtleLocation_Response status_message(::my_robot_interfaces::srv::PreyTurtleLocation_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::PreyTurtleLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::PreyTurtleLocation_Response>()
{
  return my_robot_interfaces::srv::builder::Init_PreyTurtleLocation_Response_status_message();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__BUILDER_HPP_
