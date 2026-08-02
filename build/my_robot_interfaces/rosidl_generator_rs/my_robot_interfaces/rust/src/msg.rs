#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to my_robot_interfaces__msg__HardwareStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub are_motors_ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_message: std::string::String,

}



impl Default for HardwareStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareStatus {
  type RmwMsg = super::msg::rmw::HardwareStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        temperature: msg.temperature,
        are_motors_ready: msg.are_motors_ready,
        debug_message: msg.debug_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      temperature: msg.temperature,
      are_motors_ready: msg.are_motors_ready,
        debug_message: msg.debug_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      temperature: msg.temperature,
      are_motors_ready: msg.are_motors_ready,
      debug_message: msg.debug_message.to_string(),
    }
  }
}


// Corresponds to my_robot_interfaces__msg__BatteryStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub batterylevel: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_message: std::string::String,

}



impl Default for BatteryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = super::msg::rmw::BatteryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        batterylevel: msg.batterylevel,
        status_message: msg.status_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      batterylevel: msg.batterylevel,
        status_message: msg.status_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      batterylevel: msg.batterylevel,
      status_message: msg.status_message.to_string(),
    }
  }
}


