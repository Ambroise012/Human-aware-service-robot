// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hunav_msgs/srv/detail/get_parameters__rosidl_typesupport_introspection_c.h"
#include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hunav_msgs/srv/detail/get_parameters__functions.h"
#include "hunav_msgs/srv/detail/get_parameters__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hunav_msgs__srv__GetParameters_Request__init(message_memory);
}

void hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_fini_function(void * message_memory)
{
  hunav_msgs__srv__GetParameters_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_members = {
  "hunav_msgs__srv",  // message namespace
  "GetParameters_Request",  // message name
  1,  // number of fields
  sizeof(hunav_msgs__srv__GetParameters_Request),
  hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_member_array,  // message members
  hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_type_support_handle = {
  0,
  &hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Request)() {
  if (!hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hunav_msgs__srv__GetParameters_Request__rosidl_typesupport_introspection_c__GetParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hunav_msgs/srv/detail/get_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hunav_msgs/srv/detail/get_parameters__functions.h"
// already included above
// #include "hunav_msgs/srv/detail/get_parameters__struct.h"


// Include directives for member types
// Member `map`
// Member `simulator`
// Member `yaml_base_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal_ids`
// Member `goal_x_coords`
// Member `goal_y_coords`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hunav_msgs__srv__GetParameters_Response__init(message_memory);
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_fini_function(void * message_memory)
{
  hunav_msgs__srv__GetParameters_Response__fini(message_memory);
}

size_t hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_x_coords(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_x_coords(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_x_coords(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_x_coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_x_coords(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_x_coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_x_coords(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_x_coords(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_y_coords(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_y_coords(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_y_coords(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_y_coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_y_coords(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_y_coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_y_coords(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_y_coords(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_member_array[7] = {
  {
    "publish_people",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, publish_people),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "simulator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, simulator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaml_base_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, yaml_base_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, goal_ids),  // bytes offset in struct
    NULL,  // default value
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_ids,  // size() function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_ids,  // get_const(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_ids,  // get(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_ids,  // fetch(index, &value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_ids,  // assign(index, value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_ids  // resize(index) function pointer
  },
  {
    "goal_x_coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, goal_x_coords),  // bytes offset in struct
    NULL,  // default value
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_x_coords,  // size() function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_x_coords,  // get_const(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_x_coords,  // get(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_x_coords,  // fetch(index, &value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_x_coords,  // assign(index, value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_x_coords  // resize(index) function pointer
  },
  {
    "goal_y_coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hunav_msgs__srv__GetParameters_Response, goal_y_coords),  // bytes offset in struct
    NULL,  // default value
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__size_function__GetParameters_Response__goal_y_coords,  // size() function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameters_Response__goal_y_coords,  // get_const(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__get_function__GetParameters_Response__goal_y_coords,  // get(index) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameters_Response__goal_y_coords,  // fetch(index, &value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__assign_function__GetParameters_Response__goal_y_coords,  // assign(index, value) function pointer
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__resize_function__GetParameters_Response__goal_y_coords  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_members = {
  "hunav_msgs__srv",  // message namespace
  "GetParameters_Response",  // message name
  7,  // number of fields
  sizeof(hunav_msgs__srv__GetParameters_Response),
  hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_member_array,  // message members
  hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_type_support_handle = {
  0,
  &hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Response)() {
  if (!hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hunav_msgs__srv__GetParameters_Response__rosidl_typesupport_introspection_c__GetParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hunav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hunav_msgs/srv/detail/get_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_members = {
  "hunav_msgs__srv",  // service namespace
  "GetParameters",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_Request_message_type_support_handle,
  NULL  // response message
  // hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_Response_message_type_support_handle
};

static rosidl_service_type_support_t hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_type_support_handle = {
  0,
  &hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hunav_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters)() {
  if (!hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_type_support_handle.typesupport_identifier) {
    hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hunav_msgs, srv, GetParameters_Response)()->data;
  }

  return &hunav_msgs__srv__detail__get_parameters__rosidl_typesupport_introspection_c__GetParameters_service_type_support_handle;
}
