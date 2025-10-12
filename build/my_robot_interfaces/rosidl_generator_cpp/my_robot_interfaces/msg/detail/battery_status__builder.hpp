// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_status_message
{
public:
  explicit Init_BatteryStatus_status_message(::my_robot_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::BatteryStatus status_message(::my_robot_interfaces::msg::BatteryStatus::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_batterylevel
{
public:
  Init_BatteryStatus_batterylevel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_status_message batterylevel(::my_robot_interfaces::msg::BatteryStatus::_batterylevel_type arg)
  {
    msg_.batterylevel = std::move(arg);
    return Init_BatteryStatus_status_message(msg_);
  }

private:
  ::my_robot_interfaces::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::BatteryStatus>()
{
  return my_robot_interfaces::msg::builder::Init_BatteryStatus_batterylevel();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
