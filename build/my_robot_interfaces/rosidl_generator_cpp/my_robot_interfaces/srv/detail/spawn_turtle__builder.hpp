// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/SpawnTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/spawn_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnTurtle_Request_spawnaprey
{
public:
  Init_SpawnTurtle_Request_spawnaprey()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::SpawnTurtle_Request spawnaprey(::my_robot_interfaces::srv::SpawnTurtle_Request::_spawnaprey_type arg)
  {
    msg_.spawnaprey = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SpawnTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SpawnTurtle_Request>()
{
  return my_robot_interfaces::srv::builder::Init_SpawnTurtle_Request_spawnaprey();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnTurtle_Response_isthepreyalive
{
public:
  Init_SpawnTurtle_Response_isthepreyalive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::SpawnTurtle_Response isthepreyalive(::my_robot_interfaces::srv::SpawnTurtle_Response::_isthepreyalive_type arg)
  {
    msg_.isthepreyalive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SpawnTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SpawnTurtle_Response>()
{
  return my_robot_interfaces::srv::builder::Init_SpawnTurtle_Response_isthepreyalive();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__BUILDER_HPP_
