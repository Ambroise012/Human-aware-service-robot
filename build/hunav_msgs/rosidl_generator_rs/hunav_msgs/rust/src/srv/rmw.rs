#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgents_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ComputeAgents_Request__init(msg: *mut ComputeAgents_Request) -> bool;
    fn hunav_msgs__srv__ComputeAgents_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__ComputeAgents_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Request>);
    fn hunav_msgs__srv__ComputeAgents_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeAgents_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__ComputeAgents_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::super::msg::rmw::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::super::msg::rmw::Agent,

}



impl Default for ComputeAgents_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ComputeAgents_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ComputeAgents_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeAgents_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeAgents_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeAgents_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ComputeAgents_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgents_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgents_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ComputeAgents_Response__init(msg: *mut ComputeAgents_Response) -> bool;
    fn hunav_msgs__srv__ComputeAgents_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__ComputeAgents_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Response>);
    fn hunav_msgs__srv__ComputeAgents_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeAgents_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeAgents_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__ComputeAgents_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agents: super::super::msg::rmw::Agents,

}



impl Default for ComputeAgents_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ComputeAgents_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ComputeAgents_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeAgents_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgents_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeAgents_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeAgents_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ComputeAgents_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgents_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgent_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ComputeAgent_Request__init(msg: *mut ComputeAgent_Request) -> bool;
    fn hunav_msgs__srv__ComputeAgent_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__ComputeAgent_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Request>);
    fn hunav_msgs__srv__ComputeAgent_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeAgent_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__ComputeAgent_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgent_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

}



impl Default for ComputeAgent_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ComputeAgent_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ComputeAgent_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeAgent_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeAgent_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeAgent_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ComputeAgent_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgent_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgent_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ComputeAgent_Response__init(msg: *mut ComputeAgent_Response) -> bool;
    fn hunav_msgs__srv__ComputeAgent_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__ComputeAgent_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Response>);
    fn hunav_msgs__srv__ComputeAgent_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeAgent_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeAgent_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__ComputeAgent_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgent_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agent: super::super::msg::rmw::Agent,

}



impl Default for ComputeAgent_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ComputeAgent_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ComputeAgent_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeAgent_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ComputeAgent_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeAgent_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeAgent_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ComputeAgent_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ComputeAgent_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__MoveAgent_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__MoveAgent_Request__init(msg: *mut MoveAgent_Request) -> bool;
    fn hunav_msgs__srv__MoveAgent_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__MoveAgent_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Request>);
    fn hunav_msgs__srv__MoveAgent_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveAgent_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__MoveAgent_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAgent_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::super::msg::rmw::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::super::msg::rmw::Agent,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agent_id: i32,

}



impl Default for MoveAgent_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__MoveAgent_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__MoveAgent_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveAgent_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveAgent_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveAgent_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/MoveAgent_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__MoveAgent_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__MoveAgent_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__MoveAgent_Response__init(msg: *mut MoveAgent_Response) -> bool;
    fn hunav_msgs__srv__MoveAgent_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__MoveAgent_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Response>);
    fn hunav_msgs__srv__MoveAgent_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveAgent_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveAgent_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__MoveAgent_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAgent_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agent: super::super::msg::rmw::Agent,

}



impl Default for MoveAgent_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__MoveAgent_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__MoveAgent_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveAgent_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__MoveAgent_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveAgent_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveAgent_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/MoveAgent_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__MoveAgent_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetAgents_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__GetAgents_Request__init(msg: *mut GetAgents_Request) -> bool;
    fn hunav_msgs__srv__GetAgents_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__GetAgents_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Request>);
    fn hunav_msgs__srv__GetAgents_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAgents_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__GetAgents_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub empty: i32,

}



impl Default for GetAgents_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__GetAgents_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__GetAgents_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAgents_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAgents_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAgents_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/GetAgents_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetAgents_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetAgents_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__GetAgents_Response__init(msg: *mut GetAgents_Response) -> bool;
    fn hunav_msgs__srv__GetAgents_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__GetAgents_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Response>);
    fn hunav_msgs__srv__GetAgents_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAgents_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAgents_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__GetAgents_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub agents: super::super::msg::rmw::Agents,

}



impl Default for GetAgents_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__GetAgents_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__GetAgents_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAgents_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetAgents_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAgents_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAgents_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/GetAgents_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetAgents_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__GetParameters_Request__init(msg: *mut GetParameters_Request) -> bool;
    fn hunav_msgs__srv__GetParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__GetParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Request>);
    fn hunav_msgs__srv__GetParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__GetParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__GetParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__GetParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/GetParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetParameters_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__GetParameters_Response__init(msg: *mut GetParameters_Response) -> bool;
    fn hunav_msgs__srv__GetParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__GetParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Response>);
    fn hunav_msgs__srv__GetParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetParameters_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__GetParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub publish_people: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub simulator: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaml_base_name: rosidl_runtime_rs::String,

    /// Global goals as arrays for easier handling
    pub goal_ids: rosidl_runtime_rs::Sequence<i64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_x_coords: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_y_coords: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__GetParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__GetParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__GetParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/GetParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__GetParameters_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ResetAgents_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ResetAgents_Request__init(msg: *mut ResetAgents_Request) -> bool;
    fn hunav_msgs__srv__ResetAgents_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__ResetAgents_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Request>);
    fn hunav_msgs__srv__ResetAgents_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetAgents_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__ResetAgents_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::super::msg::rmw::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::super::msg::rmw::Agent,

}



impl Default for ResetAgents_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ResetAgents_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ResetAgents_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetAgents_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetAgents_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetAgents_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ResetAgents_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ResetAgents_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ResetAgents_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__ResetAgents_Response__init(msg: *mut ResetAgents_Response) -> bool;
    fn hunav_msgs__srv__ResetAgents_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__ResetAgents_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Response>);
    fn hunav_msgs__srv__ResetAgents_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetAgents_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetAgents_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__ResetAgents_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for ResetAgents_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__ResetAgents_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__ResetAgents_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetAgents_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__ResetAgents_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetAgents_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetAgents_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/ResetAgents_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__ResetAgents_Response() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__StartEvaluation_Request() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__StartEvaluation_Request__init(msg: *mut StartEvaluation_Request) -> bool;
    fn hunav_msgs__srv__StartEvaluation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Request>, size: usize) -> bool;
    fn hunav_msgs__srv__StartEvaluation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Request>);
    fn hunav_msgs__srv__StartEvaluation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartEvaluation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Request>) -> bool;
}

// Corresponds to hunav_msgs__srv__StartEvaluation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartEvaluation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_goal: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub experiment_tag: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_id: i32,

}



impl Default for StartEvaluation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__StartEvaluation_Request__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__StartEvaluation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartEvaluation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartEvaluation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartEvaluation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/StartEvaluation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__StartEvaluation_Request() }
  }
}


#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__StartEvaluation_Response() -> *const std::ffi::c_void;
}

#[link(name = "hunav_msgs__rosidl_generator_c")]
extern "C" {
    fn hunav_msgs__srv__StartEvaluation_Response__init(msg: *mut StartEvaluation_Response) -> bool;
    fn hunav_msgs__srv__StartEvaluation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Response>, size: usize) -> bool;
    fn hunav_msgs__srv__StartEvaluation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Response>);
    fn hunav_msgs__srv__StartEvaluation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartEvaluation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartEvaluation_Response>) -> bool;
}

// Corresponds to hunav_msgs__srv__StartEvaluation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartEvaluation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for StartEvaluation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hunav_msgs__srv__StartEvaluation_Response__init(&mut msg as *mut _) {
        panic!("Call to hunav_msgs__srv__StartEvaluation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartEvaluation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hunav_msgs__srv__StartEvaluation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartEvaluation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartEvaluation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hunav_msgs/srv/StartEvaluation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hunav_msgs__srv__StartEvaluation_Response() }
  }
}






#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ComputeAgents() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__ComputeAgents
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputeAgents;

impl rosidl_runtime_rs::Service for ComputeAgents {
    type Request = ComputeAgents_Request;
    type Response = ComputeAgents_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ComputeAgents() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ComputeAgent() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__ComputeAgent
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputeAgent;

impl rosidl_runtime_rs::Service for ComputeAgent {
    type Request = ComputeAgent_Request;
    type Response = ComputeAgent_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ComputeAgent() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__MoveAgent() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__MoveAgent
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveAgent;

impl rosidl_runtime_rs::Service for MoveAgent {
    type Request = MoveAgent_Request;
    type Response = MoveAgent_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__MoveAgent() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__GetAgents() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__GetAgents
#[allow(missing_docs, non_camel_case_types)]
pub struct GetAgents;

impl rosidl_runtime_rs::Service for GetAgents {
    type Request = GetAgents_Request;
    type Response = GetAgents_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__GetAgents() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__GetParameters() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__GetParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct GetParameters;

impl rosidl_runtime_rs::Service for GetParameters {
    type Request = GetParameters_Request;
    type Response = GetParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__GetParameters() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ResetAgents() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__ResetAgents
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetAgents;

impl rosidl_runtime_rs::Service for ResetAgents {
    type Request = ResetAgents_Request;
    type Response = ResetAgents_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__ResetAgents() }
    }
}




#[link(name = "hunav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__StartEvaluation() -> *const std::ffi::c_void;
}

// Corresponds to hunav_msgs__srv__StartEvaluation
#[allow(missing_docs, non_camel_case_types)]
pub struct StartEvaluation;

impl rosidl_runtime_rs::Service for StartEvaluation {
    type Request = StartEvaluation_Request;
    type Response = StartEvaluation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hunav_msgs__srv__StartEvaluation() }
    }
}


