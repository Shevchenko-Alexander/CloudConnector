// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/phone_number.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fphone_5fnumber_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fphone_5fnumber_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
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
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fphone_5fnumber_2eproto;
namespace google {
namespace type {
class PhoneNumber;
struct PhoneNumberDefaultTypeInternal;
extern PhoneNumberDefaultTypeInternal _PhoneNumber_default_instance_;
class PhoneNumber_ShortCode;
struct PhoneNumber_ShortCodeDefaultTypeInternal;
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

class PhoneNumber_ShortCode final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.PhoneNumber.ShortCode) */ {
 public:
  inline PhoneNumber_ShortCode() : PhoneNumber_ShortCode(nullptr) {}
  ~PhoneNumber_ShortCode() override;
  explicit PROTOBUF_CONSTEXPR PhoneNumber_ShortCode(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  static const PhoneNumber_ShortCode& default_instance() {
    return *internal_default_instance();
  }
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
  void UnsafeArenaSwap(PhoneNumber_ShortCode* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PhoneNumber_ShortCode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PhoneNumber_ShortCode>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PhoneNumber_ShortCode& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PhoneNumber_ShortCode& from) {
    PhoneNumber_ShortCode::MergeImpl(*this, from);
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
  void InternalSwap(PhoneNumber_ShortCode* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.PhoneNumber.ShortCode";
  }
  protected:
  explicit PhoneNumber_ShortCode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRegionCodeFieldNumber = 1,
    kNumberFieldNumber = 2,
  };
  // string region_code = 1;
  void clear_region_code();
  const std::string& region_code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_region_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_region_code();
  PROTOBUF_NODISCARD std::string* release_region_code();
  void set_allocated_region_code(std::string* region_code);
  private:
  const std::string& _internal_region_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_region_code(const std::string& value);
  std::string* _internal_mutable_region_code();
  public:

  // string number = 2;
  void clear_number();
  const std::string& number() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_number(ArgT0&& arg0, ArgT... args);
  std::string* mutable_number();
  PROTOBUF_NODISCARD std::string* release_number();
  void set_allocated_number(std::string* number);
  private:
  const std::string& _internal_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_number(const std::string& value);
  std::string* _internal_mutable_number();
  public:

  // @@protoc_insertion_point(class_scope:google.type.PhoneNumber.ShortCode)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr region_code_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2ftype_2fphone_5fnumber_2eproto;
};
// -------------------------------------------------------------------

class PhoneNumber final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.PhoneNumber) */ {
 public:
  inline PhoneNumber() : PhoneNumber(nullptr) {}
  ~PhoneNumber() override;
  explicit PROTOBUF_CONSTEXPR PhoneNumber(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  static const PhoneNumber& default_instance() {
    return *internal_default_instance();
  }
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
  void UnsafeArenaSwap(PhoneNumber* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PhoneNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PhoneNumber>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PhoneNumber& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PhoneNumber& from) {
    PhoneNumber::MergeImpl(*this, from);
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
  void InternalSwap(PhoneNumber* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.PhoneNumber";
  }
  protected:
  explicit PhoneNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

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
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_extension(ArgT0&& arg0, ArgT... args);
  std::string* mutable_extension();
  PROTOBUF_NODISCARD std::string* release_extension();
  void set_allocated_extension(std::string* extension);
  private:
  const std::string& _internal_extension() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_extension(const std::string& value);
  std::string* _internal_mutable_extension();
  public:

  // string e164_number = 1;
  bool has_e164_number() const;
  private:
  bool _internal_has_e164_number() const;
  public:
  void clear_e164_number();
  const std::string& e164_number() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_e164_number(ArgT0&& arg0, ArgT... args);
  std::string* mutable_e164_number();
  PROTOBUF_NODISCARD std::string* release_e164_number();
  void set_allocated_e164_number(std::string* e164_number);
  private:
  const std::string& _internal_e164_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_e164_number(const std::string& value);
  std::string* _internal_mutable_e164_number();
  public:

  // .google.type.PhoneNumber.ShortCode short_code = 2;
  bool has_short_code() const;
  private:
  bool _internal_has_short_code() const;
  public:
  void clear_short_code();
  const ::google::type::PhoneNumber_ShortCode& short_code() const;
  PROTOBUF_NODISCARD ::google::type::PhoneNumber_ShortCode* release_short_code();
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
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extension_;
    union KindUnion {
      constexpr KindUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr e164_number_;
      ::google::type::PhoneNumber_ShortCode* short_code_;
    } kind_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
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
  _impl_.region_code_.ClearToEmpty();
}
inline const std::string& PhoneNumber_ShortCode::region_code() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.ShortCode.region_code)
  return _internal_region_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PhoneNumber_ShortCode::set_region_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.region_code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.ShortCode.region_code)
}
inline std::string* PhoneNumber_ShortCode::mutable_region_code() {
  std::string* _s = _internal_mutable_region_code();
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.ShortCode.region_code)
  return _s;
}
inline const std::string& PhoneNumber_ShortCode::_internal_region_code() const {
  return _impl_.region_code_.Get();
}
inline void PhoneNumber_ShortCode::_internal_set_region_code(const std::string& value) {
  
  _impl_.region_code_.Set(value, GetArenaForAllocation());
}
inline std::string* PhoneNumber_ShortCode::_internal_mutable_region_code() {
  
  return _impl_.region_code_.Mutable(GetArenaForAllocation());
}
inline std::string* PhoneNumber_ShortCode::release_region_code() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.ShortCode.region_code)
  return _impl_.region_code_.Release();
}
inline void PhoneNumber_ShortCode::set_allocated_region_code(std::string* region_code) {
  if (region_code != nullptr) {
    
  } else {
    
  }
  _impl_.region_code_.SetAllocated(region_code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.region_code_.IsDefault()) {
    _impl_.region_code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.ShortCode.region_code)
}

// string number = 2;
inline void PhoneNumber_ShortCode::clear_number() {
  _impl_.number_.ClearToEmpty();
}
inline const std::string& PhoneNumber_ShortCode::number() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.ShortCode.number)
  return _internal_number();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PhoneNumber_ShortCode::set_number(ArgT0&& arg0, ArgT... args) {
 
 _impl_.number_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.ShortCode.number)
}
inline std::string* PhoneNumber_ShortCode::mutable_number() {
  std::string* _s = _internal_mutable_number();
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.ShortCode.number)
  return _s;
}
inline const std::string& PhoneNumber_ShortCode::_internal_number() const {
  return _impl_.number_.Get();
}
inline void PhoneNumber_ShortCode::_internal_set_number(const std::string& value) {
  
  _impl_.number_.Set(value, GetArenaForAllocation());
}
inline std::string* PhoneNumber_ShortCode::_internal_mutable_number() {
  
  return _impl_.number_.Mutable(GetArenaForAllocation());
}
inline std::string* PhoneNumber_ShortCode::release_number() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.ShortCode.number)
  return _impl_.number_.Release();
}
inline void PhoneNumber_ShortCode::set_allocated_number(std::string* number) {
  if (number != nullptr) {
    
  } else {
    
  }
  _impl_.number_.SetAllocated(number, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.number_.IsDefault()) {
    _impl_.number_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.ShortCode.number)
}

// -------------------------------------------------------------------

// PhoneNumber

// string e164_number = 1;
inline bool PhoneNumber::_internal_has_e164_number() const {
  return kind_case() == kE164Number;
}
inline bool PhoneNumber::has_e164_number() const {
  return _internal_has_e164_number();
}
inline void PhoneNumber::set_has_e164_number() {
  _impl_._oneof_case_[0] = kE164Number;
}
inline void PhoneNumber::clear_e164_number() {
  if (_internal_has_e164_number()) {
    _impl_.kind_.e164_number_.Destroy();
    clear_has_kind();
  }
}
inline const std::string& PhoneNumber::e164_number() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.e164_number)
  return _internal_e164_number();
}
template <typename ArgT0, typename... ArgT>
inline void PhoneNumber::set_e164_number(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    _impl_.kind_.e164_number_.InitDefault();
  }
  _impl_.kind_.e164_number_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.e164_number)
}
inline std::string* PhoneNumber::mutable_e164_number() {
  std::string* _s = _internal_mutable_e164_number();
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.e164_number)
  return _s;
}
inline const std::string& PhoneNumber::_internal_e164_number() const {
  if (_internal_has_e164_number()) {
    return _impl_.kind_.e164_number_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void PhoneNumber::_internal_set_e164_number(const std::string& value) {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    _impl_.kind_.e164_number_.InitDefault();
  }
  _impl_.kind_.e164_number_.Set(value, GetArenaForAllocation());
}
inline std::string* PhoneNumber::_internal_mutable_e164_number() {
  if (!_internal_has_e164_number()) {
    clear_kind();
    set_has_e164_number();
    _impl_.kind_.e164_number_.InitDefault();
  }
  return _impl_.kind_.e164_number_.Mutable(      GetArenaForAllocation());
}
inline std::string* PhoneNumber::release_e164_number() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.e164_number)
  if (_internal_has_e164_number()) {
    clear_has_kind();
    return _impl_.kind_.e164_number_.Release();
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
    _impl_.kind_.e164_number_.InitAllocated(e164_number, GetArenaForAllocation());
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
  _impl_._oneof_case_[0] = kShortCode;
}
inline void PhoneNumber::clear_short_code() {
  if (_internal_has_short_code()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.kind_.short_code_;
    }
    clear_has_kind();
  }
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::release_short_code() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.short_code)
  if (_internal_has_short_code()) {
    clear_has_kind();
    ::google::type::PhoneNumber_ShortCode* temp = _impl_.kind_.short_code_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.kind_.short_code_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::type::PhoneNumber_ShortCode& PhoneNumber::_internal_short_code() const {
  return _internal_has_short_code()
      ? *_impl_.kind_.short_code_
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
    ::google::type::PhoneNumber_ShortCode* temp = _impl_.kind_.short_code_;
    _impl_.kind_.short_code_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PhoneNumber::unsafe_arena_set_allocated_short_code(::google::type::PhoneNumber_ShortCode* short_code) {
  clear_kind();
  if (short_code) {
    set_has_short_code();
    _impl_.kind_.short_code_ = short_code;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.type.PhoneNumber.short_code)
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::_internal_mutable_short_code() {
  if (!_internal_has_short_code()) {
    clear_kind();
    set_has_short_code();
    _impl_.kind_.short_code_ = CreateMaybeMessage< ::google::type::PhoneNumber_ShortCode >(GetArenaForAllocation());
  }
  return _impl_.kind_.short_code_;
}
inline ::google::type::PhoneNumber_ShortCode* PhoneNumber::mutable_short_code() {
  ::google::type::PhoneNumber_ShortCode* _msg = _internal_mutable_short_code();
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.short_code)
  return _msg;
}

// string extension = 3;
inline void PhoneNumber::clear_extension() {
  _impl_.extension_.ClearToEmpty();
}
inline const std::string& PhoneNumber::extension() const {
  // @@protoc_insertion_point(field_get:google.type.PhoneNumber.extension)
  return _internal_extension();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PhoneNumber::set_extension(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extension_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.type.PhoneNumber.extension)
}
inline std::string* PhoneNumber::mutable_extension() {
  std::string* _s = _internal_mutable_extension();
  // @@protoc_insertion_point(field_mutable:google.type.PhoneNumber.extension)
  return _s;
}
inline const std::string& PhoneNumber::_internal_extension() const {
  return _impl_.extension_.Get();
}
inline void PhoneNumber::_internal_set_extension(const std::string& value) {
  
  _impl_.extension_.Set(value, GetArenaForAllocation());
}
inline std::string* PhoneNumber::_internal_mutable_extension() {
  
  return _impl_.extension_.Mutable(GetArenaForAllocation());
}
inline std::string* PhoneNumber::release_extension() {
  // @@protoc_insertion_point(field_release:google.type.PhoneNumber.extension)
  return _impl_.extension_.Release();
}
inline void PhoneNumber::set_allocated_extension(std::string* extension) {
  if (extension != nullptr) {
    
  } else {
    
  }
  _impl_.extension_.SetAllocated(extension, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extension_.IsDefault()) {
    _impl_.extension_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.type.PhoneNumber.extension)
}

inline bool PhoneNumber::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void PhoneNumber::clear_has_kind() {
  _impl_._oneof_case_[0] = KIND_NOT_SET;
}
inline PhoneNumber::KindCase PhoneNumber::kind_case() const {
  return PhoneNumber::KindCase(_impl_._oneof_case_[0]);
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
