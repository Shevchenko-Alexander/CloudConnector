// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/iam/admin/v1/audit_data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto

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
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto;
namespace google {
namespace iam {
namespace admin {
namespace v1 {
class AuditData;
struct AuditDataDefaultTypeInternal;
extern AuditDataDefaultTypeInternal _AuditData_default_instance_;
class AuditData_PermissionDelta;
struct AuditData_PermissionDeltaDefaultTypeInternal;
extern AuditData_PermissionDeltaDefaultTypeInternal _AuditData_PermissionDelta_default_instance_;
}  // namespace v1
}  // namespace admin
}  // namespace iam
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::iam::admin::v1::AuditData* Arena::CreateMaybeMessage<::google::iam::admin::v1::AuditData>(Arena*);
template<> ::google::iam::admin::v1::AuditData_PermissionDelta* Arena::CreateMaybeMessage<::google::iam::admin::v1::AuditData_PermissionDelta>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace iam {
namespace admin {
namespace v1 {

// ===================================================================

class AuditData_PermissionDelta final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.iam.admin.v1.AuditData.PermissionDelta) */ {
 public:
  inline AuditData_PermissionDelta() : AuditData_PermissionDelta(nullptr) {}
  ~AuditData_PermissionDelta() override;
  explicit constexpr AuditData_PermissionDelta(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AuditData_PermissionDelta(const AuditData_PermissionDelta& from);
  AuditData_PermissionDelta(AuditData_PermissionDelta&& from) noexcept
    : AuditData_PermissionDelta() {
    *this = ::std::move(from);
  }

  inline AuditData_PermissionDelta& operator=(const AuditData_PermissionDelta& from) {
    CopyFrom(from);
    return *this;
  }
  inline AuditData_PermissionDelta& operator=(AuditData_PermissionDelta&& from) noexcept {
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
  static const AuditData_PermissionDelta& default_instance() {
    return *internal_default_instance();
  }
  static inline const AuditData_PermissionDelta* internal_default_instance() {
    return reinterpret_cast<const AuditData_PermissionDelta*>(
               &_AuditData_PermissionDelta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AuditData_PermissionDelta& a, AuditData_PermissionDelta& b) {
    a.Swap(&b);
  }
  inline void Swap(AuditData_PermissionDelta* other) {
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
  void UnsafeArenaSwap(AuditData_PermissionDelta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AuditData_PermissionDelta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AuditData_PermissionDelta>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AuditData_PermissionDelta& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AuditData_PermissionDelta& from);
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
  void InternalSwap(AuditData_PermissionDelta* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.iam.admin.v1.AuditData.PermissionDelta";
  }
  protected:
  explicit AuditData_PermissionDelta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kAddedPermissionsFieldNumber = 1,
    kRemovedPermissionsFieldNumber = 2,
  };
  // repeated string added_permissions = 1;
  int added_permissions_size() const;
  private:
  int _internal_added_permissions_size() const;
  public:
  void clear_added_permissions();
  const std::string& added_permissions(int index) const;
  std::string* mutable_added_permissions(int index);
  void set_added_permissions(int index, const std::string& value);
  void set_added_permissions(int index, std::string&& value);
  void set_added_permissions(int index, const char* value);
  void set_added_permissions(int index, const char* value, size_t size);
  std::string* add_added_permissions();
  void add_added_permissions(const std::string& value);
  void add_added_permissions(std::string&& value);
  void add_added_permissions(const char* value);
  void add_added_permissions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& added_permissions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_added_permissions();
  private:
  const std::string& _internal_added_permissions(int index) const;
  std::string* _internal_add_added_permissions();
  public:

  // repeated string removed_permissions = 2;
  int removed_permissions_size() const;
  private:
  int _internal_removed_permissions_size() const;
  public:
  void clear_removed_permissions();
  const std::string& removed_permissions(int index) const;
  std::string* mutable_removed_permissions(int index);
  void set_removed_permissions(int index, const std::string& value);
  void set_removed_permissions(int index, std::string&& value);
  void set_removed_permissions(int index, const char* value);
  void set_removed_permissions(int index, const char* value, size_t size);
  std::string* add_removed_permissions();
  void add_removed_permissions(const std::string& value);
  void add_removed_permissions(std::string&& value);
  void add_removed_permissions(const char* value);
  void add_removed_permissions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& removed_permissions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_removed_permissions();
  private:
  const std::string& _internal_removed_permissions(int index) const;
  std::string* _internal_add_removed_permissions();
  public:

  // @@protoc_insertion_point(class_scope:google.iam.admin.v1.AuditData.PermissionDelta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> added_permissions_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> removed_permissions_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto;
};
// -------------------------------------------------------------------

class AuditData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.iam.admin.v1.AuditData) */ {
 public:
  inline AuditData() : AuditData(nullptr) {}
  ~AuditData() override;
  explicit constexpr AuditData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AuditData(const AuditData& from);
  AuditData(AuditData&& from) noexcept
    : AuditData() {
    *this = ::std::move(from);
  }

  inline AuditData& operator=(const AuditData& from) {
    CopyFrom(from);
    return *this;
  }
  inline AuditData& operator=(AuditData&& from) noexcept {
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
  static const AuditData& default_instance() {
    return *internal_default_instance();
  }
  static inline const AuditData* internal_default_instance() {
    return reinterpret_cast<const AuditData*>(
               &_AuditData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AuditData& a, AuditData& b) {
    a.Swap(&b);
  }
  inline void Swap(AuditData* other) {
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
  void UnsafeArenaSwap(AuditData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AuditData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AuditData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AuditData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AuditData& from);
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
  void InternalSwap(AuditData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.iam.admin.v1.AuditData";
  }
  protected:
  explicit AuditData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef AuditData_PermissionDelta PermissionDelta;

  // accessors -------------------------------------------------------

  enum : int {
    kPermissionDeltaFieldNumber = 1,
  };
  // .google.iam.admin.v1.AuditData.PermissionDelta permission_delta = 1;
  bool has_permission_delta() const;
  private:
  bool _internal_has_permission_delta() const;
  public:
  void clear_permission_delta();
  const ::google::iam::admin::v1::AuditData_PermissionDelta& permission_delta() const;
  PROTOBUF_NODISCARD ::google::iam::admin::v1::AuditData_PermissionDelta* release_permission_delta();
  ::google::iam::admin::v1::AuditData_PermissionDelta* mutable_permission_delta();
  void set_allocated_permission_delta(::google::iam::admin::v1::AuditData_PermissionDelta* permission_delta);
  private:
  const ::google::iam::admin::v1::AuditData_PermissionDelta& _internal_permission_delta() const;
  ::google::iam::admin::v1::AuditData_PermissionDelta* _internal_mutable_permission_delta();
  public:
  void unsafe_arena_set_allocated_permission_delta(
      ::google::iam::admin::v1::AuditData_PermissionDelta* permission_delta);
  ::google::iam::admin::v1::AuditData_PermissionDelta* unsafe_arena_release_permission_delta();

  // @@protoc_insertion_point(class_scope:google.iam.admin.v1.AuditData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::iam::admin::v1::AuditData_PermissionDelta* permission_delta_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuditData_PermissionDelta

// repeated string added_permissions = 1;
inline int AuditData_PermissionDelta::_internal_added_permissions_size() const {
  return added_permissions_.size();
}
inline int AuditData_PermissionDelta::added_permissions_size() const {
  return _internal_added_permissions_size();
}
inline void AuditData_PermissionDelta::clear_added_permissions() {
  added_permissions_.Clear();
}
inline std::string* AuditData_PermissionDelta::add_added_permissions() {
  std::string* _s = _internal_add_added_permissions();
  // @@protoc_insertion_point(field_add_mutable:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
  return _s;
}
inline const std::string& AuditData_PermissionDelta::_internal_added_permissions(int index) const {
  return added_permissions_.Get(index);
}
inline const std::string& AuditData_PermissionDelta::added_permissions(int index) const {
  // @@protoc_insertion_point(field_get:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
  return _internal_added_permissions(index);
}
inline std::string* AuditData_PermissionDelta::mutable_added_permissions(int index) {
  // @@protoc_insertion_point(field_mutable:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
  return added_permissions_.Mutable(index);
}
inline void AuditData_PermissionDelta::set_added_permissions(int index, const std::string& value) {
  added_permissions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::set_added_permissions(int index, std::string&& value) {
  added_permissions_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::set_added_permissions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  added_permissions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::set_added_permissions(int index, const char* value, size_t size) {
  added_permissions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline std::string* AuditData_PermissionDelta::_internal_add_added_permissions() {
  return added_permissions_.Add();
}
inline void AuditData_PermissionDelta::add_added_permissions(const std::string& value) {
  added_permissions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::add_added_permissions(std::string&& value) {
  added_permissions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::add_added_permissions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  added_permissions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline void AuditData_PermissionDelta::add_added_permissions(const char* value, size_t size) {
  added_permissions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AuditData_PermissionDelta::added_permissions() const {
  // @@protoc_insertion_point(field_list:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
  return added_permissions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AuditData_PermissionDelta::mutable_added_permissions() {
  // @@protoc_insertion_point(field_mutable_list:google.iam.admin.v1.AuditData.PermissionDelta.added_permissions)
  return &added_permissions_;
}

// repeated string removed_permissions = 2;
inline int AuditData_PermissionDelta::_internal_removed_permissions_size() const {
  return removed_permissions_.size();
}
inline int AuditData_PermissionDelta::removed_permissions_size() const {
  return _internal_removed_permissions_size();
}
inline void AuditData_PermissionDelta::clear_removed_permissions() {
  removed_permissions_.Clear();
}
inline std::string* AuditData_PermissionDelta::add_removed_permissions() {
  std::string* _s = _internal_add_removed_permissions();
  // @@protoc_insertion_point(field_add_mutable:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
  return _s;
}
inline const std::string& AuditData_PermissionDelta::_internal_removed_permissions(int index) const {
  return removed_permissions_.Get(index);
}
inline const std::string& AuditData_PermissionDelta::removed_permissions(int index) const {
  // @@protoc_insertion_point(field_get:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
  return _internal_removed_permissions(index);
}
inline std::string* AuditData_PermissionDelta::mutable_removed_permissions(int index) {
  // @@protoc_insertion_point(field_mutable:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
  return removed_permissions_.Mutable(index);
}
inline void AuditData_PermissionDelta::set_removed_permissions(int index, const std::string& value) {
  removed_permissions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::set_removed_permissions(int index, std::string&& value) {
  removed_permissions_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::set_removed_permissions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  removed_permissions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::set_removed_permissions(int index, const char* value, size_t size) {
  removed_permissions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline std::string* AuditData_PermissionDelta::_internal_add_removed_permissions() {
  return removed_permissions_.Add();
}
inline void AuditData_PermissionDelta::add_removed_permissions(const std::string& value) {
  removed_permissions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::add_removed_permissions(std::string&& value) {
  removed_permissions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::add_removed_permissions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  removed_permissions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline void AuditData_PermissionDelta::add_removed_permissions(const char* value, size_t size) {
  removed_permissions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AuditData_PermissionDelta::removed_permissions() const {
  // @@protoc_insertion_point(field_list:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
  return removed_permissions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AuditData_PermissionDelta::mutable_removed_permissions() {
  // @@protoc_insertion_point(field_mutable_list:google.iam.admin.v1.AuditData.PermissionDelta.removed_permissions)
  return &removed_permissions_;
}

// -------------------------------------------------------------------

// AuditData

// .google.iam.admin.v1.AuditData.PermissionDelta permission_delta = 1;
inline bool AuditData::_internal_has_permission_delta() const {
  return this != internal_default_instance() && permission_delta_ != nullptr;
}
inline bool AuditData::has_permission_delta() const {
  return _internal_has_permission_delta();
}
inline void AuditData::clear_permission_delta() {
  if (GetArenaForAllocation() == nullptr && permission_delta_ != nullptr) {
    delete permission_delta_;
  }
  permission_delta_ = nullptr;
}
inline const ::google::iam::admin::v1::AuditData_PermissionDelta& AuditData::_internal_permission_delta() const {
  const ::google::iam::admin::v1::AuditData_PermissionDelta* p = permission_delta_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::iam::admin::v1::AuditData_PermissionDelta&>(
      ::google::iam::admin::v1::_AuditData_PermissionDelta_default_instance_);
}
inline const ::google::iam::admin::v1::AuditData_PermissionDelta& AuditData::permission_delta() const {
  // @@protoc_insertion_point(field_get:google.iam.admin.v1.AuditData.permission_delta)
  return _internal_permission_delta();
}
inline void AuditData::unsafe_arena_set_allocated_permission_delta(
    ::google::iam::admin::v1::AuditData_PermissionDelta* permission_delta) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(permission_delta_);
  }
  permission_delta_ = permission_delta;
  if (permission_delta) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.iam.admin.v1.AuditData.permission_delta)
}
inline ::google::iam::admin::v1::AuditData_PermissionDelta* AuditData::release_permission_delta() {
  
  ::google::iam::admin::v1::AuditData_PermissionDelta* temp = permission_delta_;
  permission_delta_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::google::iam::admin::v1::AuditData_PermissionDelta* AuditData::unsafe_arena_release_permission_delta() {
  // @@protoc_insertion_point(field_release:google.iam.admin.v1.AuditData.permission_delta)
  
  ::google::iam::admin::v1::AuditData_PermissionDelta* temp = permission_delta_;
  permission_delta_ = nullptr;
  return temp;
}
inline ::google::iam::admin::v1::AuditData_PermissionDelta* AuditData::_internal_mutable_permission_delta() {
  
  if (permission_delta_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::iam::admin::v1::AuditData_PermissionDelta>(GetArenaForAllocation());
    permission_delta_ = p;
  }
  return permission_delta_;
}
inline ::google::iam::admin::v1::AuditData_PermissionDelta* AuditData::mutable_permission_delta() {
  ::google::iam::admin::v1::AuditData_PermissionDelta* _msg = _internal_mutable_permission_delta();
  // @@protoc_insertion_point(field_mutable:google.iam.admin.v1.AuditData.permission_delta)
  return _msg;
}
inline void AuditData::set_allocated_permission_delta(::google::iam::admin::v1::AuditData_PermissionDelta* permission_delta) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete permission_delta_;
  }
  if (permission_delta) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::google::iam::admin::v1::AuditData_PermissionDelta>::GetOwningArena(permission_delta);
    if (message_arena != submessage_arena) {
      permission_delta = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, permission_delta, submessage_arena);
    }
    
  } else {
    
  }
  permission_delta_ = permission_delta;
  // @@protoc_insertion_point(field_set_allocated:google.iam.admin.v1.AuditData.permission_delta)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace admin
}  // namespace iam
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fiam_2fadmin_2fv1_2faudit_5fdata_2eproto
