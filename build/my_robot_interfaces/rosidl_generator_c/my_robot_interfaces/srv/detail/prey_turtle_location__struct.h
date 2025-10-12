// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:srv/PreyTurtleLocation.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_H_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PreyTurtleLocation in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__PreyTurtleLocation_Request
{
  double x_coordinate;
  double y_coordinate;
} my_robot_interfaces__srv__PreyTurtleLocation_Request;

// Struct for a sequence of my_robot_interfaces__srv__PreyTurtleLocation_Request.
typedef struct my_robot_interfaces__srv__PreyTurtleLocation_Request__Sequence
{
  my_robot_interfaces__srv__PreyTurtleLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__PreyTurtleLocation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PreyTurtleLocation in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__PreyTurtleLocation_Response
{
  rosidl_runtime_c__String status_message;
} my_robot_interfaces__srv__PreyTurtleLocation_Response;

// Struct for a sequence of my_robot_interfaces__srv__PreyTurtleLocation_Response.
typedef struct my_robot_interfaces__srv__PreyTurtleLocation_Response__Sequence
{
  my_robot_interfaces__srv__PreyTurtleLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__PreyTurtleLocation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__PREY_TURTLE_LOCATION__STRUCT_H_
