// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_robot_interfaces:srv/SpawnTurtle.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "my_robot_interfaces/srv/detail/spawn_turtle__struct.h"
#include "my_robot_interfaces/srv/detail/spawn_turtle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__spawn_turtle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_robot_interfaces.srv._spawn_turtle.SpawnTurtle_Request", full_classname_dest, 57) == 0);
  }
  my_robot_interfaces__srv__SpawnTurtle_Request * ros_message = _ros_message;
  {  // spawnaprey
    PyObject * field = PyObject_GetAttrString(_pymsg, "spawnaprey");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->spawnaprey = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__spawn_turtle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpawnTurtle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._spawn_turtle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpawnTurtle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__SpawnTurtle_Request * ros_message = (my_robot_interfaces__srv__SpawnTurtle_Request *)raw_ros_message;
  {  // spawnaprey
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->spawnaprey ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spawnaprey", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/spawn_turtle__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/spawn_turtle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__spawn_turtle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_robot_interfaces.srv._spawn_turtle.SpawnTurtle_Response", full_classname_dest, 58) == 0);
  }
  my_robot_interfaces__srv__SpawnTurtle_Response * ros_message = _ros_message;
  {  // isthepreyalive
    PyObject * field = PyObject_GetAttrString(_pymsg, "isthepreyalive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isthepreyalive = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__spawn_turtle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpawnTurtle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._spawn_turtle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpawnTurtle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__SpawnTurtle_Response * ros_message = (my_robot_interfaces__srv__SpawnTurtle_Response *)raw_ros_message;
  {  // isthepreyalive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isthepreyalive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isthepreyalive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
