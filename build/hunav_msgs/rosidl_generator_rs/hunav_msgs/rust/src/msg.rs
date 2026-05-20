#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to hunav_msgs__msg__Agent
/// types

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group_id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::Twist,


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
    pub behavior: super::msg::AgentBehavior,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: Vec<geometry_msgs::msg::Pose>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cyclic_goals: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closest_obs: Vec<geometry_msgs::msg::Point>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Agent::default())
  }
}

impl rosidl_runtime_rs::Message for Agent {
  type RmwMsg = super::msg::rmw::Agent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        type_: msg.type_,
        skin: msg.skin,
        name: msg.name.as_str().into(),
        group_id: msg.group_id,
        position: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        yaw: msg.yaw,
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        desired_velocity: msg.desired_velocity,
        radius: msg.radius,
        linear_vel: msg.linear_vel,
        angular_vel: msg.angular_vel,
        behavior: super::msg::AgentBehavior::into_rmw_message(std::borrow::Cow::Owned(msg.behavior)).into_owned(),
        goals: msg.goals
          .into_iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cyclic_goals: msg.cyclic_goals,
        goal_radius: msg.goal_radius,
        closest_obs: msg.closest_obs
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      type_: msg.type_,
      skin: msg.skin,
        name: msg.name.as_str().into(),
      group_id: msg.group_id,
        position: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      yaw: msg.yaw,
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
      desired_velocity: msg.desired_velocity,
      radius: msg.radius,
      linear_vel: msg.linear_vel,
      angular_vel: msg.angular_vel,
        behavior: super::msg::AgentBehavior::into_rmw_message(std::borrow::Cow::Borrowed(&msg.behavior)).into_owned(),
        goals: msg.goals
          .iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      cyclic_goals: msg.cyclic_goals,
      goal_radius: msg.goal_radius,
        closest_obs: msg.closest_obs
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      type_: msg.type_,
      skin: msg.skin,
      name: msg.name.to_string(),
      group_id: msg.group_id,
      position: geometry_msgs::msg::Pose::from_rmw_message(msg.position),
      yaw: msg.yaw,
      velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.velocity),
      desired_velocity: msg.desired_velocity,
      radius: msg.radius,
      linear_vel: msg.linear_vel,
      angular_vel: msg.angular_vel,
      behavior: super::msg::AgentBehavior::from_rmw_message(msg.behavior),
      goals: msg.goals
          .into_iter()
          .map(geometry_msgs::msg::Pose::from_rmw_message)
          .collect(),
      cyclic_goals: msg.cyclic_goals,
      goal_radius: msg.goal_radius,
      closest_obs: msg.closest_obs
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to hunav_msgs__msg__Agents

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Agents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agents: Vec<super::msg::Agent>,

}



impl Default for Agents {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Agents::default())
  }
}

impl rosidl_runtime_rs::Message for Agents {
  type RmwMsg = super::msg::rmw::Agents;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        agents: msg.agents
          .into_iter()
          .map(|elem| super::msg::Agent::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        agents: msg.agents
          .iter()
          .map(|elem| super::msg::Agent::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      agents: msg.agents
          .into_iter()
          .map(super::msg::Agent::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to hunav_msgs__msg__AgentBehavior
/// behaviors types

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AgentBehavior::default())
  }
}

impl rosidl_runtime_rs::Message for AgentBehavior {
  type RmwMsg = super::msg::rmw::AgentBehavior;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        state: msg.state,
        configuration: msg.configuration,
        duration: msg.duration,
        once: msg.once,
        vel: msg.vel,
        dist: msg.dist,
        social_force_factor: msg.social_force_factor,
        goal_force_factor: msg.goal_force_factor,
        obstacle_force_factor: msg.obstacle_force_factor,
        other_force_factor: msg.other_force_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      state: msg.state,
      configuration: msg.configuration,
      duration: msg.duration,
      once: msg.once,
      vel: msg.vel,
      dist: msg.dist,
      social_force_factor: msg.social_force_factor,
      goal_force_factor: msg.goal_force_factor,
      obstacle_force_factor: msg.obstacle_force_factor,
      other_force_factor: msg.other_force_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      state: msg.state,
      configuration: msg.configuration,
      duration: msg.duration,
      once: msg.once,
      vel: msg.vel,
      dist: msg.dist,
      social_force_factor: msg.social_force_factor,
      goal_force_factor: msg.goal_force_factor,
      obstacle_force_factor: msg.obstacle_force_factor,
      other_force_factor: msg.other_force_factor,
    }
  }
}


