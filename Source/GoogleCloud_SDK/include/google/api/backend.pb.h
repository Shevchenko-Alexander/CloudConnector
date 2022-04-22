// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/backend.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fbackend_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fbackend_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fbackend_2eproto;
namespace google {
namespace api {
class Backend;
struct BackendDefaultTypeInternal;
extern BackendDefaultTypeInternal _Backend_default_instance_;
class BackendRule;
struct BackendRuleDefaultTypeInternal;
extern BackendRuleDefaultTypeInternal _BackendRule_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Backend* Arena::CreateMaybeMessage<::google::api::Backend>(Arena*);
template<> ::google::api::BackendRule* Arena::CreateMaybeMessage<::google::api::BackendRule>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

enum BackendRule_PathTranslation : int {
  BackendRule_PathTranslation_PATH_TRANSLATION_UNSPECIFIED = 0,
  BackendRule_PathTranslation_CONSTANT_ADDRESS = 1,
  BackendRule_PathTranslation_APPEND_PATH_TO_ADDRESS = 2,
  BackendRule_PathTranslation_BackendRule_PathTranslation_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  BackendRule_PathTranslation_BackendRule_PathTranslation_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool BackendRule_PathTranslation_IsValid(int value);
constexpr BackendRule_PathTranslation BackendRule_PathTranslation_PathTranslation_MIN = BackendRule_PathTranslation_PATH_TRANSLATION_UNSPECIFIED;
constexpr BackendRule_PathTranslation BackendRule_PathTranslation_PathTranslation_MAX = BackendRule_PathTranslation_APPEND_PATH_TO_ADDRESS;
constexpr int BackendRule_PathTranslation_PathTranslation_ARRAYSIZE = BackendRule_PathTranslation_PathTranslation_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BackendRule_PathTranslation_descriptor();
template<typename T>
inline const std::string& BackendRule_PathTranslation_Name(T enum_t_value) {
  static_assert(::std::is_same<T, BackendRule_PathTranslation>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function BackendRule_PathTranslation_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    BackendRule_PathTranslation_descriptor(), enum_t_value);
}
inline bool BackendRule_PathTranslation_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, BackendRule_PathTranslation* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<BackendRule_PathTranslation>(
    BackendRule_PathTranslation_descriptor(), name, value);
}
// ===================================================================

class Backend final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Backend) */ {
 public:
  inline Backend() : Backend(nullptr) {}
  ~Backend() override;
  explicit constexpr Backend(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Backend(const Backend& from);
  Backend(Backend&& from) noexcept
    : Backend() {
    *this = ::std::move(from);
  }

  inline Backend& operator=(const Backend& from) {
    CopyFrom(from);
    return *this;
  }
  inline Backend& operator=(Backend&& from) noexcept {
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
  static const Backend& default_instance() {
    return *internal_default_instance();
  }
  static inline const Backend* internal_default_instance() {
    return reinterpret_cast<const Backend*>(
               &_Backend_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Backend& a, Backend& b) {
    a.Swap(&b);
  }
  inline void Swap(Backend* other) {
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
  void UnsafeArenaSwap(Backend* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Backend* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Backend>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Backend& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Backend& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Backend* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Backend";
  }
  protected:
  explicit Backend(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRulesFieldNumber = 1,
  };
  // repeated .google.api.BackendRule rules = 1;
  int rules_size() const;
  private:
  int _internal_rules_size() const;
  public:
  void clear_rules();
  ::google::api::BackendRule* mutable_rules(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::BackendRule >*
      mutable_rules();
  private:
  const ::google::api::BackendRule& _internal_rules(int index) const;
  ::google::api::BackendRule* _internal_add_rules();
  public:
  const ::google::api::BackendRule& rules(int index) const;
  ::google::api::BackendRule* add_rules();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::BackendRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.Backend)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::BackendRule > rules_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fbackend_2eproto;
};
// -------------------------------------------------------------------

class BackendRule final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.BackendRule) */ {
 public:
  inline BackendRule() : BackendRule(nullptr) {}
  ~BackendRule() override;
  explicit constexpr BackendRule(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BackendRule(const BackendRule& from);
  BackendRule(BackendRule&& from) noexcept
    : BackendRule() {
    *this = ::std::move(from);
  }

  inline BackendRule& operator=(const BackendRule& from) {
    CopyFrom(from);
    return *this;
  }
  inline BackendRule& operator=(BackendRule&& from) noexcept {
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
  static const BackendRule& default_instance() {
    return *internal_default_instance();
  }
  enum AuthenticationCase {
    kJwtAudience = 7,
    kDisableAuth = 8,
    AUTHENTICATION_NOT_SET = 0,
  };

  static inline const BackendRule* internal_default_instance() {
    return reinterpret_cast<const BackendRule*>(
               &_BackendRule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BackendRule& a, BackendRule& b) {
    a.Swap(&b);
  }
  inline void Swap(BackendRule* other) {
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
  void UnsafeArenaSwap(BackendRule* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BackendRule* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BackendRule>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BackendRule& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const BackendRule& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BackendRule* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.BackendRule";
  }
  protected:
  explicit BackendRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef BackendRule_PathTranslation PathTranslation;
  static constexpr PathTranslation PATH_TRANSLATION_UNSPECIFIED =
    BackendRule_PathTranslation_PATH_TRANSLATION_UNSPECIFIED;
  static constexpr PathTranslation CONSTANT_ADDRESS =
    BackendRule_PathTranslation_CONSTANT_ADDRESS;
  static constexpr PathTranslation APPEND_PATH_TO_ADDRESS =
    BackendRule_PathTranslation_APPEND_PATH_TO_ADDRESS;
  static inline bool PathTranslation_IsValid(int value) {
    return BackendRule_PathTranslation_IsValid(value);
  }
  static constexpr PathTranslation PathTranslation_MIN =
    BackendRule_PathTranslation_PathTranslation_MIN;
  static constexpr PathTranslation PathTranslation_MAX =
    BackendRule_PathTranslation_PathTranslation_MAX;
  static constexpr int PathTranslation_ARRAYSIZE =
    BackendRule_PathTranslation_PathTranslation_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PathTranslation_descriptor() {
    return BackendRule_PathTranslation_descriptor();
  }
  template<typename T>
  static inline const std::string& PathTranslation_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PathTranslation>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PathTranslation_Name.");
    return BackendRule_PathTranslation_Name(enum_t_value);
  }
  static inline bool PathTranslation_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PathTranslation* value) {
    return BackendRule_PathTranslation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSelectorFieldNumber = 1,
    kAddressFieldNumber = 2,
    kProtocolFieldNumber = 9,
    kDeadlineFieldNumber = 3,
    kMinDeadlineFieldNumber = 4,
    kOperationDeadlineFieldNumber = 5,
    kPathTranslationFieldNumber = 6,
    kJwtAudienceFieldNumber = 7,
    kDisableAuthFieldNumber = 8,
  };
  // string selector = 1;
  void clear_selector();
  const std::string& selector() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_selector(ArgT0&& arg0, ArgT... args);
  std::string* mutable_selector();
  PROTOBUF_NODISCARD std::string* release_selector();
  void set_allocated_selector(std::string* selector);
  private:
  const std::string& _internal_selector() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_selector(const std::string& value);
  std::string* _internal_mutable_selector();
  public:

  // string address = 2;
  void clear_address();
  const std::string& address() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_address(ArgT0&& arg0, ArgT... args);
  std::string* mutable_address();
  PROTOBUF_NODISCARD std::string* release_address();
  void set_allocated_address(std::string* address);
  private:
  const std::string& _internal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_address(const std::string& value);
  std::string* _internal_mutable_address();
  public:

  // string protocol = 9;
  void clear_protocol();
  const std::string& protocol() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_protocol(ArgT0&& arg0, ArgT... args);
  std::string* mutable_protocol();
  PROTOBUF_NODISCARD std::string* release_protocol();
  void set_allocated_protocol(std::string* protocol);
  private:
  const std::string& _internal_protocol() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_protocol(const std::string& value);
  std::string* _internal_mutable_protocol();
  public:

  // double deadline = 3;
  void clear_deadline();
  double deadline() const;
  void set_deadline(double value);
  private:
  double _internal_deadline() const;
  void _internal_set_deadline(double value);
  public:

  // double min_deadline = 4;
  void clear_min_deadline();
  double min_deadline() const;
  void set_min_deadline(double value);
  private:
  double _internal_min_deadline() const;
  void _internal_set_min_deadline(double value);
  public:

  // double operation_deadline = 5;
  void clear_operation_deadline();
  double operation_deadline() const;
  void set_operation_deadline(double value);
  private:
  double _internal_operation_deadline() const;
  void _internal_set_operation_deadline(double value);
  public:

  // .google.api.BackendRule.PathTranslation path_translation = 6;
  void clear_path_translation();
  ::google::api::BackendRule_PathTranslation path_translation() const;
  void set_path_translation(::google::api::BackendRule_PathTranslation value);
  private:
  ::google::api::BackendRule_PathTranslation _internal_path_translation() const;
  void _internal_set_path_translation(::google::api::BackendRule_PathTranslation value);
  public:

  // string jwt_audience = 7;
  bool has_jwt_audience() const;
  private:
  bool _internal_has_jwt_audience() const;
  public:
  void clear_jwt_audience();
  const std::string& jwt_audience() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_jwt_audience(ArgT0&& arg0, ArgT... args);
  std::string* mutable_jwt_audience();
  PROTOBUF_NODISCARD std::string* release_jwt_audience();
  void set_allocated_jwt_audience(std::string* jwt_audience);
  private:
  const std::string& _internal_jwt_audience() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_jwt_audience(const std::string& value);
  std::string* _internal_mutable_jwt_audience();
  public:

  // bool disable_auth = 8;
  bool has_disable_auth() const;
  private:
  bool _internal_has_disable_auth() const;
  public:
  void clear_disable_auth();
  bool disable_auth() const;
  void set_disable_auth(bool value);
  private:
  bool _internal_disable_auth() const;
  void _internal_set_disable_auth(bool value);
  public:

  void clear_authentication();
  AuthenticationCase authentication_case() const;
  // @@protoc_insertion_point(class_scope:google.api.BackendRule)
 private:
  class _Internal;
  void set_has_jwt_audience();
  void set_has_disable_auth();

  inline bool has_authentication() const;
  inline void clear_has_authentication();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr selector_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr protocol_;
  double deadline_;
  double min_deadline_;
  double operation_deadline_;
  int path_translation_;
  union AuthenticationUnion {
    constexpr AuthenticationUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr jwt_audience_;
    bool disable_auth_;
  } authentication_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_google_2fapi_2fbackend_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Backend

// repeated .google.api.BackendRule rules = 1;
inline int Backend::_internal_rules_size() const {
  return rules_.size();
}
inline int Backend::rules_size() const {
  return _internal_rules_size();
}
inline void Backend::clear_rules() {
  rules_.Clear();
}
inline ::google::api::BackendRule* Backend::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Backend.rules)
  return rules_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::BackendRule >*
Backend::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Backend.rules)
  return &rules_;
}
inline const ::google::api::BackendRule& Backend::_internal_rules(int index) const {
  return rules_.Get(index);
}
inline const ::google::api::BackendRule& Backend::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Backend.rules)
  return _internal_rules(index);
}
inline ::google::api::BackendRule* Backend::_internal_add_rules() {
  return rules_.Add();
}
inline ::google::api::BackendRule* Backend::add_rules() {
  ::google::api::BackendRule* _add = _internal_add_rules();
  // @@protoc_insertion_point(field_add:google.api.Backend.rules)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::BackendRule >&
Backend::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Backend.rules)
  return rules_;
}

// -------------------------------------------------------------------

// BackendRule

// string selector = 1;
inline void BackendRule::clear_selector() {
  selector_.ClearToEmpty();
}
inline const std::string& BackendRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.selector)
  return _internal_selector();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BackendRule::set_selector(ArgT0&& arg0, ArgT... args) {
 
 selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.BackendRule.selector)
}
inline std::string* BackendRule::mutable_selector() {
  std::string* _s = _internal_mutable_selector();
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.selector)
  return _s;
}
inline const std::string& BackendRule::_internal_selector() const {
  return selector_.Get();
}
inline void BackendRule::_internal_set_selector(const std::string& value) {
  
  selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* BackendRule::_internal_mutable_selector() {
  
  return selector_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* BackendRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.selector)
  return selector_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void BackendRule::set_allocated_selector(std::string* selector) {
  if (selector != nullptr) {
    
  } else {
    
  }
  selector_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), selector,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (selector_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    selector_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.selector)
}

// string address = 2;
inline void BackendRule::clear_address() {
  address_.ClearToEmpty();
}
inline const std::string& BackendRule::address() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.address)
  return _internal_address();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BackendRule::set_address(ArgT0&& arg0, ArgT... args) {
 
 address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.BackendRule.address)
}
inline std::string* BackendRule::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.address)
  return _s;
}
inline const std::string& BackendRule::_internal_address() const {
  return address_.Get();
}
inline void BackendRule::_internal_set_address(const std::string& value) {
  
  address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* BackendRule::_internal_mutable_address() {
  
  return address_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* BackendRule::release_address() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.address)
  return address_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void BackendRule::set_allocated_address(std::string* address) {
  if (address != nullptr) {
    
  } else {
    
  }
  address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), address,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (address_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.address)
}

// double deadline = 3;
inline void BackendRule::clear_deadline() {
  deadline_ = 0;
}
inline double BackendRule::_internal_deadline() const {
  return deadline_;
}
inline double BackendRule::deadline() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.deadline)
  return _internal_deadline();
}
inline void BackendRule::_internal_set_deadline(double value) {
  
  deadline_ = value;
}
inline void BackendRule::set_deadline(double value) {
  _internal_set_deadline(value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.deadline)
}

// double min_deadline = 4;
inline void BackendRule::clear_min_deadline() {
  min_deadline_ = 0;
}
inline double BackendRule::_internal_min_deadline() const {
  return min_deadline_;
}
inline double BackendRule::min_deadline() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.min_deadline)
  return _internal_min_deadline();
}
inline void BackendRule::_internal_set_min_deadline(double value) {
  
  min_deadline_ = value;
}
inline void BackendRule::set_min_deadline(double value) {
  _internal_set_min_deadline(value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.min_deadline)
}

// double operation_deadline = 5;
inline void BackendRule::clear_operation_deadline() {
  operation_deadline_ = 0;
}
inline double BackendRule::_internal_operation_deadline() const {
  return operation_deadline_;
}
inline double BackendRule::operation_deadline() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.operation_deadline)
  return _internal_operation_deadline();
}
inline void BackendRule::_internal_set_operation_deadline(double value) {
  
  operation_deadline_ = value;
}
inline void BackendRule::set_operation_deadline(double value) {
  _internal_set_operation_deadline(value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.operation_deadline)
}

// .google.api.BackendRule.PathTranslation path_translation = 6;
inline void BackendRule::clear_path_translation() {
  path_translation_ = 0;
}
inline ::google::api::BackendRule_PathTranslation BackendRule::_internal_path_translation() const {
  return static_cast< ::google::api::BackendRule_PathTranslation >(path_translation_);
}
inline ::google::api::BackendRule_PathTranslation BackendRule::path_translation() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.path_translation)
  return _internal_path_translation();
}
inline void BackendRule::_internal_set_path_translation(::google::api::BackendRule_PathTranslation value) {
  
  path_translation_ = value;
}
inline void BackendRule::set_path_translation(::google::api::BackendRule_PathTranslation value) {
  _internal_set_path_translation(value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.path_translation)
}

// string jwt_audience = 7;
inline bool BackendRule::_internal_has_jwt_audience() const {
  return authentication_case() == kJwtAudience;
}
inline bool BackendRule::has_jwt_audience() const {
  return _internal_has_jwt_audience();
}
inline void BackendRule::set_has_jwt_audience() {
  _oneof_case_[0] = kJwtAudience;
}
inline void BackendRule::clear_jwt_audience() {
  if (_internal_has_jwt_audience()) {
    authentication_.jwt_audience_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
    clear_has_authentication();
  }
}
inline const std::string& BackendRule::jwt_audience() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.jwt_audience)
  return _internal_jwt_audience();
}
template <typename ArgT0, typename... ArgT>
inline void BackendRule::set_jwt_audience(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_jwt_audience()) {
    clear_authentication();
    set_has_jwt_audience();
    authentication_.jwt_audience_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  authentication_.jwt_audience_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.BackendRule.jwt_audience)
}
inline std::string* BackendRule::mutable_jwt_audience() {
  std::string* _s = _internal_mutable_jwt_audience();
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.jwt_audience)
  return _s;
}
inline const std::string& BackendRule::_internal_jwt_audience() const {
  if (_internal_has_jwt_audience()) {
    return authentication_.jwt_audience_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void BackendRule::_internal_set_jwt_audience(const std::string& value) {
  if (!_internal_has_jwt_audience()) {
    clear_authentication();
    set_has_jwt_audience();
    authentication_.jwt_audience_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  authentication_.jwt_audience_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* BackendRule::_internal_mutable_jwt_audience() {
  if (!_internal_has_jwt_audience()) {
    clear_authentication();
    set_has_jwt_audience();
    authentication_.jwt_audience_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return authentication_.jwt_audience_.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* BackendRule::release_jwt_audience() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.jwt_audience)
  if (_internal_has_jwt_audience()) {
    clear_has_authentication();
    return authentication_.jwt_audience_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
  } else {
    return nullptr;
  }
}
inline void BackendRule::set_allocated_jwt_audience(std::string* jwt_audience) {
  if (has_authentication()) {
    clear_authentication();
  }
  if (jwt_audience != nullptr) {
    set_has_jwt_audience();
    authentication_.jwt_audience_.UnsafeSetDefault(jwt_audience);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaForAllocation();
    if (arena != nullptr) {
      arena->Own(jwt_audience);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.jwt_audience)
}

// bool disable_auth = 8;
inline bool BackendRule::_internal_has_disable_auth() const {
  return authentication_case() == kDisableAuth;
}
inline bool BackendRule::has_disable_auth() const {
  return _internal_has_disable_auth();
}
inline void BackendRule::set_has_disable_auth() {
  _oneof_case_[0] = kDisableAuth;
}
inline void BackendRule::clear_disable_auth() {
  if (_internal_has_disable_auth()) {
    authentication_.disable_auth_ = false;
    clear_has_authentication();
  }
}
inline bool BackendRule::_internal_disable_auth() const {
  if (_internal_has_disable_auth()) {
    return authentication_.disable_auth_;
  }
  return false;
}
inline void BackendRule::_internal_set_disable_auth(bool value) {
  if (!_internal_has_disable_auth()) {
    clear_authentication();
    set_has_disable_auth();
  }
  authentication_.disable_auth_ = value;
}
inline bool BackendRule::disable_auth() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.disable_auth)
  return _internal_disable_auth();
}
inline void BackendRule::set_disable_auth(bool value) {
  _internal_set_disable_auth(value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.disable_auth)
}

// string protocol = 9;
inline void BackendRule::clear_protocol() {
  protocol_.ClearToEmpty();
}
inline const std::string& BackendRule::protocol() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.protocol)
  return _internal_protocol();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BackendRule::set_protocol(ArgT0&& arg0, ArgT... args) {
 
 protocol_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.BackendRule.protocol)
}
inline std::string* BackendRule::mutable_protocol() {
  std::string* _s = _internal_mutable_protocol();
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.protocol)
  return _s;
}
inline const std::string& BackendRule::_internal_protocol() const {
  return protocol_.Get();
}
inline void BackendRule::_internal_set_protocol(const std::string& value) {
  
  protocol_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* BackendRule::_internal_mutable_protocol() {
  
  return protocol_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* BackendRule::release_protocol() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.protocol)
  return protocol_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void BackendRule::set_allocated_protocol(std::string* protocol) {
  if (protocol != nullptr) {
    
  } else {
    
  }
  protocol_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), protocol,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (protocol_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    protocol_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.protocol)
}

inline bool BackendRule::has_authentication() const {
  return authentication_case() != AUTHENTICATION_NOT_SET;
}
inline void BackendRule::clear_has_authentication() {
  _oneof_case_[0] = AUTHENTICATION_NOT_SET;
}
inline BackendRule::AuthenticationCase BackendRule::authentication_case() const {
  return BackendRule::AuthenticationCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::api::BackendRule_PathTranslation> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::BackendRule_PathTranslation>() {
  return ::google::api::BackendRule_PathTranslation_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto
