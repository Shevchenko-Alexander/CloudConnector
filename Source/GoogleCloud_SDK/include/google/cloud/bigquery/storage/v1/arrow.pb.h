// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/bigquery/storage/v1/arrow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {
class ArrowRecordBatch;
struct ArrowRecordBatchDefaultTypeInternal;
extern ArrowRecordBatchDefaultTypeInternal _ArrowRecordBatch_default_instance_;
class ArrowSchema;
struct ArrowSchemaDefaultTypeInternal;
extern ArrowSchemaDefaultTypeInternal _ArrowSchema_default_instance_;
class ArrowSerializationOptions;
struct ArrowSerializationOptionsDefaultTypeInternal;
extern ArrowSerializationOptionsDefaultTypeInternal _ArrowSerializationOptions_default_instance_;
}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::cloud::bigquery::storage::v1::ArrowRecordBatch* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowRecordBatch>(Arena*);
template<> ::google::cloud::bigquery::storage::v1::ArrowSchema* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowSchema>(Arena*);
template<> ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowSerializationOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {

enum ArrowSerializationOptions_CompressionCodec : int {
  ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED = 0,
  ArrowSerializationOptions_CompressionCodec_LZ4_FRAME = 1,
  ArrowSerializationOptions_CompressionCodec_ZSTD = 2,
  ArrowSerializationOptions_CompressionCodec_ArrowSerializationOptions_CompressionCodec_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ArrowSerializationOptions_CompressionCodec_ArrowSerializationOptions_CompressionCodec_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ArrowSerializationOptions_CompressionCodec_IsValid(int value);
constexpr ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions_CompressionCodec_CompressionCodec_MIN = ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED;
constexpr ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX = ArrowSerializationOptions_CompressionCodec_ZSTD;
constexpr int ArrowSerializationOptions_CompressionCodec_CompressionCodec_ARRAYSIZE = ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ArrowSerializationOptions_CompressionCodec_descriptor();
template<typename T>
inline const std::string& ArrowSerializationOptions_CompressionCodec_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ArrowSerializationOptions_CompressionCodec>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ArrowSerializationOptions_CompressionCodec_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ArrowSerializationOptions_CompressionCodec_descriptor(), enum_t_value);
}
inline bool ArrowSerializationOptions_CompressionCodec_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ArrowSerializationOptions_CompressionCodec* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ArrowSerializationOptions_CompressionCodec>(
    ArrowSerializationOptions_CompressionCodec_descriptor(), name, value);
}
// ===================================================================

class ArrowSchema final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowSchema) */ {
 public:
  inline ArrowSchema() : ArrowSchema(nullptr) {}
  ~ArrowSchema() override;
  explicit PROTOBUF_CONSTEXPR ArrowSchema(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArrowSchema(const ArrowSchema& from);
  ArrowSchema(ArrowSchema&& from) noexcept
    : ArrowSchema() {
    *this = ::std::move(from);
  }

  inline ArrowSchema& operator=(const ArrowSchema& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowSchema& operator=(ArrowSchema&& from) noexcept {
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
  static const ArrowSchema& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArrowSchema* internal_default_instance() {
    return reinterpret_cast<const ArrowSchema*>(
               &_ArrowSchema_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ArrowSchema& a, ArrowSchema& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowSchema* other) {
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
  void UnsafeArenaSwap(ArrowSchema* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArrowSchema* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArrowSchema>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ArrowSchema& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ArrowSchema& from) {
    ArrowSchema::MergeImpl(*this, from);
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
  void InternalSwap(ArrowSchema* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowSchema";
  }
  protected:
  explicit ArrowSchema(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSerializedSchemaFieldNumber = 1,
  };
  // bytes serialized_schema = 1;
  void clear_serialized_schema();
  const std::string& serialized_schema() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_serialized_schema(ArgT0&& arg0, ArgT... args);
  std::string* mutable_serialized_schema();
  PROTOBUF_NODISCARD std::string* release_serialized_schema();
  void set_allocated_serialized_schema(std::string* serialized_schema);
  private:
  const std::string& _internal_serialized_schema() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_serialized_schema(const std::string& value);
  std::string* _internal_mutable_serialized_schema();
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowSchema)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serialized_schema_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// -------------------------------------------------------------------

class ArrowRecordBatch final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowRecordBatch) */ {
 public:
  inline ArrowRecordBatch() : ArrowRecordBatch(nullptr) {}
  ~ArrowRecordBatch() override;
  explicit PROTOBUF_CONSTEXPR ArrowRecordBatch(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArrowRecordBatch(const ArrowRecordBatch& from);
  ArrowRecordBatch(ArrowRecordBatch&& from) noexcept
    : ArrowRecordBatch() {
    *this = ::std::move(from);
  }

  inline ArrowRecordBatch& operator=(const ArrowRecordBatch& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowRecordBatch& operator=(ArrowRecordBatch&& from) noexcept {
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
  static const ArrowRecordBatch& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArrowRecordBatch* internal_default_instance() {
    return reinterpret_cast<const ArrowRecordBatch*>(
               &_ArrowRecordBatch_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ArrowRecordBatch& a, ArrowRecordBatch& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowRecordBatch* other) {
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
  void UnsafeArenaSwap(ArrowRecordBatch* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArrowRecordBatch* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArrowRecordBatch>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ArrowRecordBatch& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ArrowRecordBatch& from) {
    ArrowRecordBatch::MergeImpl(*this, from);
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
  void InternalSwap(ArrowRecordBatch* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowRecordBatch";
  }
  protected:
  explicit ArrowRecordBatch(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSerializedRecordBatchFieldNumber = 1,
    kRowCountFieldNumber = 2,
  };
  // bytes serialized_record_batch = 1;
  void clear_serialized_record_batch();
  const std::string& serialized_record_batch() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_serialized_record_batch(ArgT0&& arg0, ArgT... args);
  std::string* mutable_serialized_record_batch();
  PROTOBUF_NODISCARD std::string* release_serialized_record_batch();
  void set_allocated_serialized_record_batch(std::string* serialized_record_batch);
  private:
  const std::string& _internal_serialized_record_batch() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_serialized_record_batch(const std::string& value);
  std::string* _internal_mutable_serialized_record_batch();
  public:

  // int64 row_count = 2 [deprecated = true];
  PROTOBUF_DEPRECATED void clear_row_count();
  PROTOBUF_DEPRECATED int64_t row_count() const;
  PROTOBUF_DEPRECATED void set_row_count(int64_t value);
  private:
  int64_t _internal_row_count() const;
  void _internal_set_row_count(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowRecordBatch)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serialized_record_batch_;
    int64_t row_count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// -------------------------------------------------------------------

class ArrowSerializationOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowSerializationOptions) */ {
 public:
  inline ArrowSerializationOptions() : ArrowSerializationOptions(nullptr) {}
  ~ArrowSerializationOptions() override;
  explicit PROTOBUF_CONSTEXPR ArrowSerializationOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArrowSerializationOptions(const ArrowSerializationOptions& from);
  ArrowSerializationOptions(ArrowSerializationOptions&& from) noexcept
    : ArrowSerializationOptions() {
    *this = ::std::move(from);
  }

  inline ArrowSerializationOptions& operator=(const ArrowSerializationOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowSerializationOptions& operator=(ArrowSerializationOptions&& from) noexcept {
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
  static const ArrowSerializationOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArrowSerializationOptions* internal_default_instance() {
    return reinterpret_cast<const ArrowSerializationOptions*>(
               &_ArrowSerializationOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ArrowSerializationOptions& a, ArrowSerializationOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowSerializationOptions* other) {
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
  void UnsafeArenaSwap(ArrowSerializationOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArrowSerializationOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArrowSerializationOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ArrowSerializationOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ArrowSerializationOptions& from) {
    ArrowSerializationOptions::MergeImpl(*this, from);
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
  void InternalSwap(ArrowSerializationOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowSerializationOptions";
  }
  protected:
  explicit ArrowSerializationOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ArrowSerializationOptions_CompressionCodec CompressionCodec;
  static constexpr CompressionCodec COMPRESSION_UNSPECIFIED =
    ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED;
  static constexpr CompressionCodec LZ4_FRAME =
    ArrowSerializationOptions_CompressionCodec_LZ4_FRAME;
  static constexpr CompressionCodec ZSTD =
    ArrowSerializationOptions_CompressionCodec_ZSTD;
  static inline bool CompressionCodec_IsValid(int value) {
    return ArrowSerializationOptions_CompressionCodec_IsValid(value);
  }
  static constexpr CompressionCodec CompressionCodec_MIN =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_MIN;
  static constexpr CompressionCodec CompressionCodec_MAX =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX;
  static constexpr int CompressionCodec_ARRAYSIZE =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompressionCodec_descriptor() {
    return ArrowSerializationOptions_CompressionCodec_descriptor();
  }
  template<typename T>
  static inline const std::string& CompressionCodec_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompressionCodec>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompressionCodec_Name.");
    return ArrowSerializationOptions_CompressionCodec_Name(enum_t_value);
  }
  static inline bool CompressionCodec_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CompressionCodec* value) {
    return ArrowSerializationOptions_CompressionCodec_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBufferCompressionFieldNumber = 2,
  };
  // .google.cloud.bigquery.storage.v1.ArrowSerializationOptions.CompressionCodec buffer_compression = 2;
  void clear_buffer_compression();
  ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec buffer_compression() const;
  void set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value);
  private:
  ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec _internal_buffer_compression() const;
  void _internal_set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value);
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowSerializationOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int buffer_compression_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ArrowSchema

// bytes serialized_schema = 1;
inline void ArrowSchema::clear_serialized_schema() {
  _impl_.serialized_schema_.ClearToEmpty();
}
inline const std::string& ArrowSchema::serialized_schema() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return _internal_serialized_schema();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ArrowSchema::set_serialized_schema(ArgT0&& arg0, ArgT... args) {
 
 _impl_.serialized_schema_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline std::string* ArrowSchema::mutable_serialized_schema() {
  std::string* _s = _internal_mutable_serialized_schema();
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return _s;
}
inline const std::string& ArrowSchema::_internal_serialized_schema() const {
  return _impl_.serialized_schema_.Get();
}
inline void ArrowSchema::_internal_set_serialized_schema(const std::string& value) {
  
  _impl_.serialized_schema_.Set(value, GetArenaForAllocation());
}
inline std::string* ArrowSchema::_internal_mutable_serialized_schema() {
  
  return _impl_.serialized_schema_.Mutable(GetArenaForAllocation());
}
inline std::string* ArrowSchema::release_serialized_schema() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return _impl_.serialized_schema_.Release();
}
inline void ArrowSchema::set_allocated_serialized_schema(std::string* serialized_schema) {
  if (serialized_schema != nullptr) {
    
  } else {
    
  }
  _impl_.serialized_schema_.SetAllocated(serialized_schema, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.serialized_schema_.IsDefault()) {
    _impl_.serialized_schema_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}

// -------------------------------------------------------------------

// ArrowRecordBatch

// bytes serialized_record_batch = 1;
inline void ArrowRecordBatch::clear_serialized_record_batch() {
  _impl_.serialized_record_batch_.ClearToEmpty();
}
inline const std::string& ArrowRecordBatch::serialized_record_batch() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return _internal_serialized_record_batch();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ArrowRecordBatch::set_serialized_record_batch(ArgT0&& arg0, ArgT... args) {
 
 _impl_.serialized_record_batch_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline std::string* ArrowRecordBatch::mutable_serialized_record_batch() {
  std::string* _s = _internal_mutable_serialized_record_batch();
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return _s;
}
inline const std::string& ArrowRecordBatch::_internal_serialized_record_batch() const {
  return _impl_.serialized_record_batch_.Get();
}
inline void ArrowRecordBatch::_internal_set_serialized_record_batch(const std::string& value) {
  
  _impl_.serialized_record_batch_.Set(value, GetArenaForAllocation());
}
inline std::string* ArrowRecordBatch::_internal_mutable_serialized_record_batch() {
  
  return _impl_.serialized_record_batch_.Mutable(GetArenaForAllocation());
}
inline std::string* ArrowRecordBatch::release_serialized_record_batch() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return _impl_.serialized_record_batch_.Release();
}
inline void ArrowRecordBatch::set_allocated_serialized_record_batch(std::string* serialized_record_batch) {
  if (serialized_record_batch != nullptr) {
    
  } else {
    
  }
  _impl_.serialized_record_batch_.SetAllocated(serialized_record_batch, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.serialized_record_batch_.IsDefault()) {
    _impl_.serialized_record_batch_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}

// int64 row_count = 2 [deprecated = true];
inline void ArrowRecordBatch::clear_row_count() {
  _impl_.row_count_ = int64_t{0};
}
inline int64_t ArrowRecordBatch::_internal_row_count() const {
  return _impl_.row_count_;
}
inline int64_t ArrowRecordBatch::row_count() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowRecordBatch.row_count)
  return _internal_row_count();
}
inline void ArrowRecordBatch::_internal_set_row_count(int64_t value) {
  
  _impl_.row_count_ = value;
}
inline void ArrowRecordBatch::set_row_count(int64_t value) {
  _internal_set_row_count(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowRecordBatch.row_count)
}

// -------------------------------------------------------------------

// ArrowSerializationOptions

// .google.cloud.bigquery.storage.v1.ArrowSerializationOptions.CompressionCodec buffer_compression = 2;
inline void ArrowSerializationOptions::clear_buffer_compression() {
  _impl_.buffer_compression_ = 0;
}
inline ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions::_internal_buffer_compression() const {
  return static_cast< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec >(_impl_.buffer_compression_);
}
inline ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions::buffer_compression() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowSerializationOptions.buffer_compression)
  return _internal_buffer_compression();
}
inline void ArrowSerializationOptions::_internal_set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value) {
  
  _impl_.buffer_compression_ = value;
}
inline void ArrowSerializationOptions::set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value) {
  _internal_set_buffer_compression(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowSerializationOptions.buffer_compression)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec>() {
  return ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
