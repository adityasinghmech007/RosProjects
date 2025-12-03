# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/SpawnTurtle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpawnTurtle_Request(type):
    """Metaclass of message 'SpawnTurtle_Request'."""

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
                'my_robot_interfaces.srv.SpawnTurtle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_turtle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_turtle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_turtle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_turtle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_turtle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpawnTurtle_Request(metaclass=Metaclass_SpawnTurtle_Request):
    """Message class 'SpawnTurtle_Request'."""

    __slots__ = [
        '_spawnaprey',
    ]

    _fields_and_field_types = {
        'spawnaprey': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.spawnaprey = kwargs.get('spawnaprey', bool())

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
        if self.spawnaprey != other.spawnaprey:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def spawnaprey(self):
        """Message field 'spawnaprey'."""
        return self._spawnaprey

    @spawnaprey.setter
    def spawnaprey(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'spawnaprey' field must be of type 'bool'"
        self._spawnaprey = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpawnTurtle_Response(type):
    """Metaclass of message 'SpawnTurtle_Response'."""

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
                'my_robot_interfaces.srv.SpawnTurtle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spawn_turtle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spawn_turtle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spawn_turtle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spawn_turtle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spawn_turtle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpawnTurtle_Response(metaclass=Metaclass_SpawnTurtle_Response):
    """Message class 'SpawnTurtle_Response'."""

    __slots__ = [
        '_isthepreyalive',
    ]

    _fields_and_field_types = {
        'isthepreyalive': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.isthepreyalive = kwargs.get('isthepreyalive', bool())

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
        if self.isthepreyalive != other.isthepreyalive:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def isthepreyalive(self):
        """Message field 'isthepreyalive'."""
        return self._isthepreyalive

    @isthepreyalive.setter
    def isthepreyalive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isthepreyalive' field must be of type 'bool'"
        self._isthepreyalive = value


class Metaclass_SpawnTurtle(type):
    """Metaclass of service 'SpawnTurtle'."""

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
                'my_robot_interfaces.srv.SpawnTurtle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spawn_turtle

            from my_robot_interfaces.srv import _spawn_turtle
            if _spawn_turtle.Metaclass_SpawnTurtle_Request._TYPE_SUPPORT is None:
                _spawn_turtle.Metaclass_SpawnTurtle_Request.__import_type_support__()
            if _spawn_turtle.Metaclass_SpawnTurtle_Response._TYPE_SUPPORT is None:
                _spawn_turtle.Metaclass_SpawnTurtle_Response.__import_type_support__()


class SpawnTurtle(metaclass=Metaclass_SpawnTurtle):
    from my_robot_interfaces.srv._spawn_turtle import SpawnTurtle_Request as Request
    from my_robot_interfaces.srv._spawn_turtle import SpawnTurtle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
