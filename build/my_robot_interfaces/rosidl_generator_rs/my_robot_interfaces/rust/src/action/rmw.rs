
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_Goal__init(msg: *mut PredatorMovement_Goal) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Goal>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Goal>);
    fn my_robot_interfaces__action__PredatorMovement_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Goal>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: f64,

}



impl Default for PredatorMovement_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Goal() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_Result__init(msg: *mut PredatorMovement_Result) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Result>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Result>);
    fn my_robot_interfaces__action__PredatorMovement_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Result>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_Result {
    /// Respond: Did The Predeator Turtle Reach the Prey Or not
    pub success: bool,

}



impl Default for PredatorMovement_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_Result__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Result() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_Feedback__init(msg: *mut PredatorMovement_Feedback) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Feedback>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Feedback>);
    fn my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_Feedback>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_x_position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_y_position: f64,

}



impl Default for PredatorMovement_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_Feedback() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_FeedbackMessage__init(msg: *mut PredatorMovement_FeedbackMessage) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_FeedbackMessage>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_FeedbackMessage>);
    fn my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_FeedbackMessage>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PredatorMovement_Feedback,

}



impl Default for PredatorMovement_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_FeedbackMessage() }
  }
}




#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Request__init(msg: *mut PredatorMovement_SendGoal_Request) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Request>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Request>);
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Request>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PredatorMovement_Goal,

}



impl Default for PredatorMovement_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal_Request() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Response__init(msg: *mut PredatorMovement_SendGoal_Response) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Response>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Response>);
    fn my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_SendGoal_Response>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PredatorMovement_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal_Response() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Request__init(msg: *mut PredatorMovement_GetResult_Request) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Request>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Request>);
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Request>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PredatorMovement_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult_Request() }
  }
}


#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Response__init(msg: *mut PredatorMovement_GetResult_Response) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Response>, size: usize) -> bool;
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Response>);
    fn my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PredatorMovement_GetResult_Response>) -> bool;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PredatorMovement_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PredatorMovement_Result,

}



impl Default for PredatorMovement_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_robot_interfaces__action__PredatorMovement_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_robot_interfaces__action__PredatorMovement_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PredatorMovement_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_robot_interfaces__action__PredatorMovement_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PredatorMovement_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PredatorMovement_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_robot_interfaces/action/PredatorMovement_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult_Response() }
  }
}






#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PredatorMovement_SendGoal;

impl rosidl_runtime_rs::Service for PredatorMovement_SendGoal {
    type Request = PredatorMovement_SendGoal_Request;
    type Response = PredatorMovement_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__action__PredatorMovement_SendGoal() }
    }
}




#[link(name = "my_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_robot_interfaces__action__PredatorMovement_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PredatorMovement_GetResult;

impl rosidl_runtime_rs::Service for PredatorMovement_GetResult {
    type Request = PredatorMovement_GetResult_Request;
    type Response = PredatorMovement_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_robot_interfaces__action__PredatorMovement_GetResult() }
    }
}


