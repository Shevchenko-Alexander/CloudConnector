// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/interval.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2finterval_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2finterval_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2finterval_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2finterval_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2finterval_2eproto;
namespace google {
namespace type {
class Interval;
struct IntervalDefaultTypeInternal;
extern IntervalDefaultTypeInternal _Interval_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::Interval* Arena::CreateMaybeMessage<::google::type::Interval>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class Interval final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.Interval) */ {
 public:
  inline Interval() : Interval(nullptr) {}
  ~Interval() override;
  explicit PROTOBUF_CONSTEXPR Interval(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Interval(const Interval& from);
  Interval(Interval&& from) noexcept
    : Interval() {
    *this = ::std::move(from);
  }

  inline Interval& operator=(const Interval& from) {
    CopyFrom(from);
    return *this;
  }
  inline Interval& operator=(Interval&& from) noexcept {
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
  static const Interval& default_instance() {
    return *internal_default_instance();
  }
  static inline const Interval* internal_default_instance() {
    return reinterpret_cast<const Interval*>(
               &_Interval_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Interval& a, Interval& b) {
    a.Swap(&b);
  }
  inline void Swap(Interval* other) {
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
  void UnsafeArenaSwap(Interval* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Interval* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Interval>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Interval& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Interval& from) {
    Interval::MergeImpl(*this, from);
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
  void InternalSwap(Interval* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.Interval";
  }
  protected:
  explicit Interval(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStartTimeFieldNumber = 1,
    kEndTimeFieldNumber = 2,
  };
  // .google.protobuf.Timestamp start_time = 1;
  bool has_start_time() const;
  private:
  bool _internal_has_start_time() const;
  public:
  void clear_start_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& start_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_start_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start_time();
  void set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start_time();
  public:
  void unsafe_arena_set_allocated_start_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start_time();

  // .google.protobuf.Timestamp end_time = 2;
  bool has_end_time() const;
  private:
  bool _internal_has_end_time() const;
  public:
  void clear_end_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& end_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_end_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end_time();
  void set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end_time();
  public:
  void unsafe_arena_set_allocated_end_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end_time();

  // @@protoc_insertion_point(class_scope:google.type.Interval)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2ftype_2finterval_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Interval

// .google.protobuf.Timestamp start_time = 1;
inline bool Interval::_internal_has_start_time() const {
  return this != internal_default_instance() && _impl_.start_time_ != nullptr;
}
inline bool Interval::has_start_time() const {
  return _internal_has_start_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Interval::_internal_start_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Interval::start_time() const {
  // @@protoc_insertion_point(field_get:google.type.Interval.start_time)
  return _internal_start_time();
}
inline void Interval::unsafe_arena_set_allocated_start_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  _impl_.start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.type.Interval.start_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::release_start_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::unsafe_arena_release_start_time() {
  // @@protoc_insertion_point(field_release:google.type.Interval.start_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::_internal_mutable_start_time() {
  
  if (_impl_.start_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_time_ = p;
  }
  return _impl_.start_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::mutable_start_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_time();
  // @@protoc_insertion_point(field_mutable:google.type.Interval.start_time)
  return _msg;
}
inline void Interval::set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  if (start_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time));
    if (message_arena != submessage_arena) {
      start_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:google.type.Interval.start_time)
}

// .google.protobuf.Timestamp end_time = 2;
inline bool Interval::_internal_has_end_time() const {
  return this != internal_default_instance() && _impl_.end_time_ != nullptr;
}
inline bool Interval::has_end_time() const {
  return _internal_has_end_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Interval::_internal_end_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.end_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Interval::end_time() const {
  // @@protoc_insertion_point(field_get:google.type.Interval.end_time)
  return _internal_end_time();
}
inline void Interval::unsafe_arena_set_allocated_end_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  _impl_.end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.type.Interval.end_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::release_end_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::unsafe_arena_release_end_time() {
  // @@protoc_insertion_point(field_release:google.type.Interval.end_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::_internal_mutable_end_time() {
  
  if (_impl_.end_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.end_time_ = p;
  }
  return _impl_.end_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Interval::mutable_end_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end_time();
  // @@protoc_insertion_point(field_mutable:google.type.Interval.end_time)
  return _msg;
}
inline void Interval::set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  if (end_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time));
    if (message_arena != submessage_arena) {
      end_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:google.type.Interval.end_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2finterval_2eproto
