# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hunav_msgs:srv/GetParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetParameters_Request(type):
    """Metaclass of message 'GetParameters_Request'."""

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
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.GetParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_parameters__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_parameters__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetParameters_Request(metaclass=Metaclass_GetParameters_Request):
    """Message class 'GetParameters_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'goal_ids'
# Member 'goal_x_coords'
# Member 'goal_y_coords'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetParameters_Response(type):
    """Metaclass of message 'GetParameters_Response'."""

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
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.GetParameters_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_parameters__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_parameters__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_parameters__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_parameters__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_parameters__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetParameters_Response(metaclass=Metaclass_GetParameters_Response):
    """Message class 'GetParameters_Response'."""

    __slots__ = [
        '_publish_people',
        '_map',
        '_simulator',
        '_yaml_base_name',
        '_goal_ids',
        '_goal_x_coords',
        '_goal_y_coords',
    ]

    _fields_and_field_types = {
        'publish_people': 'boolean',
        'map': 'string',
        'simulator': 'string',
        'yaml_base_name': 'string',
        'goal_ids': 'sequence<int64>',
        'goal_x_coords': 'sequence<double>',
        'goal_y_coords': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.publish_people = kwargs.get('publish_people', bool())
        self.map = kwargs.get('map', str())
        self.simulator = kwargs.get('simulator', str())
        self.yaml_base_name = kwargs.get('yaml_base_name', str())
        self.goal_ids = array.array('q', kwargs.get('goal_ids', []))
        self.goal_x_coords = array.array('d', kwargs.get('goal_x_coords', []))
        self.goal_y_coords = array.array('d', kwargs.get('goal_y_coords', []))

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
        if self.publish_people != other.publish_people:
            return False
        if self.map != other.map:
            return False
        if self.simulator != other.simulator:
            return False
        if self.yaml_base_name != other.yaml_base_name:
            return False
        if self.goal_ids != other.goal_ids:
            return False
        if self.goal_x_coords != other.goal_x_coords:
            return False
        if self.goal_y_coords != other.goal_y_coords:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def publish_people(self):
        """Message field 'publish_people'."""
        return self._publish_people

    @publish_people.setter
    def publish_people(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'publish_people' field must be of type 'bool'"
        self._publish_people = value

    @builtins.property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map' field must be of type 'str'"
        self._map = value

    @builtins.property
    def simulator(self):
        """Message field 'simulator'."""
        return self._simulator

    @simulator.setter
    def simulator(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'simulator' field must be of type 'str'"
        self._simulator = value

    @builtins.property
    def yaml_base_name(self):
        """Message field 'yaml_base_name'."""
        return self._yaml_base_name

    @yaml_base_name.setter
    def yaml_base_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yaml_base_name' field must be of type 'str'"
        self._yaml_base_name = value

    @builtins.property
    def goal_ids(self):
        """Message field 'goal_ids'."""
        return self._goal_ids

    @goal_ids.setter
    def goal_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'goal_ids' array.array() must have the type code of 'q'"
            self._goal_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'goal_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._goal_ids = array.array('q', value)

    @builtins.property
    def goal_x_coords(self):
        """Message field 'goal_x_coords'."""
        return self._goal_x_coords

    @goal_x_coords.setter
    def goal_x_coords(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'goal_x_coords' array.array() must have the type code of 'd'"
            self._goal_x_coords = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'goal_x_coords' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._goal_x_coords = array.array('d', value)

    @builtins.property
    def goal_y_coords(self):
        """Message field 'goal_y_coords'."""
        return self._goal_y_coords

    @goal_y_coords.setter
    def goal_y_coords(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'goal_y_coords' array.array() must have the type code of 'd'"
            self._goal_y_coords = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'goal_y_coords' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._goal_y_coords = array.array('d', value)


class Metaclass_GetParameters(type):
    """Metaclass of service 'GetParameters'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hunav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hunav_msgs.srv.GetParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_parameters

            from hunav_msgs.srv import _get_parameters
            if _get_parameters.Metaclass_GetParameters_Request._TYPE_SUPPORT is None:
                _get_parameters.Metaclass_GetParameters_Request.__import_type_support__()
            if _get_parameters.Metaclass_GetParameters_Response._TYPE_SUPPORT is None:
                _get_parameters.Metaclass_GetParameters_Response.__import_type_support__()


class GetParameters(metaclass=Metaclass_GetParameters):
    from hunav_msgs.srv._get_parameters import GetParameters_Request as Request
    from hunav_msgs.srv._get_parameters import GetParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
