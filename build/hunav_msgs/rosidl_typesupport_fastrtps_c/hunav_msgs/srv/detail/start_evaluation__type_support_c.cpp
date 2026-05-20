// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hunav_msgs:srv/StartEvaluation.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/srv/detail/start_evaluation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hunav_msgs/srv/detail/start_evaluation__struct.h"
#include "hunav_msgs/srv/detail/start_evaluation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // robot_goal
#include "rosidl_runtime_c/string.h"  // experiment_tag
#include "rosidl_runtime_c/string_functions.h"  // experiment_tag

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hunav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hunav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hunav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();


using _StartEvaluation_Request__ros_msg_type = hunav_msgs__srv__StartEvaluation_Request;

static bool _StartEvaluation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartEvaluation_Request__ros_msg_type * ros_message = static_cast<const _StartEvaluation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_goal, cdr))
    {
      return false;
    }
  }

  // Field name: experiment_tag
  {
    const rosidl_runtime_c__String * str = &ros_message->experiment_tag;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: run_id
  {
    cdr << ros_message->run_id;
  }

  return true;
}

static bool _StartEvaluation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartEvaluation_Request__ros_msg_type * ros_message = static_cast<_StartEvaluation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_goal))
    {
      return false;
    }
  }

  // Field name: experiment_tag
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->experiment_tag.data) {
      rosidl_runtime_c__String__init(&ros_message->experiment_tag);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->experiment_tag,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'experiment_tag'\n");
      return false;
    }
  }

  // Field name: run_id
  {
    cdr >> ros_message->run_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__StartEvaluation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartEvaluation_Request__ros_msg_type * ros_message = static_cast<const _StartEvaluation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_goal

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->robot_goal), current_alignment);
  // field.name experiment_tag
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->experiment_tag.size + 1);
  // field.name run_id
  {
    size_t item_size = sizeof(ros_message->run_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartEvaluation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__StartEvaluation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__StartEvaluation_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: robot_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: experiment_tag
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: run_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hunav_msgs__srv__StartEvaluation_Request;
    is_plain =
      (
      offsetof(DataType, run_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StartEvaluation_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__StartEvaluation_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartEvaluation_Request = {
  "hunav_msgs::srv",
  "StartEvaluation_Request",
  _StartEvaluation_Request__cdr_serialize,
  _StartEvaluation_Request__cdr_deserialize,
  _StartEvaluation_Request__get_serialized_size,
  _StartEvaluation_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartEvaluation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartEvaluation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, StartEvaluation_Request)() {
  return &_StartEvaluation_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hunav_msgs/srv/detail/start_evaluation__struct.h"
// already included above
// #include "hunav_msgs/srv/detail/start_evaluation__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _StartEvaluation_Response__ros_msg_type = hunav_msgs__srv__StartEvaluation_Response;

static bool _StartEvaluation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartEvaluation_Response__ros_msg_type * ros_message = static_cast<const _StartEvaluation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _StartEvaluation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartEvaluation_Response__ros_msg_type * ros_message = static_cast<_StartEvaluation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__StartEvaluation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartEvaluation_Response__ros_msg_type * ros_message = static_cast<const _StartEvaluation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartEvaluation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__StartEvaluation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__StartEvaluation_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hunav_msgs__srv__StartEvaluation_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StartEvaluation_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__StartEvaluation_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartEvaluation_Response = {
  "hunav_msgs::srv",
  "StartEvaluation_Response",
  _StartEvaluation_Response__cdr_serialize,
  _StartEvaluation_Response__cdr_deserialize,
  _StartEvaluation_Response__get_serialized_size,
  _StartEvaluation_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartEvaluation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartEvaluation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, StartEvaluation_Response)() {
  return &_StartEvaluation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hunav_msgs/srv/start_evaluation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartEvaluation__callbacks = {
  "hunav_msgs::srv",
  "StartEvaluation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, StartEvaluation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, StartEvaluation_Response)(),
};

static rosidl_service_type_support_t StartEvaluation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartEvaluation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, StartEvaluation)() {
  return &StartEvaluation__handle;
}

#if defined(__cplusplus)
}
#endif
