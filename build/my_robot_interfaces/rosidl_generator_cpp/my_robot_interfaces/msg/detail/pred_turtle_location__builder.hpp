// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/PredTurtleLocation.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/pred_turtle_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_PredTurtleLocation_status_message
{
public:
  explicit Init_PredTurtleLocation_status_message(::my_robot_interfaces::msg::PredTurtleLocation & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::PredTurtleLocation status_message(::my_robot_interfaces::msg::PredTurtleLocation::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::PredTurtleLocation msg_;
};

class Init_PredTurtleLocation_y_coordinate
{
public:
  explicit Init_PredTurtleLocation_y_coordinate(::my_robot_interfaces::msg::PredTurtleLocation & msg)
  : msg_(msg)
  {}
  Init_PredTurtleLocation_status_message y_coordinate(::my_robot_interfaces::msg::PredTurtleLocation::_y_coordinate_type arg)
  {
    msg_.y_coordinate = std::move(arg);
    return Init_PredTurtleLocation_status_message(msg_);
  }

private:
  ::my_robot_interfaces::msg::PredTurtleLocation msg_;
};

class Init_PredTurtleLocation_x_coordinate
{
public:
  Init_PredTurtleLocation_x_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredTurtleLocation_y_coordinate x_coordinate(::my_robot_interfaces::msg::PredTurtleLocation::_x_coordinate_type arg)
  {
    msg_.x_coordinate = std::move(arg);
    return Init_PredTurtleLocation_y_coordinate(msg_);
  }

private:
  ::my_robot_interfaces::msg::PredTurtleLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::PredTurtleLocation>()
{
  return my_robot_interfaces::msg::builder::Init_PredTurtleLocation_x_coordinate();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__BUILDER_HPP_
