// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/commit_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto;
namespace google {
namespace spanner {
namespace v1 {
class CommitResponse;
struct CommitResponseDefaultTypeInternal;
extern CommitResponseDefaultTypeInternal _CommitResponse_default_instance_;
class CommitResponse_CommitStats;
struct CommitResponse_CommitStatsDefaultTypeInternal;
extern CommitResponse_CommitStatsDefaultTypeInternal _CommitResponse_CommitStats_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::spanner::v1::CommitResponse* Arena::CreateMaybeMessage<::google::spanner::v1::CommitResponse>(Arena*);
template<> ::google::spanner::v1::CommitResponse_CommitStats* Arena::CreateMaybeMessage<::google::spanner::v1::CommitResponse_CommitStats>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace spanner {
namespace v1 {

// ===================================================================

class CommitResponse_CommitStats final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.CommitResponse.CommitStats) */ {
 public:
  inline CommitResponse_CommitStats() : CommitResponse_CommitStats(nullptr) {}
  ~CommitResponse_CommitStats() override;
  explicit PROTOBUF_CONSTEXPR CommitResponse_CommitStats(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommitResponse_CommitStats(const CommitResponse_CommitStats& from);
  CommitResponse_CommitStats(CommitResponse_CommitStats&& from) noexcept
    : CommitResponse_CommitStats() {
    *this = ::std::move(from);
  }

  inline CommitResponse_CommitStats& operator=(const CommitResponse_CommitStats& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommitResponse_CommitStats& operator=(CommitResponse_CommitStats&& from) noexcept {
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
  static const CommitResponse_CommitStats& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommitResponse_CommitStats* internal_default_instance() {
    return reinterpret_cast<const CommitResponse_CommitStats*>(
               &_CommitResponse_CommitStats_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommitResponse_CommitStats& a, CommitResponse_CommitStats& b) {
    a.Swap(&b);
  }
  inline void Swap(CommitResponse_CommitStats* other) {
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
  void UnsafeArenaSwap(CommitResponse_CommitStats* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommitResponse_CommitStats* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommitResponse_CommitStats>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommitResponse_CommitStats& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommitResponse_CommitStats& from) {
    CommitResponse_CommitStats::MergeImpl(*this, from);
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
  void InternalSwap(CommitResponse_CommitStats* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.spanner.v1.CommitResponse.CommitStats";
  }
  protected:
  explicit CommitResponse_CommitStats(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMutationCountFieldNumber = 1,
  };
  // int64 mutation_count = 1;
  void clear_mutation_count();
  int64_t mutation_count() const;
  void set_mutation_count(int64_t value);
  private:
  int64_t _internal_mutation_count() const;
  void _internal_set_mutation_count(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:google.spanner.v1.CommitResponse.CommitStats)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t mutation_count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto;
};
// -------------------------------------------------------------------

class CommitResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.CommitResponse) */ {
 public:
  inline CommitResponse() : CommitResponse(nullptr) {}
  ~CommitResponse() override;
  explicit PROTOBUF_CONSTEXPR CommitResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommitResponse(const CommitResponse& from);
  CommitResponse(CommitResponse&& from) noexcept
    : CommitResponse() {
    *this = ::std::move(from);
  }

  inline CommitResponse& operator=(const CommitResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommitResponse& operator=(CommitResponse&& from) noexcept {
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
  static const CommitResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommitResponse* internal_default_instance() {
    return reinterpret_cast<const CommitResponse*>(
               &_CommitResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CommitResponse& a, CommitResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(CommitResponse* other) {
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
  void UnsafeArenaSwap(CommitResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommitResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommitResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommitResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommitResponse& from) {
    CommitResponse::MergeImpl(*this, from);
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
  void InternalSwap(CommitResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.spanner.v1.CommitResponse";
  }
  protected:
  explicit CommitResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CommitResponse_CommitStats CommitStats;

  // accessors -------------------------------------------------------

  enum : int {
    kCommitTimestampFieldNumber = 1,
    kCommitStatsFieldNumber = 2,
  };
  // .google.protobuf.Timestamp commit_timestamp = 1;
  bool has_commit_timestamp() const;
  private:
  bool _internal_has_commit_timestamp() const;
  public:
  void clear_commit_timestamp();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& commit_timestamp() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_commit_timestamp();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_commit_timestamp();
  void set_allocated_commit_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* commit_timestamp);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_commit_timestamp() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_commit_timestamp();
  public:
  void unsafe_arena_set_allocated_commit_timestamp(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* commit_timestamp);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_commit_timestamp();

  // .google.spanner.v1.CommitResponse.CommitStats commit_stats = 2;
  bool has_commit_stats() const;
  private:
  bool _internal_has_commit_stats() const;
  public:
  void clear_commit_stats();
  const ::google::spanner::v1::CommitResponse_CommitStats& commit_stats() const;
  PROTOBUF_NODISCARD ::google::spanner::v1::CommitResponse_CommitStats* release_commit_stats();
  ::google::spanner::v1::CommitResponse_CommitStats* mutable_commit_stats();
  void set_allocated_commit_stats(::google::spanner::v1::CommitResponse_CommitStats* commit_stats);
  private:
  const ::google::spanner::v1::CommitResponse_CommitStats& _internal_commit_stats() const;
  ::google::spanner::v1::CommitResponse_CommitStats* _internal_mutable_commit_stats();
  public:
  void unsafe_arena_set_allocated_commit_stats(
      ::google::spanner::v1::CommitResponse_CommitStats* commit_stats);
  ::google::spanner::v1::CommitResponse_CommitStats* unsafe_arena_release_commit_stats();

  // @@protoc_insertion_point(class_scope:google.spanner.v1.CommitResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::Timestamp* commit_timestamp_;
    ::google::spanner::v1::CommitResponse_CommitStats* commit_stats_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommitResponse_CommitStats

// int64 mutation_count = 1;
inline void CommitResponse_CommitStats::clear_mutation_count() {
  _impl_.mutation_count_ = int64_t{0};
}
inline int64_t CommitResponse_CommitStats::_internal_mutation_count() const {
  return _impl_.mutation_count_;
}
inline int64_t CommitResponse_CommitStats::mutation_count() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.CommitResponse.CommitStats.mutation_count)
  return _internal_mutation_count();
}
inline void CommitResponse_CommitStats::_internal_set_mutation_count(int64_t value) {
  
  _impl_.mutation_count_ = value;
}
inline void CommitResponse_CommitStats::set_mutation_count(int64_t value) {
  _internal_set_mutation_count(value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.CommitResponse.CommitStats.mutation_count)
}

// -------------------------------------------------------------------

// CommitResponse

// .google.protobuf.Timestamp commit_timestamp = 1;
inline bool CommitResponse::_internal_has_commit_timestamp() const {
  return this != internal_default_instance() && _impl_.commit_timestamp_ != nullptr;
}
inline bool CommitResponse::has_commit_timestamp() const {
  return _internal_has_commit_timestamp();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CommitResponse::_internal_commit_timestamp() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.commit_timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CommitResponse::commit_timestamp() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.CommitResponse.commit_timestamp)
  return _internal_commit_timestamp();
}
inline void CommitResponse::unsafe_arena_set_allocated_commit_timestamp(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* commit_timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.commit_timestamp_);
  }
  _impl_.commit_timestamp_ = commit_timestamp;
  if (commit_timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.CommitResponse.commit_timestamp)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CommitResponse::release_commit_timestamp() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.commit_timestamp_;
  _impl_.commit_timestamp_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CommitResponse::unsafe_arena_release_commit_timestamp() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.CommitResponse.commit_timestamp)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.commit_timestamp_;
  _impl_.commit_timestamp_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CommitResponse::_internal_mutable_commit_timestamp() {
  
  if (_impl_.commit_timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.commit_timestamp_ = p;
  }
  return _impl_.commit_timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CommitResponse::mutable_commit_timestamp() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_commit_timestamp();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.CommitResponse.commit_timestamp)
  return _msg;
}
inline void CommitResponse::set_allocated_commit_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* commit_timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.commit_timestamp_);
  }
  if (commit_timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(commit_timestamp));
    if (message_arena != submessage_arena) {
      commit_timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, commit_timestamp, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.commit_timestamp_ = commit_timestamp;
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.CommitResponse.commit_timestamp)
}

// .google.spanner.v1.CommitResponse.CommitStats commit_stats = 2;
inline bool CommitResponse::_internal_has_commit_stats() const {
  return this != internal_default_instance() && _impl_.commit_stats_ != nullptr;
}
inline bool CommitResponse::has_commit_stats() const {
  return _internal_has_commit_stats();
}
inline void CommitResponse::clear_commit_stats() {
  if (GetArenaForAllocation() == nullptr && _impl_.commit_stats_ != nullptr) {
    delete _impl_.commit_stats_;
  }
  _impl_.commit_stats_ = nullptr;
}
inline const ::google::spanner::v1::CommitResponse_CommitStats& CommitResponse::_internal_commit_stats() const {
  const ::google::spanner::v1::CommitResponse_CommitStats* p = _impl_.commit_stats_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::spanner::v1::CommitResponse_CommitStats&>(
      ::google::spanner::v1::_CommitResponse_CommitStats_default_instance_);
}
inline const ::google::spanner::v1::CommitResponse_CommitStats& CommitResponse::commit_stats() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.CommitResponse.commit_stats)
  return _internal_commit_stats();
}
inline void CommitResponse::unsafe_arena_set_allocated_commit_stats(
    ::google::spanner::v1::CommitResponse_CommitStats* commit_stats) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.commit_stats_);
  }
  _impl_.commit_stats_ = commit_stats;
  if (commit_stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.CommitResponse.commit_stats)
}
inline ::google::spanner::v1::CommitResponse_CommitStats* CommitResponse::release_commit_stats() {
  
  ::google::spanner::v1::CommitResponse_CommitStats* temp = _impl_.commit_stats_;
  _impl_.commit_stats_ = nullptr;
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
inline ::google::spanner::v1::CommitResponse_CommitStats* CommitResponse::unsafe_arena_release_commit_stats() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.CommitResponse.commit_stats)
  
  ::google::spanner::v1::CommitResponse_CommitStats* temp = _impl_.commit_stats_;
  _impl_.commit_stats_ = nullptr;
  return temp;
}
inline ::google::spanner::v1::CommitResponse_CommitStats* CommitResponse::_internal_mutable_commit_stats() {
  
  if (_impl_.commit_stats_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::spanner::v1::CommitResponse_CommitStats>(GetArenaForAllocation());
    _impl_.commit_stats_ = p;
  }
  return _impl_.commit_stats_;
}
inline ::google::spanner::v1::CommitResponse_CommitStats* CommitResponse::mutable_commit_stats() {
  ::google::spanner::v1::CommitResponse_CommitStats* _msg = _internal_mutable_commit_stats();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.CommitResponse.commit_stats)
  return _msg;
}
inline void CommitResponse::set_allocated_commit_stats(::google::spanner::v1::CommitResponse_CommitStats* commit_stats) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.commit_stats_;
  }
  if (commit_stats) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(commit_stats);
    if (message_arena != submessage_arena) {
      commit_stats = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, commit_stats, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.commit_stats_ = commit_stats;
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.CommitResponse.commit_stats)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace spanner
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fcommit_5fresponse_2eproto
