// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/SetLedStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/set_led_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLedStatus_Request_number_to_blink
{
public:
  Init_SetLedStatus_Request_number_to_blink()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::SetLedStatus_Request number_to_blink(::my_robot_interfaces::srv::SetLedStatus_Request::_number_to_blink_type arg)
  {
    msg_.number_to_blink = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLedStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLedStatus_Request>()
{
  return my_robot_interfaces::srv::builder::Init_SetLedStatus_Request_number_to_blink();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLedStatus_Response_message
{
public:
  explicit Init_SetLedStatus_Response_message(::my_robot_interfaces::srv::SetLedStatus_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::SetLedStatus_Response message(::my_robot_interfaces::srv::SetLedStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLedStatus_Response msg_;
};

class Init_SetLedStatus_Response_success
{
public:
  Init_SetLedStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLedStatus_Response_message success(::my_robot_interfaces::srv::SetLedStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLedStatus_Response_message(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLedStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLedStatus_Response>()
{
  return my_robot_interfaces::srv::builder::Init_SetLedStatus_Response_success();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__BUILDER_HPP_
