#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__ComputeRectangleArea_Request__init(msg: *mut ComputeRectangleArea_Request) -> bool;
    fn my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Request>, size: usize) -> bool;
    fn my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Request>);
    fn my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeRectangleArea_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Request>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__ComputeRectangleArea_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__ComputeRectangleArea_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__ComputeRectangleArea_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeRectangleArea_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeRectangleArea_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeRectangleArea_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/ComputeRectangleArea_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea_Request() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__ComputeRectangleArea_Response__init(msg: *mut ComputeRectangleArea_Response) -> bool;
    fn my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Response>, size: usize) -> bool;
    fn my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Response>);
    fn my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeRectangleArea_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeRectangleArea_Response>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__ComputeRectangleArea_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeRectangleArea_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub area: f64,

}



impl Default for ComputeRectangleArea_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__ComputeRectangleArea_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__ComputeRectangleArea_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeRectangleArea_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__ComputeRectangleArea_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeRectangleArea_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeRectangleArea_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/ComputeRectangleArea_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__ComputeRectangleArea_Response() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SetLedStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__SetLedStatus_Request__init(msg: *mut SetLedStatus_Request) -> bool;
    fn my_robot_interfaces__srv__SetLedStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Request>, size: usize) -> bool;
    fn my_robot_interfaces__srv__SetLedStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Request>);
    fn my_robot_interfaces__srv__SetLedStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLedStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Request>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__SetLedStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLedStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number_to_blink: i64,

}



impl Default for SetLedStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__SetLedStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__SetLedStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLedStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLedStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLedStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/SetLedStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SetLedStatus_Request() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SetLedStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__SetLedStatus_Response__init(msg: *mut SetLedStatus_Response) -> bool;
    fn my_robot_interfaces__srv__SetLedStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Response>, size: usize) -> bool;
    fn my_robot_interfaces__srv__SetLedStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Response>);
    fn my_robot_interfaces__srv__SetLedStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLedStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLedStatus_Response>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__SetLedStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLedStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetLedStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__SetLedStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__SetLedStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLedStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SetLedStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLedStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLedStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/SetLedStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SetLedStatus_Response() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SpawnTurtle_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__SpawnTurtle_Request__init(msg: *mut SpawnTurtle_Request) -> bool;
    fn my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Request>, size: usize) -> bool;
    fn my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Request>);
    fn my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnTurtle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Request>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__SpawnTurtle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnTurtle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub spawnaprey: bool,

}



impl Default for SpawnTurtle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__SpawnTurtle_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__SpawnTurtle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnTurtle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnTurtle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnTurtle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/SpawnTurtle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SpawnTurtle_Request() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SpawnTurtle_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__srv__SpawnTurtle_Response__init(msg: *mut SpawnTurtle_Response) -> bool;
    fn my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Response>, size: usize) -> bool;
    fn my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Response>);
    fn my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnTurtle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnTurtle_Response>) -> bool;
}

// Corresponds to my_robot_interfaces__srv__SpawnTurtle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnTurtle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub isthepreyalive: bool,

}



impl Default for SpawnTurtle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__srv__SpawnTurtle_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__srv__SpawnTurtle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnTurtle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__srv__SpawnTurtle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnTurtle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnTurtle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/srv/SpawnTurtle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__srv__SpawnTurtle_Response() }
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


