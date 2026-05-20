# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hunav_msgs:srv/StartEvaluation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartEvaluation_Request(type):
    """Metaclass of message 'StartEvaluation_Request'."""

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
                'hunav_msgs.srv.StartEvaluation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_evaluation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_evaluation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_evaluation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_evaluation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_evaluation__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EXPERIMENT_TAG__DEFAULT': 'exp_1',
            'RUN_ID__DEFAULT': 0,
        }

    @property
    def EXPERIMENT_TAG__DEFAULT(cls):
        """Return default value for message field 'experiment_tag'."""
        return 'exp_1'

    @property
    def RUN_ID__DEFAULT(cls):
        """Return default value for message field 'run_id'."""
        return 0


class StartEvaluation_Request(metaclass=Metaclass_StartEvaluation_Request):
    """Message class 'StartEvaluation_Request'."""

    __slots__ = [
        '_robot_goal',
        '_experiment_tag',
        '_run_id',
    ]

    _fields_and_field_types = {
        'robot_goal': 'geometry_msgs/PoseStamped',
        'experiment_tag': 'string',
        'run_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.robot_goal = kwargs.get('robot_goal', PoseStamped())
        self.experiment_tag = kwargs.get(
            'experiment_tag', StartEvaluation_Request.EXPERIMENT_TAG__DEFAULT)
        self.run_id = kwargs.get(
            'run_id', StartEvaluation_Request.RUN_ID__DEFAULT)

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
        if self.robot_goal != other.robot_goal:
            return False
        if self.experiment_tag != other.experiment_tag:
            return False
        if self.run_id != other.run_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_goal(self):
        """Message field 'robot_goal'."""
        return self._robot_goal

    @robot_goal.setter
    def robot_goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'robot_goal' field must be a sub message of type 'PoseStamped'"
        self._robot_goal = value

    @builtins.property
    def experiment_tag(self):
        """Message field 'experiment_tag'."""
        return self._experiment_tag

    @experiment_tag.setter
    def experiment_tag(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'experiment_tag' field must be of type 'str'"
        self._experiment_tag = value

    @builtins.property
    def run_id(self):
        """Message field 'run_id'."""
        return self._run_id

    @run_id.setter
    def run_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'run_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'run_id' field must be an integer in [-2147483648, 2147483647]"
        self._run_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StartEvaluation_Response(type):
    """Metaclass of message 'StartEvaluation_Response'."""

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
                'hunav_msgs.srv.StartEvaluation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_evaluation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_evaluation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_evaluation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_evaluation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_evaluation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartEvaluation_Response(metaclass=Metaclass_StartEvaluation_Response):
    """Message class 'StartEvaluation_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_StartEvaluation(type):
    """Metaclass of service 'StartEvaluation'."""

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
                'hunav_msgs.srv.StartEvaluation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_evaluation

            from hunav_msgs.srv import _start_evaluation
            if _start_evaluation.Metaclass_StartEvaluation_Request._TYPE_SUPPORT is None:
                _start_evaluation.Metaclass_StartEvaluation_Request.__import_type_support__()
            if _start_evaluation.Metaclass_StartEvaluation_Response._TYPE_SUPPORT is None:
                _start_evaluation.Metaclass_StartEvaluation_Response.__import_type_support__()


class StartEvaluation(metaclass=Metaclass_StartEvaluation):
    from hunav_msgs.srv._start_evaluation import StartEvaluation_Request as Request
    from hunav_msgs.srv._start_evaluation import StartEvaluation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
