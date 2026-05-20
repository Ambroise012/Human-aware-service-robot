// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hunav_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_
#define HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__GetParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__GetParameters_Request __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetParameters_Request_
{
  using Type = GetParameters_Request_<ContainerAllocator>;

  explicit GetParameters_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetParameters_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__GetParameters_Request
    std::shared_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__GetParameters_Request
    std::shared_ptr<hunav_msgs::srv::GetParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetParameters_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetParameters_Request_

// alias to use template instance with default allocator
using GetParameters_Request =
  hunav_msgs::srv::GetParameters_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs


#ifndef _WIN32
# define DEPRECATED__hunav_msgs__srv__GetParameters_Response __attribute__((deprecated))
#else
# define DEPRECATED__hunav_msgs__srv__GetParameters_Response __declspec(deprecated)
#endif

namespace hunav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetParameters_Response_
{
  using Type = GetParameters_Response_<ContainerAllocator>;

  explicit GetParameters_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_people = false;
      this->map = "";
      this->simulator = "";
      this->yaml_base_name = "";
    }
  }

  explicit GetParameters_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc),
    simulator(_alloc),
    yaml_base_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_people = false;
      this->map = "";
      this->simulator = "";
      this->yaml_base_name = "";
    }
  }

  // field types and members
  using _publish_people_type =
    bool;
  _publish_people_type publish_people;
  using _map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_type map;
  using _simulator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _simulator_type simulator;
  using _yaml_base_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yaml_base_name_type yaml_base_name;
  using _goal_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _goal_ids_type goal_ids;
  using _goal_x_coords_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_x_coords_type goal_x_coords;
  using _goal_y_coords_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_y_coords_type goal_y_coords;

  // setters for named parameter idiom
  Type & set__publish_people(
    const bool & _arg)
  {
    this->publish_people = _arg;
    return *this;
  }
  Type & set__map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__simulator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->simulator = _arg;
    return *this;
  }
  Type & set__yaml_base_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yaml_base_name = _arg;
    return *this;
  }
  Type & set__goal_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->goal_ids = _arg;
    return *this;
  }
  Type & set__goal_x_coords(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal_x_coords = _arg;
    return *this;
  }
  Type & set__goal_y_coords(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal_y_coords = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hunav_msgs__srv__GetParameters_Response
    std::shared_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hunav_msgs__srv__GetParameters_Response
    std::shared_ptr<hunav_msgs::srv::GetParameters_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetParameters_Response_ & other) const
  {
    if (this->publish_people != other.publish_people) {
      return false;
    }
    if (this->map != other.map) {
      return false;
    }
    if (this->simulator != other.simulator) {
      return false;
    }
    if (this->yaml_base_name != other.yaml_base_name) {
      return false;
    }
    if (this->goal_ids != other.goal_ids) {
      return false;
    }
    if (this->goal_x_coords != other.goal_x_coords) {
      return false;
    }
    if (this->goal_y_coords != other.goal_y_coords) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetParameters_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetParameters_Response_

// alias to use template instance with default allocator
using GetParameters_Response =
  hunav_msgs::srv::GetParameters_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hunav_msgs

namespace hunav_msgs
{

namespace srv
{

struct GetParameters
{
  using Request = hunav_msgs::srv::GetParameters_Request;
  using Response = hunav_msgs::srv::GetParameters_Response;
};

}  // namespace srv

}  // namespace hunav_msgs

#endif  // HUNAV_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_
