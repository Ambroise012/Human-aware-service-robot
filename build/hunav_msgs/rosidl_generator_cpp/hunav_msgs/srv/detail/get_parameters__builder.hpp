// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::GetParameters_Request>()
{
  return ::hunav_msgs::srv::GetParameters_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Response_goal_y_coords
{
public:
  explicit Init_GetParameters_Response_goal_y_coords(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::srv::GetParameters_Response goal_y_coords(::hunav_msgs::srv::GetParameters_Response::_goal_y_coords_type arg)
  {
    msg_.goal_y_coords = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_goal_x_coords
{
public:
  explicit Init_GetParameters_Response_goal_x_coords(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Response_goal_y_coords goal_x_coords(::hunav_msgs::srv::GetParameters_Response::_goal_x_coords_type arg)
  {
    msg_.goal_x_coords = std::move(arg);
    return Init_GetParameters_Response_goal_y_coords(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_goal_ids
{
public:
  explicit Init_GetParameters_Response_goal_ids(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Response_goal_x_coords goal_ids(::hunav_msgs::srv::GetParameters_Response::_goal_ids_type arg)
  {
    msg_.goal_ids = std::move(arg);
    return Init_GetParameters_Response_goal_x_coords(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_yaml_base_name
{
public:
  explicit Init_GetParameters_Response_yaml_base_name(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Response_goal_ids yaml_base_name(::hunav_msgs::srv::GetParameters_Response::_yaml_base_name_type arg)
  {
    msg_.yaml_base_name = std::move(arg);
    return Init_GetParameters_Response_goal_ids(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_simulator
{
public:
  explicit Init_GetParameters_Response_simulator(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Response_yaml_base_name simulator(::hunav_msgs::srv::GetParameters_Response::_simulator_type arg)
  {
    msg_.simulator = std::move(arg);
    return Init_GetParameters_Response_yaml_base_name(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_map
{
public:
  explicit Init_GetParameters_Response_map(::hunav_msgs::srv::GetParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Response_simulator map(::hunav_msgs::srv::GetParameters_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_GetParameters_Response_simulator(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

class Init_GetParameters_Response_publish_people
{
public:
  Init_GetParameters_Response_publish_people()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetParameters_Response_map publish_people(::hunav_msgs::srv::GetParameters_Response::_publish_people_type arg)
  {
    msg_.publish_people = std::move(arg);
    return Init_GetParameters_Response_map(msg_);
  }

private:
  ::hunav_msgs::srv::GetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::GetParameters_Response>()
{
  return hunav_msgs::srv::builder::Init_GetParameters_Response_publish_people();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
