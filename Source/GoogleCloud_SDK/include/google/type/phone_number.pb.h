// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/phone_number.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fphone_5fnumber_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fphone_5fnumber_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2fphone_5fnumber_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2fphone_5fnumber_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fphone_5fnumber_2eproto;
namespace google {
namespace type {
class PhoneNumber;
class PhoneNumberDefaultTypeInternal;
extern PhoneNumberDefaultTypeInternal _PhoneNumber_default_instance_;
class PhoneNumber_ShortCode;
class PhoneNumber_ShortCodeDefaultTypeInternal;
extern PhoneNumber_ShortCodeDefaultTypeInternal _PhoneNumber_ShortCode_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::PhoneNumber* Arena::CreateMaybeMessage<::google::type::PhoneNumber>(Arena*);
template<> ::google::type::PhoneNumber_ShortCode* Arena::CreateMaybeMessage<::google::type::PhoneNumber_ShortCode>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class PhoneNumber_ShortCode PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.PhoneNumber.ShortCode) */ {
 public:
  inline PhoneNumber_ShortCode() : PhoneNumber_ShortCode(nullptr) {}
  virtual ~PhoneNumber_ShortCode();

  PhoneNumber_ShortCode(const PhoneNumber_ShortCode& from);
  PhoneNumber_ShortCode(PhoneNumber_ShortCode&& from) noexcept
    : PhoneNumber_ShortCode() {
    *this = ::std::move(from);
  }

  inline PhoneNumber_ShortCode& operator=(const PhoneNumber_ShortCode& from) {
    CopyFrom(from);
    return *this;
  }
  inline PhoneNumber_ShortCode& operator=(PhoneNumber_ShortCode&& from) noexcept {
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
  static const PhoneNumber_ShortCode& default_instance();

  static inline const PhoneNumber_ShortCode* internal_default_instance() {
    return reinterpret_cast<const PhoneNumber_ShortCode*>(
               &_PhoneNumber_ShortCode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PhoneNumber_ShortCode& a, PhoneNumber_ShortCode& b) {
    a.Swap(&b);
  }
  inline void Swap(PhoneNumber_ShortCode* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PhoneNumber_ShortCode* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PhoneNumber_ShortCode* New() const final {
    return CreateMaybeMessage<PhoneNumber_ShortCode>(nullptr);
  }

  PhoneNumber_ShortCode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PhoneNumber_ShortCode>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PhoneNumber_ShortCode& from);
  void MergeFrom(const PhoneNumber_ShortCode& from);
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
  void InternalSwap(PhoneNumber_ShortCode* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.PhoneNumber.ShortCode";
  }
  protected:
  explicit PhoneNumber_ShortCode(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2ftype_2fphone_5fnumber_2eproto);
    return ::descriptor_table_google_2ftype_2fphone_5fnumber_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRegionCodeFieldNumber = 1,
    kNumberFieldNumber = 2,
  };
  // string region_code = 1;
  void clear_region_code();
  const std::string& region_code() const;
  void set_region_code(const std::string& value);
  void set_region_code(std::string&& value);
  void set_region_code(const char* value);
  void set_region_code(const char* value, size_t size);
  std::string* mutable_region_code();
  std::string* release_region_code();
  void set_allocated_region_code(std::string* region_code);
  private:
  const std::string& _internal_region_code() const;
  void _internal_set_region_code(const std::string& value);
  std::string* _internal_mutable_region_code();
  public:

  // string number = 2;
  void clear_number();
  const std::string& number() const;
  void set_number(const std::string& value);
  void set_number(std::string&& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  std::string* mutable_number();
  std::string* release_number();
  void set_allocated_number(std::string* number);
  private:
  const std::string& _internal_number() const;
  void _internal_set_number(const std::string& value);
  std::string* _internal_mutable_number();
  public:

  // @@protoc_insertion_point(class_scope:google.type.PhoneNumber.ShortCode)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr region_code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2ftype_2fphone_5fnumber_2eproto;
};
// -------------------------------------------------------------------

class PhoneNumber PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.PhoneNumber) */ {
 public:
  inline PhoneNumber() : PhoneNumber(nullptr) {}
  virtual ~PhoneNumber();

  PhoneNumber(const PhoneNumber& from);
  PhoneNumber(PhoneNumber&& from) noexcept
    : PhoneNumber() {
    *this = ::std::move(from);
  }

  inline PhoneNumber& operator=(const PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  inline PhoneNumber& operator=(PhoneNumber&& from) noexcept {
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
  static const PhoneNumber& default_instance();

  enum KindCase {
    kE164Number = 1,
    kShortCode = 2,
    KIND_NOT_SET = 0,
  };

  static inline const PhoneNumber* internal_default_instance() {
    return reinterpret_cast<const PhoneNumber*>(
               &_PhoneNumber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PhoneNumber& a, PhoneNumber& b) {
    a.Swap(&b);
  }
  inline void Swap(PhoneNumber* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PhoneNumber* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PhoneNumber* New() const final {
    return CreateMaybeMessage<PhoneNumber>(nullptr);
  }

  PhoneNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PhoneNumber>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PhoneNumber& from);
  void MergeFrom(const PhoneNumber& from);
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
  void InternalSwap(PhoneNumber* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.PhoneNumber";
  }
  protected:
  explicit PhoneNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2ftype_2fphone_5fnumber_2eproto);
    return ::descriptor_table_google_2ftype_2fphone_5fnumber_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef PhoneNumber_ShortCode ShortCode;

  // accessors -------------------------------------------------------

  enum : int {
    kExtensionFieldNumber = 3,
    kE164NumberFieldNumber = 1,
    kShortCodeFieldNumber = 2,
  };
  // string extension = 3;
  void clear_extension();
  const std::string& extension() const;
  void set_extension(const std::string& value);
  void set_extension(std::string&& value);
  void set_extension(const char* value);
  void set_extension(const char* value, size_t size);
  std::string* mutable_extension();
  std::string* release_extension();
  void set_allocated_extension(std::string* extension);
  private:
  const std::string& _internal_extension() const;
  void _internal_set_extension(const std::string& value);
  std::string* _internal_mutable_extension();
  public:

  // string e164_number = 1;
  private:
  bool _internal_has_e164_number() const;
  public:
  void clear_e164_number();
  const std::string& e164_number() const;
  void set_e164_number(const std::string& value);
  void set_e164_number(std::string&& value);
  void set_e164_number(const char* value);
  void set_e164_number(const char* value, size_t size);
  std::string* mutable_e164_number();
  std::string* release_e164_number();
  void set_allocated_e164_number(std::string* e164_number);
  private:
  const std::string& _internal_e164_number() const;
  void _internal_set_e164_number(const std::string& value);
  std::string* _internal_mutable_e164_number();
  public:

  // .google.type.PhoneNumber.ShortCode short_code = 2;
  bool has_short_code() const;
  private:
  bool _internal_has_short_code() const;
  public:
  void clear_short_code();
  const ::google::type::PhoneNumber_ShortCode& short_code() const;
  ::google::type::PhoneNumber_ShortCode* release_short_code();
  ::google::type::PhoneNumber_ShortCode* mutable_short_code();
  void set_allocated_short_code(::google::type::PhoneNumber_ShortCode* short_code);
  private:
  const ::google::type::PhoneNumber_ShortCode& _internal_short_code() const;
  ::google::type::PhoneNumber_ShortCode* _internal_mutable_short_code();
  public:
  void unsafe_arena_set_allocated_short_code(
      ::google::type::PhoneNumber_ShortCode* short_code);
  ::google::type::PhoneNumber_ShortCode* unsafe_arena_release_short_code();

  void clear_kind();
  KindCase kind_case() const;
  // @@protoc_insertion_point(class_scope:google.type.PhoneNumber)
 private:
  class _Internal;
  void set_has_e164_number();
  void set_has_short_code();

  inline bool has_kind() const;
  inline void clear_has_kind();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extension_;
  union KindUnion {
    KindUnion() {}
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr e164_number_;
    ::google::type::PhoneNumber_ShortCode* short_code_;
  } kind_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2ftype_2fphone_5fnumber_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PhoneNumber_ShortCode

// string region_code = 1;
inline void PhoneNumber_ShortCode::clear_region_code() {
  region_code_.ClearToEmpty();
}
inline const std::string& PhoneNumber_ShortCode::region_code() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.ShortCode.region_code)
  return _internal_region_code();
}
inline void PhoneNumber_ShortCode::set_region_code(const std::string& value) {
  _internal_set_region_code(value);
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.ShortCode.region_code)
}
inline std::string* PhoneNumber_ShortCode::mutable_region_code() {
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.ShortCode.region_code)
  return _internal_mutable_region_code();
}
inline const std::string& PhoneNumber_ShortCode::_internal_region_code() const {
  return region_code_.Get();
}
inline void PhoneNumber_ShortCode::_internal_set_region_code(const std::string& value) {
  
  region_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PhoneNumber_ShortCode::set_region_code(std::string&& value) {
  
  region_code_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.type.PhoneNumber.ShortCode.region_code)
}
inline void PhoneNumber_ShortCode::set_region_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  region_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.type.PhoneNumber.ShortCode.region_code)
}
inline void PhoneNumber_ShortCode::set_region_code(const char* value,
    size_t size) {
  
  region_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.type.PhoneNumber.ShortCode.region_code)
}
inline std::string* PhoneNumber_ShortCode::_internal_mutable_region_code() {
  
  return region_code_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PhoneNumber_ShortCode::release_region_code() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.ShortCode.region_code)
  return region_code_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PhoneNumber_ShortCode::set_allocated_region_code(std::string* region_code) {
  if (region_code != nullptr) {
    
  } else {
    
  }
  region_code_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), region_code,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.ShortCode.region_code)
}

// string number = 2;
inline void PhoneNumber_ShortCode::clear_number() {
  number_.ClearToEmpty();
}
inline const std::string& PhoneNumber_ShortCode::number() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.ShortCode.number)
  return _internal_number();
}
inline void PhoneNumber_ShortCode::set_number(const std::string& value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.ShortCode.number)
}
inline std::string* PhoneNumber_ShortCode::mutable_number() {
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.ShortCode.number)
  return _internal_mutable_number();
}
inline const std::string& PhoneNumber_ShortCode::_internal_number() const {
  return number_.Get();
}
inline void PhoneNumber_ShortCode::_internal_set_number(const std::string& value) {
  
  number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PhoneNumber_ShortCode::set_number(std::string&& value) {
  
  number_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.type.PhoneNumber.ShortCode.number)
}
inline void PhoneNumber_ShortCode::set_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.type.PhoneNumber.ShortCode.number)
}
inline void PhoneNumber_ShortCode::set_number(const char* value,
    size_t size) {
  
  number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.type.PhoneNumber.ShortCode.number)
}
inline std::string* PhoneNumber_ShortCode::_internal_mutable_number() {
  
  return number_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PhoneNumber_ShortCode::release_number() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.ShortCode.number)
  return number_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PhoneNumber_ShortCode::set_allocated_number(std::string* number) {
  if (number != nullptr) {
    
  } else {
    
  }
  number_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), number,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.ShortCode.number)
}

// -------------------------------------------------------------------

// PhoneNumber

// string e164_number = 1;
inline bool PhoneNumber::_internal_has_e164_number() const {
  return kind_case() == kE164Number;
}
inline void PhoneNumber::set_has_e164_number() {
  _oneof_case_[0] = kE164Number;
}
inline void PhoneNumber::clear_e164_number() {
  if (_internal_has_e164_number()) {
    kind_.e164_number_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
    clear_has_kind();
  }
}
inline const std::string& PhoneNumber::e164_number() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.e164_number)
  return _internal_e164_number();
}
inline void PhoneNumber::set_e164_number(const std::string& value) {
  _internal_set_e164_number(value);
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.e164_number)
}
inline std::string* PhoneNumber::mutable_e164_number() {
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.e164_number)
  return _internal_mutable_e164_number();
}
inline const std::string& PhoneNumber::_internal_e164_number() const {
  if (_internal_has_e164_number()) {
    return kind_.e164_number_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void PhoneNumber::_internal_set_e164_number(const std::string& value) {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.e164_number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PhoneNumber::set_e164_number(std::string&& value) {
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.e164_number)
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.e164_number_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.type.PhoneNumber.e164_number)
}
inline void PhoneNumber::set_e164_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.e164_number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{},
      ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.type.PhoneNumber.e164_number)
}
inline void PhoneNumber::set_e164_number(const char* value,
                             size_t size) {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.e164_number_.Set(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.type.PhoneNumber.e164_number)
}
inline std::string* PhoneNumber::_internal_mutable_e164_number() {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return kind_.e164_number_.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PhoneNumber::release_e164_number() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.e164_number)
  if (_internal_has_e164_number()) {
    clear_has_kind();
    return kind_.e164_number_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  } else {
    return nullptr;
  }
}
inline void PhoneNumber::set_allocated_e164_number(std::string* e164_number) {
  if (has_kind()) {
    clear_kind();
  }
  if (e164_number != nullptr) {
    set_has_e164_number();
    kind_.e164_number_.UnsafeSetDefault(e164_number);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
    if (arena != nullptr) {
      arena->Own(e164_number);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.e164_number)
}

// .google.type.PhoneNumber.ShortCode short_code = 2;
inline bool PhoneNumber::_internal_has_short_code() const {
  return kind_case() == kShortCode;
}
inline bool PhoneNumber::has_short_code() const {
  return _internal_has_short_code();
}
inline void PhoneNumber::set_has_short_code() {
  _oneof_case_[0] = kShortCode;
}
inline void PhoneNumber::clear_short_code() {
  if (_internal_has_short_code()) {
    if (GetArena() == nullptr) {
      delete kind_.short_code_;
    }
    clear_has_kind();
  }
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::release_short_code() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.short_code)
  if (_internal_has_short_code()) {
    clear_has_kind();
      ::google::type::PhoneNumber_ShortCode* temp = kind_.short_code_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    kind_.short_code_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::type::PhoneNumber_ShortCode& PhoneNumber::_internal_short_code() const {
  return _internal_has_short_code()
      ? *kind_.short_code_
      : reinterpret_cast< ::google::type::PhoneNumber_ShortCode&>(::google::type::_PhoneNumber_ShortCode_default_instance_);
}
inline const ::google::type::PhoneNumber_ShortCode& PhoneNumber::short_code() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.short_code)
  return _internal_short_code();
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::unsafe_arena_release_short_code() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.type.PhoneNumber.short_code)
  if (_internal_has_short_code()) {
    clear_has_kind();
    ::google::type::PhoneNumber_ShortCode* temp = kind_.short_code_;
    kind_.short_code_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PhoneNumber::unsafe_arena_set_allocated_short_code(::google::type::PhoneNumber_ShortCode* short_code) {
  clear_kind();
  if (short_code) {
    set_has_short_code();
    kind_.short_code_ = short_code;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.type.PhoneNumber.short_code)
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::_internal_mutable_short_code() {
  if (!_internal_has_short_code()) {
    clear_kind();
    set_has_short_code();
    kind_.short_code_ = CreateMaybeMessage< ::google::type::PhoneNumber_ShortCode >(GetArena());
  }
  return kind_.short_code_;
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::mutable_short_code() {
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.short_code)
  return _internal_mutable_short_code();
}

// string extension = 3;
inline void PhoneNumber::clear_extension() {
  extension_.ClearToEmpty();
}
inline const std::string& PhoneNumber::extension() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.extension)
  return _internal_extension();
}
inline void PhoneNumber::set_extension(const std::string& value) {
  _internal_set_extension(value);
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.extension)
}
inline std::string* PhoneNumber::mutable_extension() {
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.extension)
  return _internal_mutable_extension();
}
inline const std::string& PhoneNumber::_internal_extension() const {
  return extension_.Get();
}
inline void PhoneNumber::_internal_set_extension(const std::string& value) {
  
  extension_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PhoneNumber::set_extension(std::string&& value) {
  
  extension_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.type.PhoneNumber.extension)
}
inline void PhoneNumber::set_extension(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  extension_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.type.PhoneNumber.extension)
}
inline void PhoneNumber::set_extension(const char* value,
    size_t size) {
  
  extension_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.type.PhoneNumber.extension)
}
inline std::string* PhoneNumber::_internal_mutable_extension() {
  
  return extension_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PhoneNumber::release_extension() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.extension)
  return extension_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PhoneNumber::set_allocated_extension(std::string* extension) {
  if (extension != nullptr) {
    
  } else {
    
  }
  extension_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), extension,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.extension)
}

inline bool PhoneNumber::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void PhoneNumber::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
inline PhoneNumber::KindCase PhoneNumber::kind_case() const {
  return PhoneNumber::KindCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fphone_5fnumber_2eproto
