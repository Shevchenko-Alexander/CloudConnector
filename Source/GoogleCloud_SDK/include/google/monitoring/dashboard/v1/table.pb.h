// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/dashboard/v1/table.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto

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
#include "google/monitoring/dashboard/v1/metrics.pb.h"
#include "google/monitoring/dashboard/v1/table_display_options.pb.h"
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto;
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {
class TimeSeriesTable;
struct TimeSeriesTableDefaultTypeInternal;
extern TimeSeriesTableDefaultTypeInternal _TimeSeriesTable_default_instance_;
class TimeSeriesTable_TableDataSet;
struct TimeSeriesTable_TableDataSetDefaultTypeInternal;
extern TimeSeriesTable_TableDataSetDefaultTypeInternal _TimeSeriesTable_TableDataSet_default_instance_;
}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::monitoring::dashboard::v1::TimeSeriesTable* Arena::CreateMaybeMessage<::google::monitoring::dashboard::v1::TimeSeriesTable>(Arena*);
template<> ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* Arena::CreateMaybeMessage<::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {

// ===================================================================

class TimeSeriesTable_TableDataSet final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet) */ {
 public:
  inline TimeSeriesTable_TableDataSet() : TimeSeriesTable_TableDataSet(nullptr) {}
  ~TimeSeriesTable_TableDataSet() override;
  explicit PROTOBUF_CONSTEXPR TimeSeriesTable_TableDataSet(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimeSeriesTable_TableDataSet(const TimeSeriesTable_TableDataSet& from);
  TimeSeriesTable_TableDataSet(TimeSeriesTable_TableDataSet&& from) noexcept
    : TimeSeriesTable_TableDataSet() {
    *this = ::std::move(from);
  }

  inline TimeSeriesTable_TableDataSet& operator=(const TimeSeriesTable_TableDataSet& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimeSeriesTable_TableDataSet& operator=(TimeSeriesTable_TableDataSet&& from) noexcept {
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
  static const TimeSeriesTable_TableDataSet& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimeSeriesTable_TableDataSet* internal_default_instance() {
    return reinterpret_cast<const TimeSeriesTable_TableDataSet*>(
               &_TimeSeriesTable_TableDataSet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TimeSeriesTable_TableDataSet& a, TimeSeriesTable_TableDataSet& b) {
    a.Swap(&b);
  }
  inline void Swap(TimeSeriesTable_TableDataSet* other) {
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
  void UnsafeArenaSwap(TimeSeriesTable_TableDataSet* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TimeSeriesTable_TableDataSet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TimeSeriesTable_TableDataSet>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TimeSeriesTable_TableDataSet& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TimeSeriesTable_TableDataSet& from) {
    TimeSeriesTable_TableDataSet::MergeImpl(*this, from);
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
  void InternalSwap(TimeSeriesTable_TableDataSet* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet";
  }
  protected:
  explicit TimeSeriesTable_TableDataSet(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTableTemplateFieldNumber = 2,
    kTimeSeriesQueryFieldNumber = 1,
    kMinAlignmentPeriodFieldNumber = 3,
    kTableDisplayOptionsFieldNumber = 4,
  };
  // string table_template = 2 [(.google.api.field_behavior) = OPTIONAL];
  void clear_table_template();
  const std::string& table_template() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_table_template(ArgT0&& arg0, ArgT... args);
  std::string* mutable_table_template();
  PROTOBUF_NODISCARD std::string* release_table_template();
  void set_allocated_table_template(std::string* table_template);
  private:
  const std::string& _internal_table_template() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_table_template(const std::string& value);
  std::string* _internal_mutable_table_template();
  public:

  // .google.monitoring.dashboard.v1.TimeSeriesQuery time_series_query = 1 [(.google.api.field_behavior) = REQUIRED];
  bool has_time_series_query() const;
  private:
  bool _internal_has_time_series_query() const;
  public:
  void clear_time_series_query();
  const ::google::monitoring::dashboard::v1::TimeSeriesQuery& time_series_query() const;
  PROTOBUF_NODISCARD ::google::monitoring::dashboard::v1::TimeSeriesQuery* release_time_series_query();
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* mutable_time_series_query();
  void set_allocated_time_series_query(::google::monitoring::dashboard::v1::TimeSeriesQuery* time_series_query);
  private:
  const ::google::monitoring::dashboard::v1::TimeSeriesQuery& _internal_time_series_query() const;
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* _internal_mutable_time_series_query();
  public:
  void unsafe_arena_set_allocated_time_series_query(
      ::google::monitoring::dashboard::v1::TimeSeriesQuery* time_series_query);
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* unsafe_arena_release_time_series_query();

  // .google.protobuf.Duration min_alignment_period = 3 [(.google.api.field_behavior) = OPTIONAL];
  bool has_min_alignment_period() const;
  private:
  bool _internal_has_min_alignment_period() const;
  public:
  void clear_min_alignment_period();
  const ::PROTOBUF_NAMESPACE_ID::Duration& min_alignment_period() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_min_alignment_period();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_min_alignment_period();
  void set_allocated_min_alignment_period(::PROTOBUF_NAMESPACE_ID::Duration* min_alignment_period);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_min_alignment_period() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_min_alignment_period();
  public:
  void unsafe_arena_set_allocated_min_alignment_period(
      ::PROTOBUF_NAMESPACE_ID::Duration* min_alignment_period);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_min_alignment_period();

  // .google.monitoring.dashboard.v1.TableDisplayOptions table_display_options = 4 [(.google.api.field_behavior) = OPTIONAL];
  bool has_table_display_options() const;
  private:
  bool _internal_has_table_display_options() const;
  public:
  void clear_table_display_options();
  const ::google::monitoring::dashboard::v1::TableDisplayOptions& table_display_options() const;
  PROTOBUF_NODISCARD ::google::monitoring::dashboard::v1::TableDisplayOptions* release_table_display_options();
  ::google::monitoring::dashboard::v1::TableDisplayOptions* mutable_table_display_options();
  void set_allocated_table_display_options(::google::monitoring::dashboard::v1::TableDisplayOptions* table_display_options);
  private:
  const ::google::monitoring::dashboard::v1::TableDisplayOptions& _internal_table_display_options() const;
  ::google::monitoring::dashboard::v1::TableDisplayOptions* _internal_mutable_table_display_options();
  public:
  void unsafe_arena_set_allocated_table_display_options(
      ::google::monitoring::dashboard::v1::TableDisplayOptions* table_display_options);
  ::google::monitoring::dashboard::v1::TableDisplayOptions* unsafe_arena_release_table_display_options();

  // @@protoc_insertion_point(class_scope:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr table_template_;
    ::google::monitoring::dashboard::v1::TimeSeriesQuery* time_series_query_;
    ::PROTOBUF_NAMESPACE_ID::Duration* min_alignment_period_;
    ::google::monitoring::dashboard::v1::TableDisplayOptions* table_display_options_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto;
};
// -------------------------------------------------------------------

class TimeSeriesTable final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.dashboard.v1.TimeSeriesTable) */ {
 public:
  inline TimeSeriesTable() : TimeSeriesTable(nullptr) {}
  ~TimeSeriesTable() override;
  explicit PROTOBUF_CONSTEXPR TimeSeriesTable(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimeSeriesTable(const TimeSeriesTable& from);
  TimeSeriesTable(TimeSeriesTable&& from) noexcept
    : TimeSeriesTable() {
    *this = ::std::move(from);
  }

  inline TimeSeriesTable& operator=(const TimeSeriesTable& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimeSeriesTable& operator=(TimeSeriesTable&& from) noexcept {
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
  static const TimeSeriesTable& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimeSeriesTable* internal_default_instance() {
    return reinterpret_cast<const TimeSeriesTable*>(
               &_TimeSeriesTable_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TimeSeriesTable& a, TimeSeriesTable& b) {
    a.Swap(&b);
  }
  inline void Swap(TimeSeriesTable* other) {
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
  void UnsafeArenaSwap(TimeSeriesTable* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TimeSeriesTable* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TimeSeriesTable>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TimeSeriesTable& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TimeSeriesTable& from) {
    TimeSeriesTable::MergeImpl(*this, from);
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
  void InternalSwap(TimeSeriesTable* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.dashboard.v1.TimeSeriesTable";
  }
  protected:
  explicit TimeSeriesTable(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef TimeSeriesTable_TableDataSet TableDataSet;

  // accessors -------------------------------------------------------

  enum : int {
    kDataSetsFieldNumber = 1,
  };
  // repeated .google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet data_sets = 1 [(.google.api.field_behavior) = REQUIRED];
  int data_sets_size() const;
  private:
  int _internal_data_sets_size() const;
  public:
  void clear_data_sets();
  ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* mutable_data_sets(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet >*
      mutable_data_sets();
  private:
  const ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet& _internal_data_sets(int index) const;
  ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* _internal_add_data_sets();
  public:
  const ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet& data_sets(int index) const;
  ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* add_data_sets();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet >&
      data_sets() const;

  // @@protoc_insertion_point(class_scope:google.monitoring.dashboard.v1.TimeSeriesTable)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet > data_sets_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimeSeriesTable_TableDataSet

// .google.monitoring.dashboard.v1.TimeSeriesQuery time_series_query = 1 [(.google.api.field_behavior) = REQUIRED];
inline bool TimeSeriesTable_TableDataSet::_internal_has_time_series_query() const {
  return this != internal_default_instance() && _impl_.time_series_query_ != nullptr;
}
inline bool TimeSeriesTable_TableDataSet::has_time_series_query() const {
  return _internal_has_time_series_query();
}
inline const ::google::monitoring::dashboard::v1::TimeSeriesQuery& TimeSeriesTable_TableDataSet::_internal_time_series_query() const {
  const ::google::monitoring::dashboard::v1::TimeSeriesQuery* p = _impl_.time_series_query_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::monitoring::dashboard::v1::TimeSeriesQuery&>(
      ::google::monitoring::dashboard::v1::_TimeSeriesQuery_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::TimeSeriesQuery& TimeSeriesTable_TableDataSet::time_series_query() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.time_series_query)
  return _internal_time_series_query();
}
inline void TimeSeriesTable_TableDataSet::unsafe_arena_set_allocated_time_series_query(
    ::google::monitoring::dashboard::v1::TimeSeriesQuery* time_series_query) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.time_series_query_);
  }
  _impl_.time_series_query_ = time_series_query;
  if (time_series_query) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.time_series_query)
}
inline ::google::monitoring::dashboard::v1::TimeSeriesQuery* TimeSeriesTable_TableDataSet::release_time_series_query() {
  
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* temp = _impl_.time_series_query_;
  _impl_.time_series_query_ = nullptr;
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
inline ::google::monitoring::dashboard::v1::TimeSeriesQuery* TimeSeriesTable_TableDataSet::unsafe_arena_release_time_series_query() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.time_series_query)
  
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* temp = _impl_.time_series_query_;
  _impl_.time_series_query_ = nullptr;
  return temp;
}
inline ::google::monitoring::dashboard::v1::TimeSeriesQuery* TimeSeriesTable_TableDataSet::_internal_mutable_time_series_query() {
  
  if (_impl_.time_series_query_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::monitoring::dashboard::v1::TimeSeriesQuery>(GetArenaForAllocation());
    _impl_.time_series_query_ = p;
  }
  return _impl_.time_series_query_;
}
inline ::google::monitoring::dashboard::v1::TimeSeriesQuery* TimeSeriesTable_TableDataSet::mutable_time_series_query() {
  ::google::monitoring::dashboard::v1::TimeSeriesQuery* _msg = _internal_mutable_time_series_query();
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.time_series_query)
  return _msg;
}
inline void TimeSeriesTable_TableDataSet::set_allocated_time_series_query(::google::monitoring::dashboard::v1::TimeSeriesQuery* time_series_query) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.time_series_query_);
  }
  if (time_series_query) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_series_query));
    if (message_arena != submessage_arena) {
      time_series_query = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time_series_query, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.time_series_query_ = time_series_query;
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.time_series_query)
}

// string table_template = 2 [(.google.api.field_behavior) = OPTIONAL];
inline void TimeSeriesTable_TableDataSet::clear_table_template() {
  _impl_.table_template_.ClearToEmpty();
}
inline const std::string& TimeSeriesTable_TableDataSet::table_template() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_template)
  return _internal_table_template();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TimeSeriesTable_TableDataSet::set_table_template(ArgT0&& arg0, ArgT... args) {
 
 _impl_.table_template_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_template)
}
inline std::string* TimeSeriesTable_TableDataSet::mutable_table_template() {
  std::string* _s = _internal_mutable_table_template();
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_template)
  return _s;
}
inline const std::string& TimeSeriesTable_TableDataSet::_internal_table_template() const {
  return _impl_.table_template_.Get();
}
inline void TimeSeriesTable_TableDataSet::_internal_set_table_template(const std::string& value) {
  
  _impl_.table_template_.Set(value, GetArenaForAllocation());
}
inline std::string* TimeSeriesTable_TableDataSet::_internal_mutable_table_template() {
  
  return _impl_.table_template_.Mutable(GetArenaForAllocation());
}
inline std::string* TimeSeriesTable_TableDataSet::release_table_template() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_template)
  return _impl_.table_template_.Release();
}
inline void TimeSeriesTable_TableDataSet::set_allocated_table_template(std::string* table_template) {
  if (table_template != nullptr) {
    
  } else {
    
  }
  _impl_.table_template_.SetAllocated(table_template, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.table_template_.IsDefault()) {
    _impl_.table_template_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_template)
}

// .google.protobuf.Duration min_alignment_period = 3 [(.google.api.field_behavior) = OPTIONAL];
inline bool TimeSeriesTable_TableDataSet::_internal_has_min_alignment_period() const {
  return this != internal_default_instance() && _impl_.min_alignment_period_ != nullptr;
}
inline bool TimeSeriesTable_TableDataSet::has_min_alignment_period() const {
  return _internal_has_min_alignment_period();
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& TimeSeriesTable_TableDataSet::_internal_min_alignment_period() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.min_alignment_period_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& TimeSeriesTable_TableDataSet::min_alignment_period() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.min_alignment_period)
  return _internal_min_alignment_period();
}
inline void TimeSeriesTable_TableDataSet::unsafe_arena_set_allocated_min_alignment_period(
    ::PROTOBUF_NAMESPACE_ID::Duration* min_alignment_period) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.min_alignment_period_);
  }
  _impl_.min_alignment_period_ = min_alignment_period;
  if (min_alignment_period) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.min_alignment_period)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* TimeSeriesTable_TableDataSet::release_min_alignment_period() {
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.min_alignment_period_;
  _impl_.min_alignment_period_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Duration* TimeSeriesTable_TableDataSet::unsafe_arena_release_min_alignment_period() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.min_alignment_period)
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.min_alignment_period_;
  _impl_.min_alignment_period_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* TimeSeriesTable_TableDataSet::_internal_mutable_min_alignment_period() {
  
  if (_impl_.min_alignment_period_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.min_alignment_period_ = p;
  }
  return _impl_.min_alignment_period_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* TimeSeriesTable_TableDataSet::mutable_min_alignment_period() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_min_alignment_period();
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.min_alignment_period)
  return _msg;
}
inline void TimeSeriesTable_TableDataSet::set_allocated_min_alignment_period(::PROTOBUF_NAMESPACE_ID::Duration* min_alignment_period) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.min_alignment_period_);
  }
  if (min_alignment_period) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(min_alignment_period));
    if (message_arena != submessage_arena) {
      min_alignment_period = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, min_alignment_period, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.min_alignment_period_ = min_alignment_period;
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.min_alignment_period)
}

// .google.monitoring.dashboard.v1.TableDisplayOptions table_display_options = 4 [(.google.api.field_behavior) = OPTIONAL];
inline bool TimeSeriesTable_TableDataSet::_internal_has_table_display_options() const {
  return this != internal_default_instance() && _impl_.table_display_options_ != nullptr;
}
inline bool TimeSeriesTable_TableDataSet::has_table_display_options() const {
  return _internal_has_table_display_options();
}
inline const ::google::monitoring::dashboard::v1::TableDisplayOptions& TimeSeriesTable_TableDataSet::_internal_table_display_options() const {
  const ::google::monitoring::dashboard::v1::TableDisplayOptions* p = _impl_.table_display_options_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::monitoring::dashboard::v1::TableDisplayOptions&>(
      ::google::monitoring::dashboard::v1::_TableDisplayOptions_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::TableDisplayOptions& TimeSeriesTable_TableDataSet::table_display_options() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_display_options)
  return _internal_table_display_options();
}
inline void TimeSeriesTable_TableDataSet::unsafe_arena_set_allocated_table_display_options(
    ::google::monitoring::dashboard::v1::TableDisplayOptions* table_display_options) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.table_display_options_);
  }
  _impl_.table_display_options_ = table_display_options;
  if (table_display_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_display_options)
}
inline ::google::monitoring::dashboard::v1::TableDisplayOptions* TimeSeriesTable_TableDataSet::release_table_display_options() {
  
  ::google::monitoring::dashboard::v1::TableDisplayOptions* temp = _impl_.table_display_options_;
  _impl_.table_display_options_ = nullptr;
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
inline ::google::monitoring::dashboard::v1::TableDisplayOptions* TimeSeriesTable_TableDataSet::unsafe_arena_release_table_display_options() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_display_options)
  
  ::google::monitoring::dashboard::v1::TableDisplayOptions* temp = _impl_.table_display_options_;
  _impl_.table_display_options_ = nullptr;
  return temp;
}
inline ::google::monitoring::dashboard::v1::TableDisplayOptions* TimeSeriesTable_TableDataSet::_internal_mutable_table_display_options() {
  
  if (_impl_.table_display_options_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::monitoring::dashboard::v1::TableDisplayOptions>(GetArenaForAllocation());
    _impl_.table_display_options_ = p;
  }
  return _impl_.table_display_options_;
}
inline ::google::monitoring::dashboard::v1::TableDisplayOptions* TimeSeriesTable_TableDataSet::mutable_table_display_options() {
  ::google::monitoring::dashboard::v1::TableDisplayOptions* _msg = _internal_mutable_table_display_options();
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_display_options)
  return _msg;
}
inline void TimeSeriesTable_TableDataSet::set_allocated_table_display_options(::google::monitoring::dashboard::v1::TableDisplayOptions* table_display_options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.table_display_options_);
  }
  if (table_display_options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(table_display_options));
    if (message_arena != submessage_arena) {
      table_display_options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, table_display_options, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.table_display_options_ = table_display_options;
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet.table_display_options)
}

// -------------------------------------------------------------------

// TimeSeriesTable

// repeated .google.monitoring.dashboard.v1.TimeSeriesTable.TableDataSet data_sets = 1 [(.google.api.field_behavior) = REQUIRED];
inline int TimeSeriesTable::_internal_data_sets_size() const {
  return _impl_.data_sets_.size();
}
inline int TimeSeriesTable::data_sets_size() const {
  return _internal_data_sets_size();
}
inline void TimeSeriesTable::clear_data_sets() {
  _impl_.data_sets_.Clear();
}
inline ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* TimeSeriesTable::mutable_data_sets(int index) {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.TimeSeriesTable.data_sets)
  return _impl_.data_sets_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet >*
TimeSeriesTable::mutable_data_sets() {
  // @@protoc_insertion_point(field_mutable_list:google.monitoring.dashboard.v1.TimeSeriesTable.data_sets)
  return &_impl_.data_sets_;
}
inline const ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet& TimeSeriesTable::_internal_data_sets(int index) const {
  return _impl_.data_sets_.Get(index);
}
inline const ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet& TimeSeriesTable::data_sets(int index) const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.TimeSeriesTable.data_sets)
  return _internal_data_sets(index);
}
inline ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* TimeSeriesTable::_internal_add_data_sets() {
  return _impl_.data_sets_.Add();
}
inline ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* TimeSeriesTable::add_data_sets() {
  ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet* _add = _internal_add_data_sets();
  // @@protoc_insertion_point(field_add:google.monitoring.dashboard.v1.TimeSeriesTable.data_sets)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::monitoring::dashboard::v1::TimeSeriesTable_TableDataSet >&
TimeSeriesTable::data_sets() const {
  // @@protoc_insertion_point(field_list:google.monitoring.dashboard.v1.TimeSeriesTable.data_sets)
  return _impl_.data_sets_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftable_2eproto
