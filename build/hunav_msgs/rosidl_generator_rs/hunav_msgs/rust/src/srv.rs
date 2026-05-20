#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to hunav_msgs__srv__ComputeAgents_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::msg::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::msg::Agent,

}



impl Default for ComputeAgents_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeAgents_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeAgents_Request {
  type RmwMsg = super::srv::rmw::ComputeAgents_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Owned(msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(msg.robot)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(&msg.robot)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_agents: super::msg::Agents::from_rmw_message(msg.current_agents),
      robot: super::msg::Agent::from_rmw_message(msg.robot),
    }
  }
}


// Corresponds to hunav_msgs__srv__ComputeAgents_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agents: super::msg::Agents,

}



impl Default for ComputeAgents_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeAgents_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeAgents_Response {
  type RmwMsg = super::srv::rmw::ComputeAgents_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Owned(msg.updated_agents)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Borrowed(&msg.updated_agents)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      updated_agents: super::msg::Agents::from_rmw_message(msg.updated_agents),
    }
  }
}


// Corresponds to hunav_msgs__srv__ComputeAgent_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgent_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

}



impl Default for ComputeAgent_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeAgent_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeAgent_Request {
  type RmwMsg = super::srv::rmw::ComputeAgent_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
    }
  }
}


// Corresponds to hunav_msgs__srv__ComputeAgent_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeAgent_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agent: super::msg::Agent,

}



impl Default for ComputeAgent_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeAgent_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeAgent_Response {
  type RmwMsg = super::srv::rmw::ComputeAgent_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agent: super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(msg.updated_agent)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agent: super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(&msg.updated_agent)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      updated_agent: super::msg::Agent::from_rmw_message(msg.updated_agent),
    }
  }
}


// Corresponds to hunav_msgs__srv__MoveAgent_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAgent_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::msg::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::msg::Agent,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agent_id: i32,

}



impl Default for MoveAgent_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveAgent_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveAgent_Request {
  type RmwMsg = super::srv::rmw::MoveAgent_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Owned(msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(msg.robot)).into_owned(),
        agent_id: msg.agent_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(&msg.robot)).into_owned(),
      agent_id: msg.agent_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_agents: super::msg::Agents::from_rmw_message(msg.current_agents),
      robot: super::msg::Agent::from_rmw_message(msg.robot),
      agent_id: msg.agent_id,
    }
  }
}


// Corresponds to hunav_msgs__srv__MoveAgent_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAgent_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub updated_agent: super::msg::Agent,

}



impl Default for MoveAgent_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveAgent_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveAgent_Response {
  type RmwMsg = super::srv::rmw::MoveAgent_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agent: super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(msg.updated_agent)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        updated_agent: super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(&msg.updated_agent)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      updated_agent: super::msg::Agent::from_rmw_message(msg.updated_agent),
    }
  }
}


// Corresponds to hunav_msgs__srv__GetAgents_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub empty: i32,

}



impl Default for GetAgents_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAgents_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAgents_Request {
  type RmwMsg = super::srv::rmw::GetAgents_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        empty: msg.empty,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      empty: msg.empty,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      empty: msg.empty,
    }
  }
}


// Corresponds to hunav_msgs__srv__GetAgents_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub agents: super::msg::Agents,

}



impl Default for GetAgents_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAgents_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAgents_Response {
  type RmwMsg = super::srv::rmw::GetAgents_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Owned(msg.agents)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Borrowed(&msg.agents)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      agents: super::msg::Agents::from_rmw_message(msg.agents),
    }
  }
}


// Corresponds to hunav_msgs__srv__GetParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetParameters_Request {
  type RmwMsg = super::srv::rmw::GetParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to hunav_msgs__srv__GetParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub publish_people: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub map: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub simulator: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaml_base_name: std::string::String,

    /// Global goals as arrays for easier handling
    pub goal_ids: Vec<i64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_x_coords: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_y_coords: Vec<f64>,

}



impl Default for GetParameters_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetParameters_Response {
  type RmwMsg = super::srv::rmw::GetParameters_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        publish_people: msg.publish_people,
        map: msg.map.as_str().into(),
        simulator: msg.simulator.as_str().into(),
        yaml_base_name: msg.yaml_base_name.as_str().into(),
        goal_ids: msg.goal_ids.into(),
        goal_x_coords: msg.goal_x_coords.into(),
        goal_y_coords: msg.goal_y_coords.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      publish_people: msg.publish_people,
        map: msg.map.as_str().into(),
        simulator: msg.simulator.as_str().into(),
        yaml_base_name: msg.yaml_base_name.as_str().into(),
        goal_ids: msg.goal_ids.as_slice().into(),
        goal_x_coords: msg.goal_x_coords.as_slice().into(),
        goal_y_coords: msg.goal_y_coords.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      publish_people: msg.publish_people,
      map: msg.map.to_string(),
      simulator: msg.simulator.to_string(),
      yaml_base_name: msg.yaml_base_name.to_string(),
      goal_ids: msg.goal_ids
          .into_iter()
          .collect(),
      goal_x_coords: msg.goal_x_coords
          .into_iter()
          .collect(),
      goal_y_coords: msg.goal_y_coords
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to hunav_msgs__srv__ResetAgents_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetAgents_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_agents: super::msg::Agents,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot: super::msg::Agent,

}



impl Default for ResetAgents_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetAgents_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetAgents_Request {
  type RmwMsg = super::srv::rmw::ResetAgents_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Owned(msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(msg.robot)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_agents: super::msg::Agents::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_agents)).into_owned(),
        robot: super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(&msg.robot)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_agents: super::msg::Agents::from_rmw_message(msg.current_agents),
      robot: super::msg::Agent::from_rmw_message(msg.robot),
    }
  }
}


// Corresponds to hunav_msgs__srv__ResetAgents_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetAgents_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for ResetAgents_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetAgents_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetAgents_Response {
  type RmwMsg = super::srv::rmw::ResetAgents_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ok: msg.ok,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ok: msg.ok,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ok: msg.ok,
    }
  }
}


// Corresponds to hunav_msgs__srv__StartEvaluation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartEvaluation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_goal: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub experiment_tag: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_id: i32,

}



impl Default for StartEvaluation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartEvaluation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StartEvaluation_Request {
  type RmwMsg = super::srv::rmw::StartEvaluation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.robot_goal)).into_owned(),
        experiment_tag: msg.experiment_tag.as_str().into(),
        run_id: msg.run_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_goal: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.robot_goal)).into_owned(),
        experiment_tag: msg.experiment_tag.as_str().into(),
      run_id: msg.run_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_goal: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.robot_goal),
      experiment_tag: msg.experiment_tag.to_string(),
      run_id: msg.run_id,
    }
  }
}


// Corresponds to hunav_msgs__srv__StartEvaluation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartEvaluation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for StartEvaluation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartEvaluation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StartEvaluation_Response {
  type RmwMsg = super::srv::rmw::StartEvaluation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


