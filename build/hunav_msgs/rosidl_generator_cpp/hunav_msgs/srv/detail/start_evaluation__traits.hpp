// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:srv/StartEvaluation.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__TRAITS_HPP_
#define HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/srv/detail/start_evaluation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robot_goal'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartEvaluation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_goal
  {
    out << "robot_goal: ";
    to_flow_style_yaml(msg.robot_goal, out);
    out << ", ";
  }

  // member: experiment_tag
  {
    out << "experiment_tag: ";
    rosidl_generator_traits::value_to_yaml(msg.experiment_tag, out);
    out << ", ";
  }

  // member: run_id
  {
    out << "run_id: ";
    rosidl_generator_traits::value_to_yaml(msg.run_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartEvaluation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_goal:\n";
    to_block_style_yaml(msg.robot_goal, out, indentation + 2);
  }

  // member: experiment_tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "experiment_tag: ";
    rosidl_generator_traits::value_to_yaml(msg.experiment_tag, out);
    out << "\n";
  }

  // member: run_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_id: ";
    rosidl_generator_traits::value_to_yaml(msg.run_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartEvaluation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hunav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hunav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hunav_msgs::srv::StartEvaluation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::StartEvaluation_Request & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::StartEvaluation_Request>()
{
  return "hunav_msgs::srv::StartEvaluation_Request";
}

template<>
inline const char * name<hunav_msgs::srv::StartEvaluation_Request>()
{
  return "hunav_msgs/srv/StartEvaluation_Request";
}

template<>
struct has_fixed_size<hunav_msgs::srv::StartEvaluation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hunav_msgs::srv::StartEvaluation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hunav_msgs::srv::StartEvaluation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartEvaluation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartEvaluation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartEvaluation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hunav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hunav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hunav_msgs::srv::StartEvaluation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::StartEvaluation_Response & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::StartEvaluation_Response>()
{
  return "hunav_msgs::srv::StartEvaluation_Response";
}

template<>
inline const char * name<hunav_msgs::srv::StartEvaluation_Response>()
{
  return "hunav_msgs/srv/StartEvaluation_Response";
}

template<>
struct has_fixed_size<hunav_msgs::srv::StartEvaluation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hunav_msgs::srv::StartEvaluation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hunav_msgs::srv::StartEvaluation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hunav_msgs::srv::StartEvaluation>()
{
  return "hunav_msgs::srv::StartEvaluation";
}

template<>
inline const char * name<hunav_msgs::srv::StartEvaluation>()
{
  return "hunav_msgs/srv/StartEvaluation";
}

template<>
struct has_fixed_size<hunav_msgs::srv::StartEvaluation>
  : std::integral_constant<
    bool,
    has_fixed_size<hunav_msgs::srv::StartEvaluation_Request>::value &&
    has_fixed_size<hunav_msgs::srv::StartEvaluation_Response>::value
  >
{
};

template<>
struct has_bounded_size<hunav_msgs::srv::StartEvaluation>
  : std::integral_constant<
    bool,
    has_bounded_size<hunav_msgs::srv::StartEvaluation_Request>::value &&
    has_bounded_size<hunav_msgs::srv::StartEvaluation_Response>::value
  >
{
};

template<>
struct is_service<hunav_msgs::srv::StartEvaluation>
  : std::true_type
{
};

template<>
struct is_service_request<hunav_msgs::srv::StartEvaluation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hunav_msgs::srv::StartEvaluation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__TRAITS_HPP_
