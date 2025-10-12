// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

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

/// Struct defined in msg/BatteryStatus in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__BatteryStatus
{
  double batterylevel;
  rosidl_runtime_c__String status_message;
} my_robot_interfaces__msg__BatteryStatus;

// Struct for a sequence of my_robot_interfaces__msg__BatteryStatus.
typedef struct my_robot_interfaces__msg__BatteryStatus__Sequence
{
  my_robot_interfaces__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
