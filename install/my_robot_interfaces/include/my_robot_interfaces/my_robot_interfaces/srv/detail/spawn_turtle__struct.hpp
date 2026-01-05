// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:srv/SpawnTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/srv/spawn_turtle.hpp"


#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Request __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnTurtle_Request_
{
  using Type = SpawnTurtle_Request_<ContainerAllocator>;

  explicit SpawnTurtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spawnaprey = false;
    }
  }

  explicit SpawnTurtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spawnaprey = false;
    }
  }

  // field types and members
  using _spawnaprey_type =
    bool;
  _spawnaprey_type spawnaprey;

  // setters for named parameter idiom
  Type & set__spawnaprey(
    const bool & _arg)
  {
    this->spawnaprey = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Request
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Request
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnTurtle_Request_ & other) const
  {
    if (this->spawnaprey != other.spawnaprey) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnTurtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnTurtle_Request_

// alias to use template instance with default allocator
using SpawnTurtle_Request =
  my_robot_interfaces::srv::SpawnTurtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Response __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnTurtle_Response_
{
  using Type = SpawnTurtle_Response_<ContainerAllocator>;

  explicit SpawnTurtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isthepreyalive = false;
    }
  }

  explicit SpawnTurtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->isthepreyalive = false;
    }
  }

  // field types and members
  using _isthepreyalive_type =
    bool;
  _isthepreyalive_type isthepreyalive;

  // setters for named parameter idiom
  Type & set__isthepreyalive(
    const bool & _arg)
  {
    this->isthepreyalive = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Response
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Response
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnTurtle_Response_ & other) const
  {
    if (this->isthepreyalive != other.isthepreyalive) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnTurtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnTurtle_Response_

// alias to use template instance with default allocator
using SpawnTurtle_Response =
  my_robot_interfaces::srv::SpawnTurtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Event __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Event __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnTurtle_Event_
{
  using Type = SpawnTurtle_Event_<ContainerAllocator>;

  explicit SpawnTurtle_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SpawnTurtle_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::srv::SpawnTurtle_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::srv::SpawnTurtle_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Event
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__SpawnTurtle_Event
    std::shared_ptr<my_robot_interfaces::srv::SpawnTurtle_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnTurtle_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnTurtle_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnTurtle_Event_

// alias to use template instance with default allocator
using SpawnTurtle_Event =
  my_robot_interfaces::srv::SpawnTurtle_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces

namespace my_robot_interfaces
{

namespace srv
{

struct SpawnTurtle
{
  using Request = my_robot_interfaces::srv::SpawnTurtle_Request;
  using Response = my_robot_interfaces::srv::SpawnTurtle_Response;
  using Event = my_robot_interfaces::srv::SpawnTurtle_Event;
};

}  // namespace srv

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SPAWN_TURTLE__STRUCT_HPP_
