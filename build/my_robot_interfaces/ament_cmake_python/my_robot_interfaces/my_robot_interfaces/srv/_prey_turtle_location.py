# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/PreyTurtleLocation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PreyTurtleLocation_Request(type):
    """Metaclass of message 'PreyTurtleLocation_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.PreyTurtleLocation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__prey_turtle_location__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__prey_turtle_location__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__prey_turtle_location__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__prey_turtle_location__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__prey_turtle_location__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PreyTurtleLocation_Request(metaclass=Metaclass_PreyTurtleLocation_Request):
    """Message class 'PreyTurtleLocation_Request'."""

    __slots__ = [
        '_x_coordinate',
        '_y_coordinate',
    ]

    _fields_and_field_types = {
        'x_coordinate': 'double',
        'y_coordinate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_coordinate = kwargs.get('x_coordinate', float())
        self.y_coordinate = kwargs.get('y_coordinate', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x_coordinate != other.x_coordinate:
            return False
        if self.y_coordinate != other.y_coordinate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_coordinate(self):
        """Message field 'x_coordinate'."""
        return self._x_coordinate

    @x_coordinate.setter
    def x_coordinate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_coordinate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_coordinate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_coordinate = value

    @builtins.property
    def y_coordinate(self):
        """Message field 'y_coordinate'."""
        return self._y_coordinate

    @y_coordinate.setter
    def y_coordinate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_coordinate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_coordinate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_coordinate = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PreyTurtleLocation_Response(type):
    """Metaclass of message 'PreyTurtleLocation_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.PreyTurtleLocation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__prey_turtle_location__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__prey_turtle_location__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__prey_turtle_location__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__prey_turtle_location__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__prey_turtle_location__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PreyTurtleLocation_Response(metaclass=Metaclass_PreyTurtleLocation_Response):
    """Message class 'PreyTurtleLocation_Response'."""

    __slots__ = [
        '_status_message',
    ]

    _fields_and_field_types = {
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status_message = kwargs.get('status_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status_message != other.status_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status_message(self):
        """Message field 'status_message'."""
        return self._status_message

    @status_message.setter
    def status_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_message' field must be of type 'str'"
        self._status_message = value


class Metaclass_PreyTurtleLocation(type):
    """Metaclass of service 'PreyTurtleLocation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.PreyTurtleLocation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__prey_turtle_location

            from my_robot_interfaces.srv import _prey_turtle_location
            if _prey_turtle_location.Metaclass_PreyTurtleLocation_Request._TYPE_SUPPORT is None:
                _prey_turtle_location.Metaclass_PreyTurtleLocation_Request.__import_type_support__()
            if _prey_turtle_location.Metaclass_PreyTurtleLocation_Response._TYPE_SUPPORT is None:
                _prey_turtle_location.Metaclass_PreyTurtleLocation_Response.__import_type_support__()


class PreyTurtleLocation(metaclass=Metaclass_PreyTurtleLocation):
    from my_robot_interfaces.srv._prey_turtle_location import PreyTurtleLocation_Request as Request
    from my_robot_interfaces.srv._prey_turtle_location import PreyTurtleLocation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
