// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:srv/SetLedStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/srv/set_led_status.hpp"


#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/srv/detail/set_led_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLedStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number_to_blink
  {
    out << "number_to_blink: ";
    rosidl_generator_traits::value_to_yaml(msg.number_to_blink, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLedStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number_to_blink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_to_blink: ";
    rosidl_generator_traits::value_to_yaml(msg.number_to_blink, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLedStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::srv::SetLedStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::srv::SetLedStatus_Request & msg)
{
  return my_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::srv::SetLedStatus_Request>()
{
  return "my_robot_interfaces::srv::SetLedStatus_Request";
}

template<>
inline const char * name<my_robot_interfaces::srv::SetLedStatus_Request>()
{
  return "my_robot_interfaces/srv/SetLedStatus_Request";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::SetLedStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_robot_interfaces::srv::SetLedStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLedStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLedStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLedStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::srv::SetLedStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::srv::SetLedStatus_Response & msg)
{
  return my_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::srv::SetLedStatus_Response>()
{
  return "my_robot_interfaces::srv::SetLedStatus_Response";
}

template<>
inline const char * name<my_robot_interfaces::srv::SetLedStatus_Response>()
{
  return "my_robot_interfaces/srv/SetLedStatus_Response";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::SetLedStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::srv::SetLedStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace my_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLedStatus_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLedStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLedStatus_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::srv::SetLedStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::srv::SetLedStatus_Event & msg)
{
  return my_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::srv::SetLedStatus_Event>()
{
  return "my_robot_interfaces::srv::SetLedStatus_Event";
}

template<>
inline const char * name<my_robot_interfaces::srv::SetLedStatus_Event>()
{
  return "my_robot_interfaces/srv/SetLedStatus_Event";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::SetLedStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Event>
  : std::integral_constant<bool, has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Request>::value && has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<my_robot_interfaces::srv::SetLedStatus_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_interfaces::srv::SetLedStatus>()
{
  return "my_robot_interfaces::srv::SetLedStatus";
}

template<>
inline const char * name<my_robot_interfaces::srv::SetLedStatus>()
{
  return "my_robot_interfaces/srv/SetLedStatus";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::SetLedStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<my_robot_interfaces::srv::SetLedStatus_Request>::value &&
    has_fixed_size<my_robot_interfaces::srv::SetLedStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_robot_interfaces::srv::SetLedStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Request>::value &&
    has_bounded_size<my_robot_interfaces::srv::SetLedStatus_Response>::value
  >
{
};

template<>
struct is_service<my_robot_interfaces::srv::SetLedStatus>
  : std::true_type
{
};

template<>
struct is_service_request<my_robot_interfaces::srv::SetLedStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_robot_interfaces::srv::SetLedStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_STATUS__TRAITS_HPP_
