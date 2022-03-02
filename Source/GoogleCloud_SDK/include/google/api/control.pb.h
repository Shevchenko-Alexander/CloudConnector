// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/control.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontrol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontrol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fcontrol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fcontrol_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fcontrol_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_google_2fapi_2fcontrol_2eproto_metadata_getter(int index);
namespace google {
namespace api {
class Control;
struct ControlDefaultTypeInternal;
extern ControlDefaultTypeInternal _Control_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Control* Arena::CreateMaybeMessage<::google::api::Control>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Control PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Control) */ {
 public:
  inline Control() : Control(nullptr) {}
  virtual ~Control();
  explicit constexpr Control(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Control(const Control& from);
  Control(Control&& from) noexcept
    : Control() {
    *this = ::std::move(from);
  }

  inline Control& operator=(const Control& from) {
    CopyFrom(from);
    return *this;
  }
  inline Control& operator=(Control&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Control& default_instance() {
    return *internal_default_instance();
  }
  static inline const Control* internal_default_instance() {
    return reinterpret_cast<const Control*>(
               &_Control_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Control& a, Control& b) {
    a.Swap(&b);
  }
  inline void Swap(Control* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Control* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Control* New() const final {
    return CreateMaybeMessage<Control>(nullptr);
  }

  Control* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Control>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Control& from);
  void MergeFrom(const Control& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Control* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Control";
  }
  protected:
  explicit Control(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_google_2fapi_2fcontrol_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnvironmentFieldNumber = 1,
  };
  // string environment = 1;
  void clear_environment();
  const std::string& environment() const;
  void set_environment(const std::string& value);
  void set_environment(std::string&& value);
  void set_environment(const char* value);
  void set_environment(const char* value, size_t size);
  std::string* mutable_environment();
  std::string* release_environment();
  void set_allocated_environment(std::string* environment);
  private:
  const std::string& _internal_environment() const;
  void _internal_set_environment(const std::string& value);
  std::string* _internal_mutable_environment();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Control)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr environment_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fcontrol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Control

// string environment = 1;
inline void Control::clear_environment() {
  environment_.ClearToEmpty();
}
inline const std::string& Control::environment() const {
  // @@protoc_insertion_point(field_get:google.api.Control.environment)
  return _internal_environment();
}
inline void Control::set_environment(const std::string& value) {
  _internal_set_environment(value);
  // @@protoc_insertion_point(field_set:google.api.Control.environment)
}
inline std::string* Control::mutable_environment() {
  // @@protoc_insertion_point(field_mutable:google.api.Control.environment)
  return _internal_mutable_environment();
}
inline const std::string& Control::_internal_environment() const {
  return environment_.Get();
}
inline void Control::_internal_set_environment(const std::string& value) {
  
  environment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Control::set_environment(std::string&& value) {
  
  environment_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.api.Control.environment)
}
inline void Control::set_environment(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  environment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.api.Control.environment)
}
inline void Control::set_environment(const char* value,
    size_t size) {
  
  environment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.api.Control.environment)
}
inline std::string* Control::_internal_mutable_environment() {
  
  return environment_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Control::release_environment() {
  // @@protoc_insertion_point(field_release:google.api.Control.environment)
  return environment_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Control::set_allocated_environment(std::string* environment) {
  if (environment != nullptr) {
    
  } else {
    
  }
  environment_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), environment,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.api.Control.environment)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fcontrol_2eproto