// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:srv/SpawnTurtle.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/srv/detail/spawn_turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__SpawnTurtle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x8a, 0x02, 0xe8, 0x77, 0x8d, 0x87, 0x4e,
      0x88, 0xca, 0x9d, 0xc6, 0x3e, 0x5f, 0x4a, 0xc4,
      0xad, 0x9f, 0x03, 0xb3, 0xa7, 0xed, 0x97, 0x20,
      0x45, 0x4a, 0x2c, 0xaa, 0x9b, 0x7e, 0xb6, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__SpawnTurtle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x8b, 0x60, 0x3d, 0x45, 0x88, 0x31, 0x6e,
      0x69, 0xb4, 0xe8, 0x96, 0xa5, 0x33, 0x15, 0x8f,
      0x9e, 0xcb, 0x99, 0x54, 0xce, 0x53, 0xc7, 0x57,
      0x91, 0x8c, 0xe8, 0xde, 0x58, 0x73, 0xd3, 0x73,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__SpawnTurtle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x4e, 0xf0, 0x0f, 0x79, 0x7f, 0x41, 0x65,
      0x09, 0xe0, 0x11, 0xe3, 0x9a, 0xf6, 0xbe, 0xce,
      0x75, 0xbb, 0xc1, 0x87, 0xeb, 0x5b, 0x0a, 0x8b,
      0xc5, 0xd1, 0x49, 0x0d, 0xb6, 0x91, 0xe2, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__srv__SpawnTurtle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x2f, 0x01, 0x23, 0x79, 0x44, 0x01, 0x5a,
      0xb8, 0xf5, 0xbd, 0xe4, 0xfc, 0xa7, 0xa0, 0xb1,
      0x4b, 0x37, 0x38, 0x34, 0xf1, 0x6c, 0x73, 0xbf,
      0x0e, 0xef, 0x56, 0xb2, 0x95, 0x8e, 0xfb, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_robot_interfaces__srv__SpawnTurtle__TYPE_NAME[] = "my_robot_interfaces/srv/SpawnTurtle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_robot_interfaces__srv__SpawnTurtle_Event__TYPE_NAME[] = "my_robot_interfaces/srv/SpawnTurtle_Event";
static char my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME[] = "my_robot_interfaces/srv/SpawnTurtle_Request";
static char my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME[] = "my_robot_interfaces/srv/SpawnTurtle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__request_message[] = "request_message";
static char my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__response_message[] = "response_message";
static char my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__SpawnTurtle__FIELDS[] = {
  {
    {my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interfaces__srv__SpawnTurtle_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__srv__SpawnTurtle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__SpawnTurtle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__SpawnTurtle__TYPE_NAME, 35, 35},
      {my_robot_interfaces__srv__SpawnTurtle__FIELDS, 3, 3},
    },
    {my_robot_interfaces__srv__SpawnTurtle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interfaces__srv__SpawnTurtle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interfaces__srv__SpawnTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_robot_interfaces__srv__SpawnTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__SpawnTurtle_Request__FIELD_NAME__spawnaprey[] = "spawnaprey";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__SpawnTurtle_Request__FIELDS[] = {
  {
    {my_robot_interfaces__srv__SpawnTurtle_Request__FIELD_NAME__spawnaprey, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__SpawnTurtle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
      {my_robot_interfaces__srv__SpawnTurtle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__SpawnTurtle_Response__FIELD_NAME__isthepreyalive[] = "isthepreyalive";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__SpawnTurtle_Response__FIELDS[] = {
  {
    {my_robot_interfaces__srv__SpawnTurtle_Response__FIELD_NAME__isthepreyalive, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__SpawnTurtle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
      {my_robot_interfaces__srv__SpawnTurtle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__info[] = "info";
static char my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__request[] = "request";
static char my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__srv__SpawnTurtle_Event__FIELDS[] = {
  {
    {my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__srv__SpawnTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__srv__SpawnTurtle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__srv__SpawnTurtle_Event__TYPE_NAME, 41, 41},
      {my_robot_interfaces__srv__SpawnTurtle_Event__FIELDS, 3, 3},
    },
    {my_robot_interfaces__srv__SpawnTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interfaces__srv__SpawnTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interfaces__srv__SpawnTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Request\n"
  "\n"
  "bool spawnaprey\n"
  "---\n"
  "#Response\n"
  "bool isthepreyalive\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__SpawnTurtle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__SpawnTurtle__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 61, 61},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__SpawnTurtle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__SpawnTurtle_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__SpawnTurtle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__SpawnTurtle_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__srv__SpawnTurtle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__srv__SpawnTurtle_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__SpawnTurtle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__SpawnTurtle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interfaces__srv__SpawnTurtle_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interfaces__srv__SpawnTurtle_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_robot_interfaces__srv__SpawnTurtle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__SpawnTurtle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__SpawnTurtle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__SpawnTurtle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__SpawnTurtle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__srv__SpawnTurtle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__srv__SpawnTurtle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interfaces__srv__SpawnTurtle_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interfaces__srv__SpawnTurtle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
