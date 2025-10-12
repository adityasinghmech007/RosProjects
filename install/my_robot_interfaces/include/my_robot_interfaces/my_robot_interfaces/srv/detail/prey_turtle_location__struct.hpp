// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:srv/PreyTurtleLocation.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Request __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PreyTurtleLocation_Request_
{
  using Type = PreyTurtleLocation_Request_<ContainerAllocator>;

  explicit PreyTurtleLocation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_coordinate = 0.0;
      this->y_coordinate = 0.0;
    }
  }

  explicit PreyTurtleLocation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_coordinate = 0.0;
      this->y_coordinate = 0.0;
    }
  }

  // field types and members
  using _x_coordinate_type =
    double;
  _x_coordinate_type x_coordinate;
  using _y_coordinate_type =
    double;
  _y_coordinate_type y_coordinate;

  // setters for named parameter idiom
  Type & set__x_coordinate(
    const double & _arg)
  {
    this->x_coordinate = _arg;
    return *this;
  }
  Type & set__y_coordinate(
    const double & _arg)
  {
    this->y_coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Request
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Request
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PreyTurtleLocation_Request_ & other) const
  {
    if (this->x_coordinate != other.x_coordinate) {
      return false;
    }
    if (this->y_coordinate != other.y_coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const PreyTurtleLocation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PreyTurtleLocation_Request_

// alias to use template instance with default allocator
using PreyTurtleLocation_Request =
  my_robot_interfaces::srv::PreyTurtleLocation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Response __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PreyTurtleLocation_Response_
{
  using Type = PreyTurtleLocation_Response_<ContainerAllocator>;

  explicit PreyTurtleLocation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_message = "";
    }
  }

  explicit PreyTurtleLocation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_message = "";
    }
  }

  // field types and members
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Response
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__PreyTurtleLocation_Response
    std::shared_ptr<my_robot_interfaces::srv::PreyTurtleLocation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PreyTurtleLocation_Response_ & other) const
  {
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PreyTurtleLocation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PreyTurtleLocation_Response_

// alias to use template instance with default allocator
using PreyTurtleLocation_Response =
  my_robot_interfaces::srv::PreyTurtleLocation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces

namespace my_robot_interfaces
{

namespace srv
{

struct PreyTurtleLocation
{
  using Request = my_robot_interfaces::srv::PreyTurtleLocation_Request;
  using Response = my_robot_interfaces::srv::PreyTurtleLocation_Response;
};

}  // namespace srv

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_HPP_
