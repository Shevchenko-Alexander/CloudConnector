// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/group.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fgroup_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fgroup_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "google/api/resource.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fmonitoring_2fv3_2fgroup_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fmonitoring_2fv3_2fgroup_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fmonitoring_2fv3_2fgroup_2eproto;
namespace google {
namespace monitoring {
namespace v3 {
class Group;
struct GroupDefaultTypeInternal;
extern GroupDefaultTypeInternal _Group_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::monitoring::v3::Group* Arena::CreateMaybeMessage<::google::monitoring::v3::Group>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

class Group final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.v3.Group) */ {
 public:
  inline Group() : Group(nullptr) {}
  ~Group() override;
  explicit constexpr Group(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Group(const Group& from);
  Group(Group&& from) noexcept
    : Group() {
    *this = ::std::move(from);
  }

  inline Group& operator=(const Group& from) {
    CopyFrom(from);
    return *this;
  }
  inline Group& operator=(Group&& from) noexcept {
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
  static const Group& default_instance() {
    return *internal_default_instance();
  }
  static inline const Group* internal_default_instance() {
    return reinterpret_cast<const Group*>(
               &_Group_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Group& a, Group& b) {
    a.Swap(&b);
  }
  inline void Swap(Group* other) {
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
  void UnsafeArenaSwap(Group* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Group* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Group>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Group& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Group& from);
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
  void InternalSwap(Group* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.v3.Group";
  }
  protected:
  explicit Group(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kNameFieldNumber = 1,
    kDisplayNameFieldNumber = 2,
    kParentNameFieldNumber = 3,
    kFilterFieldNumber = 5,
    kIsClusterFieldNumber = 6,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string display_name = 2;
  void clear_display_name();
  const std::string& display_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_display_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_display_name();
  PROTOBUF_NODISCARD std::string* release_display_name();
  void set_allocated_display_name(std::string* display_name);
  private:
  const std::string& _internal_display_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_display_name(const std::string& value);
  std::string* _internal_mutable_display_name();
  public:

  // string parent_name = 3;
  void clear_parent_name();
  const std::string& parent_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_parent_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_parent_name();
  PROTOBUF_NODISCARD std::string* release_parent_name();
  void set_allocated_parent_name(std::string* parent_name);
  private:
  const std::string& _internal_parent_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_parent_name(const std::string& value);
  std::string* _internal_mutable_parent_name();
  public:

  // string filter = 5;
  void clear_filter();
  const std::string& filter() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_filter(ArgT0&& arg0, ArgT... args);
  std::string* mutable_filter();
  PROTOBUF_NODISCARD std::string* release_filter();
  void set_allocated_filter(std::string* filter);
  private:
  const std::string& _internal_filter() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_filter(const std::string& value);
  std::string* _internal_mutable_filter();
  public:

  // bool is_cluster = 6;
  void clear_is_cluster();
  bool is_cluster() const;
  void set_is_cluster(bool value);
  private:
  bool _internal_is_cluster() const;
  void _internal_set_is_cluster(bool value);
  public:

  // @@protoc_insertion_point(class_scope:google.monitoring.v3.Group)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr display_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr parent_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr filter_;
  bool is_cluster_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fmonitoring_2fv3_2fgroup_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Group

// string name = 1;
inline void Group::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Group::name() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Group.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Group::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.v3.Group.name)
}
inline std::string* Group::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Group.name)
  return _s;
}
inline const std::string& Group::_internal_name() const {
  return name_.Get();
}
inline void Group::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Group::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Group::release_name() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Group.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Group::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Group.name)
}

// string display_name = 2;
inline void Group::clear_display_name() {
  display_name_.ClearToEmpty();
}
inline const std::string& Group::display_name() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Group.display_name)
  return _internal_display_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Group::set_display_name(ArgT0&& arg0, ArgT... args) {
 
 display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.v3.Group.display_name)
}
inline std::string* Group::mutable_display_name() {
  std::string* _s = _internal_mutable_display_name();
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Group.display_name)
  return _s;
}
inline const std::string& Group::_internal_display_name() const {
  return display_name_.Get();
}
inline void Group::_internal_set_display_name(const std::string& value) {
  
  display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Group::_internal_mutable_display_name() {
  
  return display_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Group::release_display_name() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Group.display_name)
  return display_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Group::set_allocated_display_name(std::string* display_name) {
  if (display_name != nullptr) {
    
  } else {
    
  }
  display_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), display_name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (display_name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    display_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Group.display_name)
}

// string parent_name = 3;
inline void Group::clear_parent_name() {
  parent_name_.ClearToEmpty();
}
inline const std::string& Group::parent_name() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Group.parent_name)
  return _internal_parent_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Group::set_parent_name(ArgT0&& arg0, ArgT... args) {
 
 parent_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.v3.Group.parent_name)
}
inline std::string* Group::mutable_parent_name() {
  std::string* _s = _internal_mutable_parent_name();
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Group.parent_name)
  return _s;
}
inline const std::string& Group::_internal_parent_name() const {
  return parent_name_.Get();
}
inline void Group::_internal_set_parent_name(const std::string& value) {
  
  parent_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Group::_internal_mutable_parent_name() {
  
  return parent_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Group::release_parent_name() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Group.parent_name)
  return parent_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Group::set_allocated_parent_name(std::string* parent_name) {
  if (parent_name != nullptr) {
    
  } else {
    
  }
  parent_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), parent_name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (parent_name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    parent_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Group.parent_name)
}

// string filter = 5;
inline void Group::clear_filter() {
  filter_.ClearToEmpty();
}
inline const std::string& Group::filter() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Group.filter)
  return _internal_filter();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Group::set_filter(ArgT0&& arg0, ArgT... args) {
 
 filter_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.v3.Group.filter)
}
inline std::string* Group::mutable_filter() {
  std::string* _s = _internal_mutable_filter();
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Group.filter)
  return _s;
}
inline const std::string& Group::_internal_filter() const {
  return filter_.Get();
}
inline void Group::_internal_set_filter(const std::string& value) {
  
  filter_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Group::_internal_mutable_filter() {
  
  return filter_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Group::release_filter() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Group.filter)
  return filter_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Group::set_allocated_filter(std::string* filter) {
  if (filter != nullptr) {
    
  } else {
    
  }
  filter_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), filter,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (filter_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    filter_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Group.filter)
}

// bool is_cluster = 6;
inline void Group::clear_is_cluster() {
  is_cluster_ = false;
}
inline bool Group::_internal_is_cluster() const {
  return is_cluster_;
}
inline bool Group::is_cluster() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Group.is_cluster)
  return _internal_is_cluster();
}
inline void Group::_internal_set_is_cluster(bool value) {
  
  is_cluster_ = value;
}
inline void Group::set_is_cluster(bool value) {
  _internal_set_is_cluster(value);
  // @@protoc_insertion_point(field_set:google.monitoring.v3.Group.is_cluster)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v3
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fgroup_2eproto
