// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/dashboard/v1/table_display_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto

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
#include "google/api/field_behavior.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto;
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {
class TableDisplayOptions;
struct TableDisplayOptionsDefaultTypeInternal;
extern TableDisplayOptionsDefaultTypeInternal _TableDisplayOptions_default_instance_;
}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::monitoring::dashboard::v1::TableDisplayOptions* Arena::CreateMaybeMessage<::google::monitoring::dashboard::v1::TableDisplayOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {

// ===================================================================

class TableDisplayOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.dashboard.v1.TableDisplayOptions) */ {
 public:
  inline TableDisplayOptions() : TableDisplayOptions(nullptr) {}
  ~TableDisplayOptions() override;
  explicit PROTOBUF_CONSTEXPR TableDisplayOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TableDisplayOptions(const TableDisplayOptions& from);
  TableDisplayOptions(TableDisplayOptions&& from) noexcept
    : TableDisplayOptions() {
    *this = ::std::move(from);
  }

  inline TableDisplayOptions& operator=(const TableDisplayOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline TableDisplayOptions& operator=(TableDisplayOptions&& from) noexcept {
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
  static const TableDisplayOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const TableDisplayOptions* internal_default_instance() {
    return reinterpret_cast<const TableDisplayOptions*>(
               &_TableDisplayOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TableDisplayOptions& a, TableDisplayOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(TableDisplayOptions* other) {
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
  void UnsafeArenaSwap(TableDisplayOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TableDisplayOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TableDisplayOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TableDisplayOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TableDisplayOptions& from) {
    TableDisplayOptions::MergeImpl(*this, from);
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
  void InternalSwap(TableDisplayOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.dashboard.v1.TableDisplayOptions";
  }
  protected:
  explicit TableDisplayOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShownColumnsFieldNumber = 1,
  };
  // repeated string shown_columns = 1 [deprecated = true, (.google.api.field_behavior) = OPTIONAL];
  PROTOBUF_DEPRECATED int shown_columns_size() const;
  private:
  int _internal_shown_columns_size() const;
  public:
  PROTOBUF_DEPRECATED void clear_shown_columns();
  PROTOBUF_DEPRECATED const std::string& shown_columns(int index) const;
  PROTOBUF_DEPRECATED std::string* mutable_shown_columns(int index);
  PROTOBUF_DEPRECATED void set_shown_columns(int index, const std::string& value);
  PROTOBUF_DEPRECATED void set_shown_columns(int index, std::string&& value);
  PROTOBUF_DEPRECATED void set_shown_columns(int index, const char* value);
  PROTOBUF_DEPRECATED void set_shown_columns(int index, const char* value, size_t size);
  PROTOBUF_DEPRECATED std::string* add_shown_columns();
  PROTOBUF_DEPRECATED void add_shown_columns(const std::string& value);
  PROTOBUF_DEPRECATED void add_shown_columns(std::string&& value);
  PROTOBUF_DEPRECATED void add_shown_columns(const char* value);
  PROTOBUF_DEPRECATED void add_shown_columns(const char* value, size_t size);
  PROTOBUF_DEPRECATED const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& shown_columns() const;
  PROTOBUF_DEPRECATED ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_shown_columns();
  private:
  const std::string& _internal_shown_columns(int index) const;
  std::string* _internal_add_shown_columns();
  public:

  // @@protoc_insertion_point(class_scope:google.monitoring.dashboard.v1.TableDisplayOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> shown_columns_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TableDisplayOptions

// repeated string shown_columns = 1 [deprecated = true, (.google.api.field_behavior) = OPTIONAL];
inline int TableDisplayOptions::_internal_shown_columns_size() const {
  return _impl_.shown_columns_.size();
}
inline int TableDisplayOptions::shown_columns_size() const {
  return _internal_shown_columns_size();
}
inline void TableDisplayOptions::clear_shown_columns() {
  _impl_.shown_columns_.Clear();
}
inline std::string* TableDisplayOptions::add_shown_columns() {
  std::string* _s = _internal_add_shown_columns();
  // @@protoc_insertion_point(field_add_mutable:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
  return _s;
}
inline const std::string& TableDisplayOptions::_internal_shown_columns(int index) const {
  return _impl_.shown_columns_.Get(index);
}
inline const std::string& TableDisplayOptions::shown_columns(int index) const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
  return _internal_shown_columns(index);
}
inline std::string* TableDisplayOptions::mutable_shown_columns(int index) {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
  return _impl_.shown_columns_.Mutable(index);
}
inline void TableDisplayOptions::set_shown_columns(int index, const std::string& value) {
  _impl_.shown_columns_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::set_shown_columns(int index, std::string&& value) {
  _impl_.shown_columns_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::set_shown_columns(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.shown_columns_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::set_shown_columns(int index, const char* value, size_t size) {
  _impl_.shown_columns_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline std::string* TableDisplayOptions::_internal_add_shown_columns() {
  return _impl_.shown_columns_.Add();
}
inline void TableDisplayOptions::add_shown_columns(const std::string& value) {
  _impl_.shown_columns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::add_shown_columns(std::string&& value) {
  _impl_.shown_columns_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::add_shown_columns(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.shown_columns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline void TableDisplayOptions::add_shown_columns(const char* value, size_t size) {
  _impl_.shown_columns_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
TableDisplayOptions::shown_columns() const {
  // @@protoc_insertion_point(field_list:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
  return _impl_.shown_columns_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
TableDisplayOptions::mutable_shown_columns() {
  // @@protoc_insertion_point(field_mutable_list:google.monitoring.dashboard.v1.TableDisplayOptions.shown_columns)
  return &_impl_.shown_columns_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_5fdisplay_5foptions_2eproto
