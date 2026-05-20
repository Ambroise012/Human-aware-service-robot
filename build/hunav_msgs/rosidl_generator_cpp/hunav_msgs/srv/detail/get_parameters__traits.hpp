// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_
#define HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hunav_msgs/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParameters_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetParameters_Request & msg, bool use_flow_style = false)
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
  const hunav_msgs::srv::GetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::GetParameters_Request & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::GetParameters_Request>()
{
  return "hunav_msgs::srv::GetParameters_Request";
}

template<>
inline const char * name<hunav_msgs::srv::GetParameters_Request>()
{
  return "hunav_msgs/srv/GetParameters_Request";
}

template<>
struct has_fixed_size<hunav_msgs::srv::GetParameters_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hunav_msgs::srv::GetParameters_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hunav_msgs::srv::GetParameters_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hunav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParameters_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: publish_people
  {
    out << "publish_people: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_people, out);
    out << ", ";
  }

  // member: map
  {
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << ", ";
  }

  // member: simulator
  {
    out << "simulator: ";
    rosidl_generator_traits::value_to_yaml(msg.simulator, out);
    out << ", ";
  }

  // member: yaml_base_name
  {
    out << "yaml_base_name: ";
    rosidl_generator_traits::value_to_yaml(msg.yaml_base_name, out);
    out << ", ";
  }

  // member: goal_ids
  {
    if (msg.goal_ids.size() == 0) {
      out << "goal_ids: []";
    } else {
      out << "goal_ids: [";
      size_t pending_items = msg.goal_ids.size();
      for (auto item : msg.goal_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_x_coords
  {
    if (msg.goal_x_coords.size() == 0) {
      out << "goal_x_coords: []";
    } else {
      out << "goal_x_coords: [";
      size_t pending_items = msg.goal_x_coords.size();
      for (auto item : msg.goal_x_coords) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_y_coords
  {
    if (msg.goal_y_coords.size() == 0) {
      out << "goal_y_coords: []";
    } else {
      out << "goal_y_coords: [";
      size_t pending_items = msg.goal_y_coords.size();
      for (auto item : msg.goal_y_coords) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publish_people
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish_people: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_people, out);
    out << "\n";
  }

  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << "\n";
  }

  // member: simulator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "simulator: ";
    rosidl_generator_traits::value_to_yaml(msg.simulator, out);
    out << "\n";
  }

  // member: yaml_base_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaml_base_name: ";
    rosidl_generator_traits::value_to_yaml(msg.yaml_base_name, out);
    out << "\n";
  }

  // member: goal_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_ids.size() == 0) {
      out << "goal_ids: []\n";
    } else {
      out << "goal_ids:\n";
      for (auto item : msg.goal_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_x_coords
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_x_coords.size() == 0) {
      out << "goal_x_coords: []\n";
    } else {
      out << "goal_x_coords:\n";
      for (auto item : msg.goal_x_coords) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_y_coords
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_y_coords.size() == 0) {
      out << "goal_y_coords: []\n";
    } else {
      out << "goal_y_coords:\n";
      for (auto item : msg.goal_y_coords) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetParameters_Response & msg, bool use_flow_style = false)
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
  const hunav_msgs::srv::GetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hunav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hunav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hunav_msgs::srv::GetParameters_Response & msg)
{
  return hunav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hunav_msgs::srv::GetParameters_Response>()
{
  return "hunav_msgs::srv::GetParameters_Response";
}

template<>
inline const char * name<hunav_msgs::srv::GetParameters_Response>()
{
  return "hunav_msgs/srv/GetParameters_Response";
}

template<>
struct has_fixed_size<hunav_msgs::srv::GetParameters_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hunav_msgs::srv::GetParameters_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hunav_msgs::srv::GetParameters_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hunav_msgs::srv::GetParameters>()
{
  return "hunav_msgs::srv::GetParameters";
}

template<>
inline const char * name<hunav_msgs::srv::GetParameters>()
{
  return "hunav_msgs/srv/GetParameters";
}

template<>
struct has_fixed_size<hunav_msgs::srv::GetParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<hunav_msgs::srv::GetParameters_Request>::value &&
    has_fixed_size<hunav_msgs::srv::GetParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<hunav_msgs::srv::GetParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<hunav_msgs::srv::GetParameters_Request>::value &&
    has_bounded_size<hunav_msgs::srv::GetParameters_Response>::value
  >
{
};

template<>
struct is_service<hunav_msgs::srv::GetParameters>
  : std::true_type
{
};

template<>
struct is_service_request<hunav_msgs::srv::GetParameters_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hunav_msgs::srv::GetParameters_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_
