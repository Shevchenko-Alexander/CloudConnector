// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/bigquery/storage/v1/table.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/field_behavior.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto;
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {
class TableFieldSchema;
struct TableFieldSchemaDefaultTypeInternal;
extern TableFieldSchemaDefaultTypeInternal _TableFieldSchema_default_instance_;
class TableSchema;
struct TableSchemaDefaultTypeInternal;
extern TableSchemaDefaultTypeInternal _TableSchema_default_instance_;
}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::cloud::bigquery::storage::v1::TableFieldSchema* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::TableFieldSchema>(Arena*);
template<> ::google::cloud::bigquery::storage::v1::TableSchema* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::TableSchema>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {

enum TableFieldSchema_Type : int {
  TableFieldSchema_Type_TYPE_UNSPECIFIED = 0,
  TableFieldSchema_Type_STRING = 1,
  TableFieldSchema_Type_INT64 = 2,
  TableFieldSchema_Type_DOUBLE = 3,
  TableFieldSchema_Type_STRUCT = 4,
  TableFieldSchema_Type_BYTES = 5,
  TableFieldSchema_Type_BOOL = 6,
  TableFieldSchema_Type_TIMESTAMP = 7,
  TableFieldSchema_Type_DATE = 8,
  TableFieldSchema_Type_TIME = 9,
  TableFieldSchema_Type_DATETIME = 10,
  TableFieldSchema_Type_GEOGRAPHY = 11,
  TableFieldSchema_Type_NUMERIC = 12,
  TableFieldSchema_Type_BIGNUMERIC = 13,
  TableFieldSchema_Type_INTERVAL = 14,
  TableFieldSchema_Type_JSON = 15,
  TableFieldSchema_Type_TableFieldSchema_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  TableFieldSchema_Type_TableFieldSchema_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool TableFieldSchema_Type_IsValid(int value);
constexpr TableFieldSchema_Type TableFieldSchema_Type_Type_MIN = TableFieldSchema_Type_TYPE_UNSPECIFIED;
constexpr TableFieldSchema_Type TableFieldSchema_Type_Type_MAX = TableFieldSchema_Type_JSON;
constexpr int TableFieldSchema_Type_Type_ARRAYSIZE = TableFieldSchema_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TableFieldSchema_Type_descriptor();
template<typename T>
inline const std::string& TableFieldSchema_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TableFieldSchema_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TableFieldSchema_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TableFieldSchema_Type_descriptor(), enum_t_value);
}
inline bool TableFieldSchema_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TableFieldSchema_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TableFieldSchema_Type>(
    TableFieldSchema_Type_descriptor(), name, value);
}
enum TableFieldSchema_Mode : int {
  TableFieldSchema_Mode_MODE_UNSPECIFIED = 0,
  TableFieldSchema_Mode_NULLABLE = 1,
  TableFieldSchema_Mode_REQUIRED = 2,
  TableFieldSchema_Mode_REPEATED = 3,
  TableFieldSchema_Mode_TableFieldSchema_Mode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  TableFieldSchema_Mode_TableFieldSchema_Mode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool TableFieldSchema_Mode_IsValid(int value);
constexpr TableFieldSchema_Mode TableFieldSchema_Mode_Mode_MIN = TableFieldSchema_Mode_MODE_UNSPECIFIED;
constexpr TableFieldSchema_Mode TableFieldSchema_Mode_Mode_MAX = TableFieldSchema_Mode_REPEATED;
constexpr int TableFieldSchema_Mode_Mode_ARRAYSIZE = TableFieldSchema_Mode_Mode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TableFieldSchema_Mode_descriptor();
template<typename T>
inline const std::string& TableFieldSchema_Mode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TableFieldSchema_Mode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TableFieldSchema_Mode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TableFieldSchema_Mode_descriptor(), enum_t_value);
}
inline bool TableFieldSchema_Mode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TableFieldSchema_Mode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TableFieldSchema_Mode>(
    TableFieldSchema_Mode_descriptor(), name, value);
}
// ===================================================================

class TableSchema final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.TableSchema) */ {
 public:
  inline TableSchema() : TableSchema(nullptr) {}
  ~TableSchema() override;
  explicit PROTOBUF_CONSTEXPR TableSchema(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TableSchema(const TableSchema& from);
  TableSchema(TableSchema&& from) noexcept
    : TableSchema() {
    *this = ::std::move(from);
  }

  inline TableSchema& operator=(const TableSchema& from) {
    CopyFrom(from);
    return *this;
  }
  inline TableSchema& operator=(TableSchema&& from) noexcept {
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
  static const TableSchema& default_instance() {
    return *internal_default_instance();
  }
  static inline const TableSchema* internal_default_instance() {
    return reinterpret_cast<const TableSchema*>(
               &_TableSchema_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TableSchema& a, TableSchema& b) {
    a.Swap(&b);
  }
  inline void Swap(TableSchema* other) {
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
  void UnsafeArenaSwap(TableSchema* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TableSchema* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TableSchema>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TableSchema& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TableSchema& from) {
    TableSchema::MergeImpl(*this, from);
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
  void InternalSwap(TableSchema* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.TableSchema";
  }
  protected:
  explicit TableSchema(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFieldsFieldNumber = 1,
  };
  // repeated .google.cloud.bigquery.storage.v1.TableFieldSchema fields = 1;
  int fields_size() const;
  private:
  int _internal_fields_size() const;
  public:
  void clear_fields();
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* mutable_fields(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >*
      mutable_fields();
  private:
  const ::google::cloud::bigquery::storage::v1::TableFieldSchema& _internal_fields(int index) const;
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* _internal_add_fields();
  public:
  const ::google::cloud::bigquery::storage::v1::TableFieldSchema& fields(int index) const;
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* add_fields();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >&
      fields() const;

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.TableSchema)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema > fields_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto;
};
// -------------------------------------------------------------------

class TableFieldSchema final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.TableFieldSchema) */ {
 public:
  inline TableFieldSchema() : TableFieldSchema(nullptr) {}
  ~TableFieldSchema() override;
  explicit PROTOBUF_CONSTEXPR TableFieldSchema(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TableFieldSchema(const TableFieldSchema& from);
  TableFieldSchema(TableFieldSchema&& from) noexcept
    : TableFieldSchema() {
    *this = ::std::move(from);
  }

  inline TableFieldSchema& operator=(const TableFieldSchema& from) {
    CopyFrom(from);
    return *this;
  }
  inline TableFieldSchema& operator=(TableFieldSchema&& from) noexcept {
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
  static const TableFieldSchema& default_instance() {
    return *internal_default_instance();
  }
  static inline const TableFieldSchema* internal_default_instance() {
    return reinterpret_cast<const TableFieldSchema*>(
               &_TableFieldSchema_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TableFieldSchema& a, TableFieldSchema& b) {
    a.Swap(&b);
  }
  inline void Swap(TableFieldSchema* other) {
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
  void UnsafeArenaSwap(TableFieldSchema* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TableFieldSchema* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TableFieldSchema>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TableFieldSchema& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TableFieldSchema& from) {
    TableFieldSchema::MergeImpl(*this, from);
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
  void InternalSwap(TableFieldSchema* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.TableFieldSchema";
  }
  protected:
  explicit TableFieldSchema(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef TableFieldSchema_Type Type;
  static constexpr Type TYPE_UNSPECIFIED =
    TableFieldSchema_Type_TYPE_UNSPECIFIED;
  static constexpr Type STRING =
    TableFieldSchema_Type_STRING;
  static constexpr Type INT64 =
    TableFieldSchema_Type_INT64;
  static constexpr Type DOUBLE =
    TableFieldSchema_Type_DOUBLE;
  static constexpr Type STRUCT =
    TableFieldSchema_Type_STRUCT;
  static constexpr Type BYTES =
    TableFieldSchema_Type_BYTES;
  static constexpr Type BOOL =
    TableFieldSchema_Type_BOOL;
  static constexpr Type TIMESTAMP =
    TableFieldSchema_Type_TIMESTAMP;
  static constexpr Type DATE =
    TableFieldSchema_Type_DATE;
  static constexpr Type TIME =
    TableFieldSchema_Type_TIME;
  static constexpr Type DATETIME =
    TableFieldSchema_Type_DATETIME;
  static constexpr Type GEOGRAPHY =
    TableFieldSchema_Type_GEOGRAPHY;
  static constexpr Type NUMERIC =
    TableFieldSchema_Type_NUMERIC;
  static constexpr Type BIGNUMERIC =
    TableFieldSchema_Type_BIGNUMERIC;
  static constexpr Type INTERVAL =
    TableFieldSchema_Type_INTERVAL;
  static constexpr Type JSON =
    TableFieldSchema_Type_JSON;
  static inline bool Type_IsValid(int value) {
    return TableFieldSchema_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    TableFieldSchema_Type_Type_MIN;
  static constexpr Type Type_MAX =
    TableFieldSchema_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    TableFieldSchema_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return TableFieldSchema_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return TableFieldSchema_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return TableFieldSchema_Type_Parse(name, value);
  }

  typedef TableFieldSchema_Mode Mode;
  static constexpr Mode MODE_UNSPECIFIED =
    TableFieldSchema_Mode_MODE_UNSPECIFIED;
  static constexpr Mode NULLABLE =
    TableFieldSchema_Mode_NULLABLE;
  static constexpr Mode REQUIRED =
    TableFieldSchema_Mode_REQUIRED;
  static constexpr Mode REPEATED =
    TableFieldSchema_Mode_REPEATED;
  static inline bool Mode_IsValid(int value) {
    return TableFieldSchema_Mode_IsValid(value);
  }
  static constexpr Mode Mode_MIN =
    TableFieldSchema_Mode_Mode_MIN;
  static constexpr Mode Mode_MAX =
    TableFieldSchema_Mode_Mode_MAX;
  static constexpr int Mode_ARRAYSIZE =
    TableFieldSchema_Mode_Mode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Mode_descriptor() {
    return TableFieldSchema_Mode_descriptor();
  }
  template<typename T>
  static inline const std::string& Mode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Mode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Mode_Name.");
    return TableFieldSchema_Mode_Name(enum_t_value);
  }
  static inline bool Mode_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Mode* value) {
    return TableFieldSchema_Mode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kFieldsFieldNumber = 4,
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 6,
    kTypeFieldNumber = 2,
    kModeFieldNumber = 3,
    kMaxLengthFieldNumber = 7,
    kPrecisionFieldNumber = 8,
    kScaleFieldNumber = 9,
  };
  // repeated .google.cloud.bigquery.storage.v1.TableFieldSchema fields = 4 [(.google.api.field_behavior) = OPTIONAL];
  int fields_size() const;
  private:
  int _internal_fields_size() const;
  public:
  void clear_fields();
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* mutable_fields(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >*
      mutable_fields();
  private:
  const ::google::cloud::bigquery::storage::v1::TableFieldSchema& _internal_fields(int index) const;
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* _internal_add_fields();
  public:
  const ::google::cloud::bigquery::storage::v1::TableFieldSchema& fields(int index) const;
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* add_fields();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >&
      fields() const;

  // string name = 1 [(.google.api.field_behavior) = REQUIRED];
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

  // string description = 6 [(.google.api.field_behavior) = OPTIONAL];
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // .google.cloud.bigquery.storage.v1.TableFieldSchema.Type type = 2 [(.google.api.field_behavior) = REQUIRED];
  void clear_type();
  ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type type() const;
  void set_type(::google::cloud::bigquery::storage::v1::TableFieldSchema_Type value);
  private:
  ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type _internal_type() const;
  void _internal_set_type(::google::cloud::bigquery::storage::v1::TableFieldSchema_Type value);
  public:

  // .google.cloud.bigquery.storage.v1.TableFieldSchema.Mode mode = 3 [(.google.api.field_behavior) = OPTIONAL];
  void clear_mode();
  ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode mode() const;
  void set_mode(::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode value);
  private:
  ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode _internal_mode() const;
  void _internal_set_mode(::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode value);
  public:

  // int64 max_length = 7 [(.google.api.field_behavior) = OPTIONAL];
  void clear_max_length();
  int64_t max_length() const;
  void set_max_length(int64_t value);
  private:
  int64_t _internal_max_length() const;
  void _internal_set_max_length(int64_t value);
  public:

  // int64 precision = 8 [(.google.api.field_behavior) = OPTIONAL];
  void clear_precision();
  int64_t precision() const;
  void set_precision(int64_t value);
  private:
  int64_t _internal_precision() const;
  void _internal_set_precision(int64_t value);
  public:

  // int64 scale = 9 [(.google.api.field_behavior) = OPTIONAL];
  void clear_scale();
  int64_t scale() const;
  void set_scale(int64_t value);
  private:
  int64_t _internal_scale() const;
  void _internal_set_scale(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.TableFieldSchema)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema > fields_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
    int type_;
    int mode_;
    int64_t max_length_;
    int64_t precision_;
    int64_t scale_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TableSchema

// repeated .google.cloud.bigquery.storage.v1.TableFieldSchema fields = 1;
inline int TableSchema::_internal_fields_size() const {
  return _impl_.fields_.size();
}
inline int TableSchema::fields_size() const {
  return _internal_fields_size();
}
inline void TableSchema::clear_fields() {
  _impl_.fields_.Clear();
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableSchema::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.TableSchema.fields)
  return _impl_.fields_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >*
TableSchema::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.bigquery.storage.v1.TableSchema.fields)
  return &_impl_.fields_;
}
inline const ::google::cloud::bigquery::storage::v1::TableFieldSchema& TableSchema::_internal_fields(int index) const {
  return _impl_.fields_.Get(index);
}
inline const ::google::cloud::bigquery::storage::v1::TableFieldSchema& TableSchema::fields(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableSchema.fields)
  return _internal_fields(index);
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableSchema::_internal_add_fields() {
  return _impl_.fields_.Add();
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableSchema::add_fields() {
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* _add = _internal_add_fields();
  // @@protoc_insertion_point(field_add:google.cloud.bigquery.storage.v1.TableSchema.fields)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >&
TableSchema::fields() const {
  // @@protoc_insertion_point(field_list:google.cloud.bigquery.storage.v1.TableSchema.fields)
  return _impl_.fields_;
}

// -------------------------------------------------------------------

// TableFieldSchema

// string name = 1 [(.google.api.field_behavior) = REQUIRED];
inline void TableFieldSchema::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& TableFieldSchema::name() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TableFieldSchema::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.name)
}
inline std::string* TableFieldSchema::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.TableFieldSchema.name)
  return _s;
}
inline const std::string& TableFieldSchema::_internal_name() const {
  return _impl_.name_.Get();
}
inline void TableFieldSchema::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* TableFieldSchema::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* TableFieldSchema::release_name() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.TableFieldSchema.name)
  return _impl_.name_.Release();
}
inline void TableFieldSchema::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.TableFieldSchema.name)
}

// .google.cloud.bigquery.storage.v1.TableFieldSchema.Type type = 2 [(.google.api.field_behavior) = REQUIRED];
inline void TableFieldSchema::clear_type() {
  _impl_.type_ = 0;
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type TableFieldSchema::_internal_type() const {
  return static_cast< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type >(_impl_.type_);
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type TableFieldSchema::type() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.type)
  return _internal_type();
}
inline void TableFieldSchema::_internal_set_type(::google::cloud::bigquery::storage::v1::TableFieldSchema_Type value) {
  
  _impl_.type_ = value;
}
inline void TableFieldSchema::set_type(::google::cloud::bigquery::storage::v1::TableFieldSchema_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.type)
}

// .google.cloud.bigquery.storage.v1.TableFieldSchema.Mode mode = 3 [(.google.api.field_behavior) = OPTIONAL];
inline void TableFieldSchema::clear_mode() {
  _impl_.mode_ = 0;
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode TableFieldSchema::_internal_mode() const {
  return static_cast< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode >(_impl_.mode_);
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode TableFieldSchema::mode() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.mode)
  return _internal_mode();
}
inline void TableFieldSchema::_internal_set_mode(::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode value) {
  
  _impl_.mode_ = value;
}
inline void TableFieldSchema::set_mode(::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode value) {
  _internal_set_mode(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.mode)
}

// repeated .google.cloud.bigquery.storage.v1.TableFieldSchema fields = 4 [(.google.api.field_behavior) = OPTIONAL];
inline int TableFieldSchema::_internal_fields_size() const {
  return _impl_.fields_.size();
}
inline int TableFieldSchema::fields_size() const {
  return _internal_fields_size();
}
inline void TableFieldSchema::clear_fields() {
  _impl_.fields_.Clear();
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableFieldSchema::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.TableFieldSchema.fields)
  return _impl_.fields_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >*
TableFieldSchema::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.bigquery.storage.v1.TableFieldSchema.fields)
  return &_impl_.fields_;
}
inline const ::google::cloud::bigquery::storage::v1::TableFieldSchema& TableFieldSchema::_internal_fields(int index) const {
  return _impl_.fields_.Get(index);
}
inline const ::google::cloud::bigquery::storage::v1::TableFieldSchema& TableFieldSchema::fields(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.fields)
  return _internal_fields(index);
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableFieldSchema::_internal_add_fields() {
  return _impl_.fields_.Add();
}
inline ::google::cloud::bigquery::storage::v1::TableFieldSchema* TableFieldSchema::add_fields() {
  ::google::cloud::bigquery::storage::v1::TableFieldSchema* _add = _internal_add_fields();
  // @@protoc_insertion_point(field_add:google.cloud.bigquery.storage.v1.TableFieldSchema.fields)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::cloud::bigquery::storage::v1::TableFieldSchema >&
TableFieldSchema::fields() const {
  // @@protoc_insertion_point(field_list:google.cloud.bigquery.storage.v1.TableFieldSchema.fields)
  return _impl_.fields_;
}

// string description = 6 [(.google.api.field_behavior) = OPTIONAL];
inline void TableFieldSchema::clear_description() {
  _impl_.description_.ClearToEmpty();
}
inline const std::string& TableFieldSchema::description() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TableFieldSchema::set_description(ArgT0&& arg0, ArgT... args) {
 
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.description)
}
inline std::string* TableFieldSchema::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.TableFieldSchema.description)
  return _s;
}
inline const std::string& TableFieldSchema::_internal_description() const {
  return _impl_.description_.Get();
}
inline void TableFieldSchema::_internal_set_description(const std::string& value) {
  
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* TableFieldSchema::_internal_mutable_description() {
  
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* TableFieldSchema::release_description() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.TableFieldSchema.description)
  return _impl_.description_.Release();
}
inline void TableFieldSchema::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  _impl_.description_.SetAllocated(description, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.TableFieldSchema.description)
}

// int64 max_length = 7 [(.google.api.field_behavior) = OPTIONAL];
inline void TableFieldSchema::clear_max_length() {
  _impl_.max_length_ = int64_t{0};
}
inline int64_t TableFieldSchema::_internal_max_length() const {
  return _impl_.max_length_;
}
inline int64_t TableFieldSchema::max_length() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.max_length)
  return _internal_max_length();
}
inline void TableFieldSchema::_internal_set_max_length(int64_t value) {
  
  _impl_.max_length_ = value;
}
inline void TableFieldSchema::set_max_length(int64_t value) {
  _internal_set_max_length(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.max_length)
}

// int64 precision = 8 [(.google.api.field_behavior) = OPTIONAL];
inline void TableFieldSchema::clear_precision() {
  _impl_.precision_ = int64_t{0};
}
inline int64_t TableFieldSchema::_internal_precision() const {
  return _impl_.precision_;
}
inline int64_t TableFieldSchema::precision() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.precision)
  return _internal_precision();
}
inline void TableFieldSchema::_internal_set_precision(int64_t value) {
  
  _impl_.precision_ = value;
}
inline void TableFieldSchema::set_precision(int64_t value) {
  _internal_set_precision(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.precision)
}

// int64 scale = 9 [(.google.api.field_behavior) = OPTIONAL];
inline void TableFieldSchema::clear_scale() {
  _impl_.scale_ = int64_t{0};
}
inline int64_t TableFieldSchema::_internal_scale() const {
  return _impl_.scale_;
}
inline int64_t TableFieldSchema::scale() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.TableFieldSchema.scale)
  return _internal_scale();
}
inline void TableFieldSchema::_internal_set_scale(int64_t value) {
  
  _impl_.scale_ = value;
}
inline void TableFieldSchema::set_scale(int64_t value) {
  _internal_set_scale(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.TableFieldSchema.scale)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type>() {
  return ::google::cloud::bigquery::storage::v1::TableFieldSchema_Type_descriptor();
}
template <> struct is_proto_enum< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode>() {
  return ::google::cloud::bigquery::storage::v1::TableFieldSchema_Mode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2ftable_2eproto
