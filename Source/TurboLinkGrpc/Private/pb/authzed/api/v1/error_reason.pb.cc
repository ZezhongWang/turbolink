// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authzed/api/v1/error_reason.proto

#include "pb/authzed/api/v1/error_reason.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace authzed {
namespace api {
namespace v1 {
}  // namespace v1
}  // namespace api
}  // namespace authzed
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_authzed_2fapi_2fv1_2ferror_5freason_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_authzed_2fapi_2fv1_2ferror_5freason_2eproto = nullptr;
const uint32_t TableStruct_authzed_2fapi_2fv1_2ferror_5freason_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_authzed_2fapi_2fv1_2ferror_5freason_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!authzed/api/v1/error_reason.proto\022\016aut"
  "hzed.api.v1*\201\005\n\013ErrorReason\022\034\n\030ERROR_REA"
  "SON_UNSPECIFIED\020\000\022#\n\037ERROR_REASON_SCHEMA"
  "_PARSE_ERROR\020\001\022\"\n\036ERROR_REASON_SCHEMA_TY"
  "PE_ERROR\020\002\022#\n\037ERROR_REASON_UNKNOWN_DEFIN"
  "ITION\020\003\022/\n+ERROR_REASON_UNKNOWN_RELATION"
  "_OR_PERMISSION\020\004\022,\n(ERROR_REASON_TOO_MAN"
  "Y_UPDATES_IN_REQUEST\020\005\0222\n.ERROR_REASON_T"
  "OO_MANY_PRECONDITIONS_IN_REQUEST\020\006\0225\n1ER"
  "ROR_REASON_WRITE_OR_DELETE_PRECONDITION_"
  "FAILURE\020\007\022\"\n\036ERROR_REASON_SERVICE_READ_O"
  "NLY\020\010\022\037\n\033ERROR_REASON_UNKNOWN_CAVEAT\020\t\022%"
  "\n!ERROR_REASON_INVALID_SUBJECT_TYPE\020\n\022,\n"
  "(ERROR_REASON_CAVEAT_PARAMETER_TYPE_ERRO"
  "R\020\013\022-\n)ERROR_REASON_UPDATES_ON_SAME_RELA"
  "TIONSHIP\020\014\022)\n%ERROR_REASON_CANNOT_UPDATE"
  "_PERMISSION\020\r\022(\n$ERROR_REASON_CAVEAT_EVA"
  "LUATION_ERROR\020\016BH\n\022com.authzed.api.v1Z2g"
  "ithub.com/authzed/authzed-go/proto/authz"
  "ed/api/v1b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto = {
    false, false, 777, descriptor_table_protodef_authzed_2fapi_2fv1_2ferror_5freason_2eproto,
    "authzed/api/v1/error_reason.proto",
    &descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_authzed_2fapi_2fv1_2ferror_5freason_2eproto::offsets,
    nullptr, file_level_enum_descriptors_authzed_2fapi_2fv1_2ferror_5freason_2eproto,
    file_level_service_descriptors_authzed_2fapi_2fv1_2ferror_5freason_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto_getter() {
  return &descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_authzed_2fapi_2fv1_2ferror_5freason_2eproto(&descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto);
namespace authzed {
namespace api {
namespace v1 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorReason_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_authzed_2fapi_2fv1_2ferror_5freason_2eproto);
  return file_level_enum_descriptors_authzed_2fapi_2fv1_2ferror_5freason_2eproto[0];
}
bool ErrorReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace api
}  // namespace authzed
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
