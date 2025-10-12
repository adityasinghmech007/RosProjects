// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/PredTurtleLocation.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PredTurtleLocation in the package my_robot_interfaces.
/**
  * Information about Predator Turtle Location
 */
typedef struct my_robot_interfaces__msg__PredTurtleLocation
{
  double x_coordinate;
  double y_coordinate;
  /// Tells if the Turtle is Moving or not
  rosidl_runtime_c__String status_message;
} my_robot_interfaces__msg__PredTurtleLocation;

// Struct for a sequence of my_robot_interfaces__msg__PredTurtleLocation.
typedef struct my_robot_interfaces__msg__PredTurtleLocation__Sequence
{
  my_robot_interfaces__msg__PredTurtleLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__PredTurtleLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__PRED_TURTLE_LOCATION__STRUCT_H_
