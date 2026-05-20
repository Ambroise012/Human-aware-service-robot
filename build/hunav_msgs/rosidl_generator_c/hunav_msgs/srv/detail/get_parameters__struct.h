// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
#define HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetParameters in the package hunav_msgs.
typedef struct hunav_msgs__srv__GetParameters_Request
{
  uint8_t structure_needs_at_least_one_member;
} hunav_msgs__srv__GetParameters_Request;

// Struct for a sequence of hunav_msgs__srv__GetParameters_Request.
typedef struct hunav_msgs__srv__GetParameters_Request__Sequence
{
  hunav_msgs__srv__GetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__GetParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map'
// Member 'simulator'
// Member 'yaml_base_name'
#include "rosidl_runtime_c/string.h"
// Member 'goal_ids'
// Member 'goal_x_coords'
// Member 'goal_y_coords'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetParameters in the package hunav_msgs.
typedef struct hunav_msgs__srv__GetParameters_Response
{
  bool publish_people;
  rosidl_runtime_c__String map;
  rosidl_runtime_c__String simulator;
  rosidl_runtime_c__String yaml_base_name;
  /// Global goals as arrays for easier handling
  rosidl_runtime_c__int64__Sequence goal_ids;
  rosidl_runtime_c__double__Sequence goal_x_coords;
  rosidl_runtime_c__double__Sequence goal_y_coords;
} hunav_msgs__srv__GetParameters_Response;

// Struct for a sequence of hunav_msgs__srv__GetParameters_Response.
typedef struct hunav_msgs__srv__GetParameters_Response__Sequence
{
  hunav_msgs__srv__GetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__GetParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
