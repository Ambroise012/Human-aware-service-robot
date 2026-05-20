// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hunav_msgs:srv/StartEvaluation.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_H_
#define HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'experiment_tag'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartEvaluation in the package hunav_msgs.
typedef struct hunav_msgs__srv__StartEvaluation_Request
{
  geometry_msgs__msg__PoseStamped robot_goal;
  rosidl_runtime_c__String experiment_tag;
  int32_t run_id;
} hunav_msgs__srv__StartEvaluation_Request;

// Struct for a sequence of hunav_msgs__srv__StartEvaluation_Request.
typedef struct hunav_msgs__srv__StartEvaluation_Request__Sequence
{
  hunav_msgs__srv__StartEvaluation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__StartEvaluation_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StartEvaluation in the package hunav_msgs.
typedef struct hunav_msgs__srv__StartEvaluation_Response
{
  bool success;
} hunav_msgs__srv__StartEvaluation_Response;

// Struct for a sequence of hunav_msgs__srv__StartEvaluation_Response.
typedef struct hunav_msgs__srv__StartEvaluation_Response__Sequence
{
  hunav_msgs__srv__StartEvaluation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hunav_msgs__srv__StartEvaluation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_H_
