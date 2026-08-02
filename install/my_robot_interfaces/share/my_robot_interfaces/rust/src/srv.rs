#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to my_robot_interfaces__srv__ComputeRectangleArea_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeRectangleArea_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub length: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: f64,

}



impl Default for ComputeRectangleArea_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeRectangleArea_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeRectangleArea_Request {
  type RmwMsg = super::srv::rmw::ComputeRectangleArea_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        length: msg.length,
        width: msg.width,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      length: msg.length,
      width: msg.width,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      length: msg.length,
      width: msg.width,
    }
  }
}


// Corresponds to my_robot_interfaces__srv__ComputeRectangleArea_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeRectangleArea_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub area: f64,

}



impl Default for ComputeRectangleArea_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ComputeRectangleArea_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeRectangleArea_Response {
  type RmwMsg = super::srv::rmw::ComputeRectangleArea_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        area: msg.area,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      area: msg.area,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      area: msg.area,
    }
  }
}


// Corresponds to my_robot_interfaces__srv__SetLedStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLedStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number_to_blink: i64,

}



impl Default for SetLedStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLedStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetLedStatus_Request {
  type RmwMsg = super::srv::rmw::SetLedStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        number_to_blink: msg.number_to_blink,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      number_to_blink: msg.number_to_blink,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      number_to_blink: msg.number_to_blink,
    }
  }
}


// Corresponds to my_robot_interfaces__srv__SetLedStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLedStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetLedStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLedStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetLedStatus_Response {
  type RmwMsg = super::srv::rmw::SetLedStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to my_robot_interfaces__srv__SpawnTurtle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnTurtle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub spawnaprey: bool,

}



impl Default for SpawnTurtle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnTurtle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnTurtle_Request {
  type RmwMsg = super::srv::rmw::SpawnTurtle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        spawnaprey: msg.spawnaprey,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      spawnaprey: msg.spawnaprey,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      spawnaprey: msg.spawnaprey,
    }
  }
}


// Corresponds to my_robot_interfaces__srv__SpawnTurtle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnTurtle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub isthepreyalive: bool,

}



impl Default for SpawnTurtle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnTurtle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnTurtle_Response {
  type RmwMsg = super::srv::rmw::SpawnTurtle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        isthepreyalive: msg.isthepreyalive,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      isthepreyalive: msg.isthepreyalive,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      isthepreyalive: msg.isthepreyalive,
    }
  }
}






#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea() -> *const std::ffi::c_void;
}

// Corresponds to my_robot_interfaces__srv__ComputeRectangleArea
#[allow(missing_docs, non_camel_case_types)]
pub struct ComputeRectangleArea;

impl rosidl_runtime_rs::Service for ComputeRectangleArea {
    type Request = ComputeRectangleArea_Request;
    type Response = ComputeRectangleArea_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea() }
    }
}




#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__SetLedStatus() -> *const std::ffi::c_void;
}

// Corresponds to my_robot_interfaces__srv__SetLedStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct SetLedStatus;

impl rosidl_runtime_rs::Service for SetLedStatus {
    type Request = SetLedStatus_Request;
    type Response = SetLedStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__SetLedStatus() }
    }
}




#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__SpawnTurtle() -> *const std::ffi::c_void;
}

// Corresponds to my_robot_interfaces__srv__SpawnTurtle
#[allow(missing_docs, non_camel_case_types)]
pub struct SpawnTurtle;

impl rosidl_runtime_rs::Service for SpawnTurtle {
    type Request = SpawnTurtle_Request;
    type Response = SpawnTurtle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__srv__SpawnTurtle() }
    }
}


