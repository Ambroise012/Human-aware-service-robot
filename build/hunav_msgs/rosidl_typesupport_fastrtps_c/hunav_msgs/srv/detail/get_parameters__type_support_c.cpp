// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice
#include "hunav_msgs/srv/detail/get_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hunav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hunav_msgs/srv/detail/get_parameters__struct.h"
#include "hunav_msgs/srv/detail/get_parameters__functions.h"
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


// forward declare type support functions


using _GetParameters_Request__ros_msg_type = hunav_msgs__srv__GetParameters_Request;

static bool _GetParameters_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetParameters_Request__ros_msg_type * ros_message = static_cast<const _GetParameters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetParameters_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetParameters_Request__ros_msg_type * ros_message = static_cast<_GetParameters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__GetParameters_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetParameters_Request__ros_msg_type * ros_message = static_cast<const _GetParameters_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetParameters_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__GetParameters_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__GetParameters_Request(
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

  // member: structure_needs_at_least_one_member
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
    using DataType = hunav_msgs__srv__GetParameters_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetParameters_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__GetParameters_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetParameters_Request = {
  "hunav_msgs::srv",
  "GetParameters_Request",
  _GetParameters_Request__cdr_serialize,
  _GetParameters_Request__cdr_deserialize,
  _GetParameters_Request__get_serialized_size,
  _GetParameters_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetParameters_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetParameters_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, GetParameters_Request)() {
  return &_GetParameters_Request__type_support;
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
// #include "hunav_msgs/srv/detail/get_parameters__struct.h"
// already included above
// #include "hunav_msgs/srv/detail/get_parameters__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // goal_ids, goal_x_coords, goal_y_coords
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // goal_ids, goal_x_coords, goal_y_coords
#include "rosidl_runtime_c/string.h"  // map, simulator, yaml_base_name
#include "rosidl_runtime_c/string_functions.h"  // map, simulator, yaml_base_name

// forward declare type support functions


using _GetParameters_Response__ros_msg_type = hunav_msgs__srv__GetParameters_Response;

static bool _GetParameters_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetParameters_Response__ros_msg_type * ros_message = static_cast<const _GetParameters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_people
  {
    cdr << (ros_message->publish_people ? true : false);
  }

  // Field name: map
  {
    const rosidl_runtime_c__String * str = &ros_message->map;
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

  // Field name: simulator
  {
    const rosidl_runtime_c__String * str = &ros_message->simulator;
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

  // Field name: yaml_base_name
  {
    const rosidl_runtime_c__String * str = &ros_message->yaml_base_name;
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

  // Field name: goal_ids
  {
    size_t size = ros_message->goal_ids.size;
    auto array_ptr = ros_message->goal_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: goal_x_coords
  {
    size_t size = ros_message->goal_x_coords.size;
    auto array_ptr = ros_message->goal_x_coords.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: goal_y_coords
  {
    size_t size = ros_message->goal_y_coords.size;
    auto array_ptr = ros_message->goal_y_coords.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetParameters_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetParameters_Response__ros_msg_type * ros_message = static_cast<_GetParameters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_people
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->publish_people = tmp ? true : false;
  }

  // Field name: map
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map.data) {
      rosidl_runtime_c__String__init(&ros_message->map);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map'\n");
      return false;
    }
  }

  // Field name: simulator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->simulator.data) {
      rosidl_runtime_c__String__init(&ros_message->simulator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->simulator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'simulator'\n");
      return false;
    }
  }

  // Field name: yaml_base_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yaml_base_name.data) {
      rosidl_runtime_c__String__init(&ros_message->yaml_base_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yaml_base_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yaml_base_name'\n");
      return false;
    }
  }

  // Field name: goal_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->goal_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->goal_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->goal_ids, size)) {
      fprintf(stderr, "failed to create array for field 'goal_ids'");
      return false;
    }
    auto array_ptr = ros_message->goal_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: goal_x_coords
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->goal_x_coords.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->goal_x_coords);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->goal_x_coords, size)) {
      fprintf(stderr, "failed to create array for field 'goal_x_coords'");
      return false;
    }
    auto array_ptr = ros_message->goal_x_coords.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: goal_y_coords
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->goal_y_coords.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->goal_y_coords);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->goal_y_coords, size)) {
      fprintf(stderr, "failed to create array for field 'goal_y_coords'");
      return false;
    }
    auto array_ptr = ros_message->goal_y_coords.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t get_serialized_size_hunav_msgs__srv__GetParameters_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetParameters_Response__ros_msg_type * ros_message = static_cast<const _GetParameters_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name publish_people
  {
    size_t item_size = sizeof(ros_message->publish_people);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map.size + 1);
  // field.name simulator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->simulator.size + 1);
  // field.name yaml_base_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yaml_base_name.size + 1);
  // field.name goal_ids
  {
    size_t array_size = ros_message->goal_ids.size;
    auto array_ptr = ros_message->goal_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_x_coords
  {
    size_t array_size = ros_message->goal_x_coords.size;
    auto array_ptr = ros_message->goal_x_coords.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_y_coords
  {
    size_t array_size = ros_message->goal_y_coords.size;
    auto array_ptr = ros_message->goal_y_coords.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetParameters_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hunav_msgs__srv__GetParameters_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hunav_msgs
size_t max_serialized_size_hunav_msgs__srv__GetParameters_Response(
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

  // member: publish_people
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: map
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
  // member: simulator
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
  // member: yaml_base_name
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
  // member: goal_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_x_coords
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_y_coords
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hunav_msgs__srv__GetParameters_Response;
    is_plain =
      (
      offsetof(DataType, goal_y_coords) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetParameters_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hunav_msgs__srv__GetParameters_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetParameters_Response = {
  "hunav_msgs::srv",
  "GetParameters_Response",
  _GetParameters_Response__cdr_serialize,
  _GetParameters_Response__cdr_deserialize,
  _GetParameters_Response__get_serialized_size,
  _GetParameters_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetParameters_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetParameters_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, GetParameters_Response)() {
  return &_GetParameters_Response__type_support;
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
#include "hunav_msgs/srv/get_parameters.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetParameters__callbacks = {
  "hunav_msgs::srv",
  "GetParameters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, GetParameters_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, GetParameters_Response)(),
};

static rosidl_service_type_support_t GetParameters__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetParameters__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hunav_msgs, srv, GetParameters)() {
  return &GetParameters__handle;
}

#if defined(__cplusplus)
}
#endif
