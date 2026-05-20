// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hunav_msgs:srv/StartEvaluation.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__BUILDER_HPP_
#define HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hunav_msgs/srv/detail/start_evaluation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_StartEvaluation_Request_run_id
{
public:
  explicit Init_StartEvaluation_Request_run_id(::hunav_msgs::srv::StartEvaluation_Request & msg)
  : msg_(msg)
  {}
  ::hunav_msgs::srv::StartEvaluation_Request run_id(::hunav_msgs::srv::StartEvaluation_Request::_run_id_type arg)
  {
    msg_.run_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::StartEvaluation_Request msg_;
};

class Init_StartEvaluation_Request_experiment_tag
{
public:
  explicit Init_StartEvaluation_Request_experiment_tag(::hunav_msgs::srv::StartEvaluation_Request & msg)
  : msg_(msg)
  {}
  Init_StartEvaluation_Request_run_id experiment_tag(::hunav_msgs::srv::StartEvaluation_Request::_experiment_tag_type arg)
  {
    msg_.experiment_tag = std::move(arg);
    return Init_StartEvaluation_Request_run_id(msg_);
  }

private:
  ::hunav_msgs::srv::StartEvaluation_Request msg_;
};

class Init_StartEvaluation_Request_robot_goal
{
public:
  Init_StartEvaluation_Request_robot_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartEvaluation_Request_experiment_tag robot_goal(::hunav_msgs::srv::StartEvaluation_Request::_robot_goal_type arg)
  {
    msg_.robot_goal = std::move(arg);
    return Init_StartEvaluation_Request_experiment_tag(msg_);
  }

private:
  ::hunav_msgs::srv::StartEvaluation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::StartEvaluation_Request>()
{
  return hunav_msgs::srv::builder::Init_StartEvaluation_Request_robot_goal();
}

}  // namespace hunav_msgs


namespace hunav_msgs
{

namespace srv
{

namespace builder
{

class Init_StartEvaluation_Response_success
{
public:
  Init_StartEvaluation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hunav_msgs::srv::StartEvaluation_Response success(::hunav_msgs::srv::StartEvaluation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hunav_msgs::srv::StartEvaluation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hunav_msgs::srv::StartEvaluation_Response>()
{
  return hunav_msgs::srv::builder::Init_StartEvaluation_Response_success();
}

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__BUILDER_HPP_
