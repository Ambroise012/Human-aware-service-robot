// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/StartEvaluation.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__StartEvaluation_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__StartEvaluation_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartEvaluation_Request_
{
  using Type = StartEvaluation_Request_<ContainerAllocator>;

  explicit StartEvaluation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->experiment_tag = "exp_1";
      this->run_id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->experiment_tag = "";
      this->run_id = 0l;
    }
  }

  explicit StartEvaluation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_goal(_alloc, _init),
    experiment_tag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->experiment_tag = "exp_1";
      this->run_id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->experiment_tag = "";
      this->run_id = 0l;
    }
  }

  // field types and members
  using _robot_goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _robot_goal_type robot_goal;
  using _experiment_tag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _experiment_tag_type experiment_tag;
  using _run_id_type =
    int32_t;
  _run_id_type run_id;

  // setters for named parameter idiom
  Type & set__robot_goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->robot_goal = _arg;
    return *this;
  }
  Type & set__experiment_tag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->experiment_tag = _arg;
    return *this;
  }
  Type & set__run_id(
    const int32_t & _arg)
  {
    this->run_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__StartEvaluation_Request
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__StartEvaluation_Request
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartEvaluation_Request_ & other) const
  {
    if (this->robot_goal != other.robot_goal) {
      return false;
    }
    if (this->experiment_tag != other.experiment_tag) {
      return false;
    }
    if (this->run_id != other.run_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartEvaluation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartEvaluation_Request_

// alias to use template instance with default allocator
using StartEvaluation_Request =
  hunav_msgs::srv::StartEvaluation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__StartEvaluation_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__StartEvaluation_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartEvaluation_Response_
{
  using Type = StartEvaluation_Response_<ContainerAllocator>;

  explicit StartEvaluation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit StartEvaluation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__StartEvaluation_Response
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__StartEvaluation_Response
    std::shared_ptr<hunav_msgs::srv::StartEvaluation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartEvaluation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartEvaluation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartEvaluation_Response_

// alias to use template instance with default allocator
using StartEvaluation_Response =
  hunav_msgs::srv::StartEvaluation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct StartEvaluation
{
  using Request = hunav_msgs::srv::StartEvaluation_Request;
  using Response = hunav_msgs::srv::StartEvaluation_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__START_EVALUATION__STRUCT_HPP_
