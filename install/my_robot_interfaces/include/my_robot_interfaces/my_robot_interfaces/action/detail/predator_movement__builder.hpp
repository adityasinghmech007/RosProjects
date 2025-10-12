// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:action/PredatorMovement.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__PREDATOR_MOVEMENT__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__PREDATOR_MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/action/detail/predator_movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_Goal_target_y
{
public:
  explicit Init_PredatorMovement_Goal_target_y(::my_robot_interfaces::action::PredatorMovement_Goal & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_Goal target_y(::my_robot_interfaces::action::PredatorMovement_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_Goal msg_;
};

class Init_PredatorMovement_Goal_target_x
{
public:
  Init_PredatorMovement_Goal_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_Goal_target_y target_x(::my_robot_interfaces::action::PredatorMovement_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_PredatorMovement_Goal_target_y(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_Goal>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_Goal_target_x();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_Result_success
{
public:
  Init_PredatorMovement_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::action::PredatorMovement_Result success(::my_robot_interfaces::action::PredatorMovement_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_Result>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_Result_success();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_Feedback_current_y_position
{
public:
  explicit Init_PredatorMovement_Feedback_current_y_position(::my_robot_interfaces::action::PredatorMovement_Feedback & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_Feedback current_y_position(::my_robot_interfaces::action::PredatorMovement_Feedback::_current_y_position_type arg)
  {
    msg_.current_y_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_Feedback msg_;
};

class Init_PredatorMovement_Feedback_current_x_position
{
public:
  Init_PredatorMovement_Feedback_current_x_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_Feedback_current_y_position current_x_position(::my_robot_interfaces::action::PredatorMovement_Feedback::_current_x_position_type arg)
  {
    msg_.current_x_position = std::move(arg);
    return Init_PredatorMovement_Feedback_current_y_position(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_Feedback>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_Feedback_current_x_position();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_SendGoal_Request_goal
{
public:
  explicit Init_PredatorMovement_SendGoal_Request_goal(::my_robot_interfaces::action::PredatorMovement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Request goal(::my_robot_interfaces::action::PredatorMovement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Request msg_;
};

class Init_PredatorMovement_SendGoal_Request_goal_id
{
public:
  Init_PredatorMovement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_SendGoal_Request_goal goal_id(::my_robot_interfaces::action::PredatorMovement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PredatorMovement_SendGoal_Request_goal(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_SendGoal_Request>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_SendGoal_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_SendGoal_Response_stamp
{
public:
  explicit Init_PredatorMovement_SendGoal_Response_stamp(::my_robot_interfaces::action::PredatorMovement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Response stamp(::my_robot_interfaces::action::PredatorMovement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Response msg_;
};

class Init_PredatorMovement_SendGoal_Response_accepted
{
public:
  Init_PredatorMovement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_SendGoal_Response_stamp accepted(::my_robot_interfaces::action::PredatorMovement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PredatorMovement_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_SendGoal_Response>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_SendGoal_Response_accepted();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_GetResult_Request_goal_id
{
public:
  Init_PredatorMovement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::action::PredatorMovement_GetResult_Request goal_id(::my_robot_interfaces::action::PredatorMovement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_GetResult_Request>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_GetResult_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_GetResult_Response_result
{
public:
  explicit Init_PredatorMovement_GetResult_Response_result(::my_robot_interfaces::action::PredatorMovement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_GetResult_Response result(::my_robot_interfaces::action::PredatorMovement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_GetResult_Response msg_;
};

class Init_PredatorMovement_GetResult_Response_status
{
public:
  Init_PredatorMovement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_GetResult_Response_result status(::my_robot_interfaces::action::PredatorMovement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PredatorMovement_GetResult_Response_result(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_GetResult_Response>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_GetResult_Response_status();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_PredatorMovement_FeedbackMessage_feedback
{
public:
  explicit Init_PredatorMovement_FeedbackMessage_feedback(::my_robot_interfaces::action::PredatorMovement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::PredatorMovement_FeedbackMessage feedback(::my_robot_interfaces::action::PredatorMovement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_FeedbackMessage msg_;
};

class Init_PredatorMovement_FeedbackMessage_goal_id
{
public:
  Init_PredatorMovement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredatorMovement_FeedbackMessage_feedback goal_id(::my_robot_interfaces::action::PredatorMovement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PredatorMovement_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_robot_interfaces::action::PredatorMovement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::PredatorMovement_FeedbackMessage>()
{
  return my_robot_interfaces::action::builder::Init_PredatorMovement_FeedbackMessage_goal_id();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__PREDATOR_MOVEMENT__BUILDER_HPP_
