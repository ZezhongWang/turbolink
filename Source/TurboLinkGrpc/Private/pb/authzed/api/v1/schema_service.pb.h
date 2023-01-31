// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authzed/api/v1/schema_service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_authzed_2fapi_2fv1_2fschema_5fservice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_authzed_2fapi_2fv1_2fschema_5fservice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "pb/google/api/annotations.pb.h"
#include "pb/validate/validate.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_authzed_2fapi_2fv1_2fschema_5fservice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_authzed_2fapi_2fv1_2fschema_5fservice_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_authzed_2fapi_2fv1_2fschema_5fservice_2eproto;
namespace authzed {
namespace api {
namespace v1 {
class ReadSchemaRequest;
struct ReadSchemaRequestDefaultTypeInternal;
extern ReadSchemaRequestDefaultTypeInternal _ReadSchemaRequest_default_instance_;
class ReadSchemaResponse;
struct ReadSchemaResponseDefaultTypeInternal;
extern ReadSchemaResponseDefaultTypeInternal _ReadSchemaResponse_default_instance_;
class WriteSchemaRequest;
struct WriteSchemaRequestDefaultTypeInternal;
extern WriteSchemaRequestDefaultTypeInternal _WriteSchemaRequest_default_instance_;
class WriteSchemaResponse;
struct WriteSchemaResponseDefaultTypeInternal;
extern WriteSchemaResponseDefaultTypeInternal _WriteSchemaResponse_default_instance_;
}  // namespace v1
}  // namespace api
}  // namespace authzed
PROTOBUF_NAMESPACE_OPEN
template<> ::authzed::api::v1::ReadSchemaRequest* Arena::CreateMaybeMessage<::authzed::api::v1::ReadSchemaRequest>(Arena*);
template<> ::authzed::api::v1::ReadSchemaResponse* Arena::CreateMaybeMessage<::authzed::api::v1::ReadSchemaResponse>(Arena*);
template<> ::authzed::api::v1::WriteSchemaRequest* Arena::CreateMaybeMessage<::authzed::api::v1::WriteSchemaRequest>(Arena*);
template<> ::authzed::api::v1::WriteSchemaResponse* Arena::CreateMaybeMessage<::authzed::api::v1::WriteSchemaResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace authzed {
namespace api {
namespace v1 {

// ===================================================================

class ReadSchemaRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:authzed.api.v1.ReadSchemaRequest) */ {
 public:
  inline ReadSchemaRequest() : ReadSchemaRequest(nullptr) {}
  explicit PROTOBUF_CONSTEXPR ReadSchemaRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ReadSchemaRequest(const ReadSchemaRequest& from);
  ReadSchemaRequest(ReadSchemaRequest&& from) noexcept
    : ReadSchemaRequest() {
    *this = ::std::move(from);
  }

  inline ReadSchemaRequest& operator=(const ReadSchemaRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReadSchemaRequest& operator=(ReadSchemaRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ReadSchemaRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ReadSchemaRequest* internal_default_instance() {
    return reinterpret_cast<const ReadSchemaRequest*>(
               &_ReadSchemaRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ReadSchemaRequest& a, ReadSchemaRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ReadSchemaRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReadSchemaRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ReadSchemaRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ReadSchemaRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ReadSchemaRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ReadSchemaRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "authzed.api.v1.ReadSchemaRequest";
  }
  protected:
  explicit ReadSchemaRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:authzed.api.v1.ReadSchemaRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_authzed_2fapi_2fv1_2fschema_5fservice_2eproto;
};
// -------------------------------------------------------------------

class ReadSchemaResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:authzed.api.v1.ReadSchemaResponse) */ {
 public:
  inline ReadSchemaResponse() : ReadSchemaResponse(nullptr) {}
  ~ReadSchemaResponse() override;
  explicit PROTOBUF_CONSTEXPR ReadSchemaResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ReadSchemaResponse(const ReadSchemaResponse& from);
  ReadSchemaResponse(ReadSchemaResponse&& from) noexcept
    : ReadSchemaResponse() {
    *this = ::std::move(from);
  }

  inline ReadSchemaResponse& operator=(const ReadSchemaResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReadSchemaResponse& operator=(ReadSchemaResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ReadSchemaResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ReadSchemaResponse* internal_default_instance() {
    return reinterpret_cast<const ReadSchemaResponse*>(
               &_ReadSchemaResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ReadSchemaResponse& a, ReadSchemaResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ReadSchemaResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReadSchemaResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ReadSchemaResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ReadSchemaResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ReadSchemaResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ReadSchemaResponse& from) {
    ReadSchemaResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ReadSchemaResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "authzed.api.v1.ReadSchemaResponse";
  }
  protected:
  explicit ReadSchemaResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSchemaTextFieldNumber = 1,
  };
  // string schema_text = 1 [json_name = "schemaText"];
  void clear_schema_text();
  const std::string& schema_text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_schema_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_schema_text();
  PROTOBUF_NODISCARD std::string* release_schema_text();
  void set_allocated_schema_text(std::string* schema_text);
  private:
  const std::string& _internal_schema_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_schema_text(const std::string& value);
  std::string* _internal_mutable_schema_text();
  public:

  // @@protoc_insertion_point(class_scope:authzed.api.v1.ReadSchemaResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr schema_text_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_authzed_2fapi_2fv1_2fschema_5fservice_2eproto;
};
// -------------------------------------------------------------------

class WriteSchemaRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:authzed.api.v1.WriteSchemaRequest) */ {
 public:
  inline WriteSchemaRequest() : WriteSchemaRequest(nullptr) {}
  ~WriteSchemaRequest() override;
  explicit PROTOBUF_CONSTEXPR WriteSchemaRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WriteSchemaRequest(const WriteSchemaRequest& from);
  WriteSchemaRequest(WriteSchemaRequest&& from) noexcept
    : WriteSchemaRequest() {
    *this = ::std::move(from);
  }

  inline WriteSchemaRequest& operator=(const WriteSchemaRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline WriteSchemaRequest& operator=(WriteSchemaRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WriteSchemaRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const WriteSchemaRequest* internal_default_instance() {
    return reinterpret_cast<const WriteSchemaRequest*>(
               &_WriteSchemaRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(WriteSchemaRequest& a, WriteSchemaRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(WriteSchemaRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WriteSchemaRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WriteSchemaRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WriteSchemaRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WriteSchemaRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WriteSchemaRequest& from) {
    WriteSchemaRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WriteSchemaRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "authzed.api.v1.WriteSchemaRequest";
  }
  protected:
  explicit WriteSchemaRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSchemaFieldNumber = 1,
  };
  // string schema = 1 [json_name = "schema", (.validate.rules) = {
  void clear_schema();
  const std::string& schema() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_schema(ArgT0&& arg0, ArgT... args);
  std::string* mutable_schema();
  PROTOBUF_NODISCARD std::string* release_schema();
  void set_allocated_schema(std::string* schema);
  private:
  const std::string& _internal_schema() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_schema(const std::string& value);
  std::string* _internal_mutable_schema();
  public:

  // @@protoc_insertion_point(class_scope:authzed.api.v1.WriteSchemaRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr schema_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_authzed_2fapi_2fv1_2fschema_5fservice_2eproto;
};
// -------------------------------------------------------------------

class WriteSchemaResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:authzed.api.v1.WriteSchemaResponse) */ {
 public:
  inline WriteSchemaResponse() : WriteSchemaResponse(nullptr) {}
  explicit PROTOBUF_CONSTEXPR WriteSchemaResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WriteSchemaResponse(const WriteSchemaResponse& from);
  WriteSchemaResponse(WriteSchemaResponse&& from) noexcept
    : WriteSchemaResponse() {
    *this = ::std::move(from);
  }

  inline WriteSchemaResponse& operator=(const WriteSchemaResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline WriteSchemaResponse& operator=(WriteSchemaResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WriteSchemaResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const WriteSchemaResponse* internal_default_instance() {
    return reinterpret_cast<const WriteSchemaResponse*>(
               &_WriteSchemaResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(WriteSchemaResponse& a, WriteSchemaResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(WriteSchemaResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WriteSchemaResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WriteSchemaResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WriteSchemaResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const WriteSchemaResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const WriteSchemaResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "authzed.api.v1.WriteSchemaResponse";
  }
  protected:
  explicit WriteSchemaResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:authzed.api.v1.WriteSchemaResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_authzed_2fapi_2fv1_2fschema_5fservice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReadSchemaRequest

// -------------------------------------------------------------------

// ReadSchemaResponse

// string schema_text = 1 [json_name = "schemaText"];
inline void ReadSchemaResponse::clear_schema_text() {
  _impl_.schema_text_.ClearToEmpty();
}
inline const std::string& ReadSchemaResponse::schema_text() const {
  // @@protoc_insertion_point(field_get:authzed.api.v1.ReadSchemaResponse.schema_text)
  return _internal_schema_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ReadSchemaResponse::set_schema_text(ArgT0&& arg0, ArgT... args) {
 
 _impl_.schema_text_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:authzed.api.v1.ReadSchemaResponse.schema_text)
}
inline std::string* ReadSchemaResponse::mutable_schema_text() {
  std::string* _s = _internal_mutable_schema_text();
  // @@protoc_insertion_point(field_mutable:authzed.api.v1.ReadSchemaResponse.schema_text)
  return _s;
}
inline const std::string& ReadSchemaResponse::_internal_schema_text() const {
  return _impl_.schema_text_.Get();
}
inline void ReadSchemaResponse::_internal_set_schema_text(const std::string& value) {
  
  _impl_.schema_text_.Set(value, GetArenaForAllocation());
}
inline std::string* ReadSchemaResponse::_internal_mutable_schema_text() {
  
  return _impl_.schema_text_.Mutable(GetArenaForAllocation());
}
inline std::string* ReadSchemaResponse::release_schema_text() {
  // @@protoc_insertion_point(field_release:authzed.api.v1.ReadSchemaResponse.schema_text)
  return _impl_.schema_text_.Release();
}
inline void ReadSchemaResponse::set_allocated_schema_text(std::string* schema_text) {
  if (schema_text != nullptr) {
    
  } else {
    
  }
  _impl_.schema_text_.SetAllocated(schema_text, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.schema_text_.IsDefault()) {
    _impl_.schema_text_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:authzed.api.v1.ReadSchemaResponse.schema_text)
}

// -------------------------------------------------------------------

// WriteSchemaRequest

// string schema = 1 [json_name = "schema", (.validate.rules) = {
inline void WriteSchemaRequest::clear_schema() {
  _impl_.schema_.ClearToEmpty();
}
inline const std::string& WriteSchemaRequest::schema() const {
  // @@protoc_insertion_point(field_get:authzed.api.v1.WriteSchemaRequest.schema)
  return _internal_schema();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void WriteSchemaRequest::set_schema(ArgT0&& arg0, ArgT... args) {
 
 _impl_.schema_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:authzed.api.v1.WriteSchemaRequest.schema)
}
inline std::string* WriteSchemaRequest::mutable_schema() {
  std::string* _s = _internal_mutable_schema();
  // @@protoc_insertion_point(field_mutable:authzed.api.v1.WriteSchemaRequest.schema)
  return _s;
}
inline const std::string& WriteSchemaRequest::_internal_schema() const {
  return _impl_.schema_.Get();
}
inline void WriteSchemaRequest::_internal_set_schema(const std::string& value) {
  
  _impl_.schema_.Set(value, GetArenaForAllocation());
}
inline std::string* WriteSchemaRequest::_internal_mutable_schema() {
  
  return _impl_.schema_.Mutable(GetArenaForAllocation());
}
inline std::string* WriteSchemaRequest::release_schema() {
  // @@protoc_insertion_point(field_release:authzed.api.v1.WriteSchemaRequest.schema)
  return _impl_.schema_.Release();
}
inline void WriteSchemaRequest::set_allocated_schema(std::string* schema) {
  if (schema != nullptr) {
    
  } else {
    
  }
  _impl_.schema_.SetAllocated(schema, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.schema_.IsDefault()) {
    _impl_.schema_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:authzed.api.v1.WriteSchemaRequest.schema)
}

// -------------------------------------------------------------------

// WriteSchemaResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace api
}  // namespace authzed

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_authzed_2fapi_2fv1_2fschema_5fservice_2eproto