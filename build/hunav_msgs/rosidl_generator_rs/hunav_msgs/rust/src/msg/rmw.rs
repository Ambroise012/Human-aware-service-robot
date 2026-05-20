#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__Agent() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__msg__Agent__init(msg: *mut Agent) -> bool;
    fn hunav_msgs__msg__Agent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Agent>, size: usize) -> bool;
    fn hunav_msgs__msg__Agent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Agent>);
    fn hunav_msgs__msg__Agent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Agent>, out_seq: *mut rosidl_runtime_rs::Sequence<Agent>) -> bool;
}

// Corresponds to hunav_msgs__msg__Agent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// types

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Agent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skin: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub desired_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_vel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_vel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub behavior: super::super::msg::rmw::AgentBehavior,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cyclic_goals: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closest_obs: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}

impl Agent {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PERSON: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OTHER: u8 = 3;

}


impl Default for Agent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__msg__Agent__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__msg__Agent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Agent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Agent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Agent where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/msg/Agent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__Agent() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__Agents() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__msg__Agents__init(msg: *mut Agents) -> bool;
    fn hunav_msgs__msg__Agents__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Agents>, size: usize) -> bool;
    fn hunav_msgs__msg__Agents__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Agents>);
    fn hunav_msgs__msg__Agents__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Agents>, out_seq: *mut rosidl_runtime_rs::Sequence<Agents>) -> bool;
}

// Corresponds to hunav_msgs__msg__Agents
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Agents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agents: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Agent>,

}



impl Default for Agents {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__msg__Agents__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__msg__Agents__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Agents {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agents__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agents__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__Agents__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Agents {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Agents where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/msg/Agents";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__Agents() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__AgentBehavior() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__msg__AgentBehavior__init(msg: *mut AgentBehavior) -> bool;
    fn hunav_msgs__msg__AgentBehavior__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AgentBehavior>, size: usize) -> bool;
    fn hunav_msgs__msg__AgentBehavior__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AgentBehavior>);
    fn hunav_msgs__msg__AgentBehavior__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AgentBehavior>, out_seq: *mut rosidl_runtime_rs::Sequence<AgentBehavior>) -> bool;
}

// Corresponds to hunav_msgs__msg__AgentBehavior
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// behaviors types

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AgentBehavior {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub configuration: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub once: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub social_force_factor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_force_factor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_force_factor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub other_force_factor: f32,

}

impl AgentBehavior {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_REGULAR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_IMPASSIVE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_SURPRISED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_SCARED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_CURIOUS: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_THREATENING: u8 = 6;

    /// behavior states
    pub const BEH_NO_ACTIVE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_ACTIVE_1: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_ACTIVE_2: u8 = 2;

    /// behavior configuration
    pub const BEH_CONF_DEFAULT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_CONF_CUSTOM: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_CONF_RANDOM_NORMAL: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BEH_CONF_RANDOM_UNIFORM: u8 = 3;

}


impl Default for AgentBehavior {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__msg__AgentBehavior__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__msg__AgentBehavior__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AgentBehavior {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__AgentBehavior__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__AgentBehavior__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__msg__AgentBehavior__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AgentBehavior {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AgentBehavior where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/msg/AgentBehavior";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__msg__AgentBehavior() }
  }
}


