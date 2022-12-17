// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/keys.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fkeys_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fkeys_2eproto

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
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fspanner_2fv1_2fkeys_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fspanner_2fv1_2fkeys_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fspanner_2fv1_2fkeys_2eproto;
namespace google {
namespace spanner {
namespace v1 {
class KeyRange;
struct KeyRangeDefaultTypeInternal;
extern KeyRangeDefaultTypeInternal _KeyRange_default_instance_;
class KeySet;
struct KeySetDefaultTypeInternal;
extern KeySetDefaultTypeInternal _KeySet_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::spanner::v1::KeyRange* Arena::CreateMaybeMessage<::google::spanner::v1::KeyRange>(Arena*);
template<> ::google::spanner::v1::KeySet* Arena::CreateMaybeMessage<::google::spanner::v1::KeySet>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace spanner {
namespace v1 {

// ===================================================================

class KeyRange final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.KeyRange) */ {
 public:
  inline KeyRange() : KeyRange(nullptr) {}
  ~KeyRange() override;
  explicit PROTOBUF_CONSTEXPR KeyRange(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KeyRange(const KeyRange& from);
  KeyRange(KeyRange&& from) noexcept
    : KeyRange() {
    *this = ::std::move(from);
  }

  inline KeyRange& operator=(const KeyRange& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeyRange& operator=(KeyRange&& from) noexcept {
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
  static const KeyRange& default_instance() {
    return *internal_default_instance();
  }
  enum StartKeyTypeCase {
    kStartClosed = 1,
    kStartOpen = 2,
    START_KEY_TYPE_NOT_SET = 0,
  };

  enum EndKeyTypeCase {
    kEndClosed = 3,
    kEndOpen = 4,
    END_KEY_TYPE_NOT_SET = 0,
  };

  static inline const KeyRange* internal_default_instance() {
    return reinterpret_cast<const KeyRange*>(
               &_KeyRange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KeyRange& a, KeyRange& b) {
    a.Swap(&b);
  }
  inline void Swap(KeyRange* other) {
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
  void UnsafeArenaSwap(KeyRange* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KeyRange* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KeyRange>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const KeyRange& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const KeyRange& from) {
    KeyRange::MergeImpl(*this, from);
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
  void InternalSwap(KeyRange* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.spanner.v1.KeyRange";
  }
  protected:
  explicit KeyRange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStartClosedFieldNumber = 1,
    kStartOpenFieldNumber = 2,
    kEndClosedFieldNumber = 3,
    kEndOpenFieldNumber = 4,
  };
  // .google.protobuf.ListValue start_closed = 1;
  bool has_start_closed() const;
  private:
  bool _internal_has_start_closed() const;
  public:
  void clear_start_closed();
  const ::PROTOBUF_NAMESPACE_ID::ListValue& start_closed() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::ListValue* release_start_closed();
  ::PROTOBUF_NAMESPACE_ID::ListValue* mutable_start_closed();
  void set_allocated_start_closed(::PROTOBUF_NAMESPACE_ID::ListValue* start_closed);
  private:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& _internal_start_closed() const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* _internal_mutable_start_closed();
  public:
  void unsafe_arena_set_allocated_start_closed(
      ::PROTOBUF_NAMESPACE_ID::ListValue* start_closed);
  ::PROTOBUF_NAMESPACE_ID::ListValue* unsafe_arena_release_start_closed();

  // .google.protobuf.ListValue start_open = 2;
  bool has_start_open() const;
  private:
  bool _internal_has_start_open() const;
  public:
  void clear_start_open();
  const ::PROTOBUF_NAMESPACE_ID::ListValue& start_open() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::ListValue* release_start_open();
  ::PROTOBUF_NAMESPACE_ID::ListValue* mutable_start_open();
  void set_allocated_start_open(::PROTOBUF_NAMESPACE_ID::ListValue* start_open);
  private:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& _internal_start_open() const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* _internal_mutable_start_open();
  public:
  void unsafe_arena_set_allocated_start_open(
      ::PROTOBUF_NAMESPACE_ID::ListValue* start_open);
  ::PROTOBUF_NAMESPACE_ID::ListValue* unsafe_arena_release_start_open();

  // .google.protobuf.ListValue end_closed = 3;
  bool has_end_closed() const;
  private:
  bool _internal_has_end_closed() const;
  public:
  void clear_end_closed();
  const ::PROTOBUF_NAMESPACE_ID::ListValue& end_closed() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::ListValue* release_end_closed();
  ::PROTOBUF_NAMESPACE_ID::ListValue* mutable_end_closed();
  void set_allocated_end_closed(::PROTOBUF_NAMESPACE_ID::ListValue* end_closed);
  private:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& _internal_end_closed() const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* _internal_mutable_end_closed();
  public:
  void unsafe_arena_set_allocated_end_closed(
      ::PROTOBUF_NAMESPACE_ID::ListValue* end_closed);
  ::PROTOBUF_NAMESPACE_ID::ListValue* unsafe_arena_release_end_closed();

  // .google.protobuf.ListValue end_open = 4;
  bool has_end_open() const;
  private:
  bool _internal_has_end_open() const;
  public:
  void clear_end_open();
  const ::PROTOBUF_NAMESPACE_ID::ListValue& end_open() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::ListValue* release_end_open();
  ::PROTOBUF_NAMESPACE_ID::ListValue* mutable_end_open();
  void set_allocated_end_open(::PROTOBUF_NAMESPACE_ID::ListValue* end_open);
  private:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& _internal_end_open() const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* _internal_mutable_end_open();
  public:
  void unsafe_arena_set_allocated_end_open(
      ::PROTOBUF_NAMESPACE_ID::ListValue* end_open);
  ::PROTOBUF_NAMESPACE_ID::ListValue* unsafe_arena_release_end_open();

  void clear_start_key_type();
  StartKeyTypeCase start_key_type_case() const;
  void clear_end_key_type();
  EndKeyTypeCase end_key_type_case() const;
  // @@protoc_insertion_point(class_scope:google.spanner.v1.KeyRange)
 private:
  class _Internal;
  void set_has_start_closed();
  void set_has_start_open();
  void set_has_end_closed();
  void set_has_end_open();

  inline bool has_start_key_type() const;
  inline void clear_has_start_key_type();

  inline bool has_end_key_type() const;
  inline void clear_has_end_key_type();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union StartKeyTypeUnion {
      constexpr StartKeyTypeUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::ListValue* start_closed_;
      ::PROTOBUF_NAMESPACE_ID::ListValue* start_open_;
    } start_key_type_;
    union EndKeyTypeUnion {
      constexpr EndKeyTypeUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::ListValue* end_closed_;
      ::PROTOBUF_NAMESPACE_ID::ListValue* end_open_;
    } end_key_type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[2];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fspanner_2fv1_2fkeys_2eproto;
};
// -------------------------------------------------------------------

class KeySet final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.KeySet) */ {
 public:
  inline KeySet() : KeySet(nullptr) {}
  ~KeySet() override;
  explicit PROTOBUF_CONSTEXPR KeySet(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KeySet(const KeySet& from);
  KeySet(KeySet&& from) noexcept
    : KeySet() {
    *this = ::std::move(from);
  }

  inline KeySet& operator=(const KeySet& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeySet& operator=(KeySet&& from) noexcept {
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
  static const KeySet& default_instance() {
    return *internal_default_instance();
  }
  static inline const KeySet* internal_default_instance() {
    return reinterpret_cast<const KeySet*>(
               &_KeySet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(KeySet& a, KeySet& b) {
    a.Swap(&b);
  }
  inline void Swap(KeySet* other) {
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
  void UnsafeArenaSwap(KeySet* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KeySet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KeySet>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const KeySet& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const KeySet& from) {
    KeySet::MergeImpl(*this, from);
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
  void InternalSwap(KeySet* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.spanner.v1.KeySet";
  }
  protected:
  explicit KeySet(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeysFieldNumber = 1,
    kRangesFieldNumber = 2,
    kAllFieldNumber = 3,
  };
  // repeated .google.protobuf.ListValue keys = 1;
  int keys_size() const;
  private:
  int _internal_keys_size() const;
  public:
  void clear_keys();
  ::PROTOBUF_NAMESPACE_ID::ListValue* mutable_keys(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::ListValue >*
      mutable_keys();
  private:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& _internal_keys(int index) const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* _internal_add_keys();
  public:
  const ::PROTOBUF_NAMESPACE_ID::ListValue& keys(int index) const;
  ::PROTOBUF_NAMESPACE_ID::ListValue* add_keys();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::ListValue >&
      keys() const;

  // repeated .google.spanner.v1.KeyRange ranges = 2;
  int ranges_size() const;
  private:
  int _internal_ranges_size() const;
  public:
  void clear_ranges();
  ::google::spanner::v1::KeyRange* mutable_ranges(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::spanner::v1::KeyRange >*
      mutable_ranges();
  private:
  const ::google::spanner::v1::KeyRange& _internal_ranges(int index) const;
  ::google::spanner::v1::KeyRange* _internal_add_ranges();
  public:
  const ::google::spanner::v1::KeyRange& ranges(int index) const;
  ::google::spanner::v1::KeyRange* add_ranges();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::spanner::v1::KeyRange >&
      ranges() const;

  // bool all = 3;
  void clear_all();
  bool all() const;
  void set_all(bool value);
  private:
  bool _internal_all() const;
  void _internal_set_all(bool value);
  public:

  // @@protoc_insertion_point(class_scope:google.spanner.v1.KeySet)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::ListValue > keys_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::spanner::v1::KeyRange > ranges_;
    bool all_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fspanner_2fv1_2fkeys_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeyRange

// .google.protobuf.ListValue start_closed = 1;
inline bool KeyRange::_internal_has_start_closed() const {
  return start_key_type_case() == kStartClosed;
}
inline bool KeyRange::has_start_closed() const {
  return _internal_has_start_closed();
}
inline void KeyRange::set_has_start_closed() {
  _impl_._oneof_case_[0] = kStartClosed;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::release_start_closed() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.start_closed)
  if (_internal_has_start_closed()) {
    clear_has_start_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.start_key_type_.start_closed_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.start_key_type_.start_closed_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::_internal_start_closed() const {
  return _internal_has_start_closed()
      ? *_impl_.start_key_type_.start_closed_
      : reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::ListValue&>(::PROTOBUF_NAMESPACE_ID::_ListValue_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::start_closed() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.start_closed)
  return _internal_start_closed();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::unsafe_arena_release_start_closed() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.spanner.v1.KeyRange.start_closed)
  if (_internal_has_start_closed()) {
    clear_has_start_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.start_key_type_.start_closed_;
    _impl_.start_key_type_.start_closed_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void KeyRange::unsafe_arena_set_allocated_start_closed(::PROTOBUF_NAMESPACE_ID::ListValue* start_closed) {
  clear_start_key_type();
  if (start_closed) {
    set_has_start_closed();
    _impl_.start_key_type_.start_closed_ = start_closed;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.KeyRange.start_closed)
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::_internal_mutable_start_closed() {
  if (!_internal_has_start_closed()) {
    clear_start_key_type();
    set_has_start_closed();
    _impl_.start_key_type_.start_closed_ = CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::ListValue >(GetArenaForAllocation());
  }
  return _impl_.start_key_type_.start_closed_;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::mutable_start_closed() {
  ::PROTOBUF_NAMESPACE_ID::ListValue* _msg = _internal_mutable_start_closed();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.start_closed)
  return _msg;
}

// .google.protobuf.ListValue start_open = 2;
inline bool KeyRange::_internal_has_start_open() const {
  return start_key_type_case() == kStartOpen;
}
inline bool KeyRange::has_start_open() const {
  return _internal_has_start_open();
}
inline void KeyRange::set_has_start_open() {
  _impl_._oneof_case_[0] = kStartOpen;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::release_start_open() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.start_open)
  if (_internal_has_start_open()) {
    clear_has_start_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.start_key_type_.start_open_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.start_key_type_.start_open_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::_internal_start_open() const {
  return _internal_has_start_open()
      ? *_impl_.start_key_type_.start_open_
      : reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::ListValue&>(::PROTOBUF_NAMESPACE_ID::_ListValue_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::start_open() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.start_open)
  return _internal_start_open();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::unsafe_arena_release_start_open() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.spanner.v1.KeyRange.start_open)
  if (_internal_has_start_open()) {
    clear_has_start_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.start_key_type_.start_open_;
    _impl_.start_key_type_.start_open_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void KeyRange::unsafe_arena_set_allocated_start_open(::PROTOBUF_NAMESPACE_ID::ListValue* start_open) {
  clear_start_key_type();
  if (start_open) {
    set_has_start_open();
    _impl_.start_key_type_.start_open_ = start_open;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.KeyRange.start_open)
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::_internal_mutable_start_open() {
  if (!_internal_has_start_open()) {
    clear_start_key_type();
    set_has_start_open();
    _impl_.start_key_type_.start_open_ = CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::ListValue >(GetArenaForAllocation());
  }
  return _impl_.start_key_type_.start_open_;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::mutable_start_open() {
  ::PROTOBUF_NAMESPACE_ID::ListValue* _msg = _internal_mutable_start_open();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.start_open)
  return _msg;
}

// .google.protobuf.ListValue end_closed = 3;
inline bool KeyRange::_internal_has_end_closed() const {
  return end_key_type_case() == kEndClosed;
}
inline bool KeyRange::has_end_closed() const {
  return _internal_has_end_closed();
}
inline void KeyRange::set_has_end_closed() {
  _impl_._oneof_case_[1] = kEndClosed;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::release_end_closed() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.end_closed)
  if (_internal_has_end_closed()) {
    clear_has_end_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.end_key_type_.end_closed_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.end_key_type_.end_closed_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::_internal_end_closed() const {
  return _internal_has_end_closed()
      ? *_impl_.end_key_type_.end_closed_
      : reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::ListValue&>(::PROTOBUF_NAMESPACE_ID::_ListValue_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::end_closed() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.end_closed)
  return _internal_end_closed();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::unsafe_arena_release_end_closed() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.spanner.v1.KeyRange.end_closed)
  if (_internal_has_end_closed()) {
    clear_has_end_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.end_key_type_.end_closed_;
    _impl_.end_key_type_.end_closed_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void KeyRange::unsafe_arena_set_allocated_end_closed(::PROTOBUF_NAMESPACE_ID::ListValue* end_closed) {
  clear_end_key_type();
  if (end_closed) {
    set_has_end_closed();
    _impl_.end_key_type_.end_closed_ = end_closed;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.KeyRange.end_closed)
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::_internal_mutable_end_closed() {
  if (!_internal_has_end_closed()) {
    clear_end_key_type();
    set_has_end_closed();
    _impl_.end_key_type_.end_closed_ = CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::ListValue >(GetArenaForAllocation());
  }
  return _impl_.end_key_type_.end_closed_;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::mutable_end_closed() {
  ::PROTOBUF_NAMESPACE_ID::ListValue* _msg = _internal_mutable_end_closed();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.end_closed)
  return _msg;
}

// .google.protobuf.ListValue end_open = 4;
inline bool KeyRange::_internal_has_end_open() const {
  return end_key_type_case() == kEndOpen;
}
inline bool KeyRange::has_end_open() const {
  return _internal_has_end_open();
}
inline void KeyRange::set_has_end_open() {
  _impl_._oneof_case_[1] = kEndOpen;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::release_end_open() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.end_open)
  if (_internal_has_end_open()) {
    clear_has_end_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.end_key_type_.end_open_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.end_key_type_.end_open_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::_internal_end_open() const {
  return _internal_has_end_open()
      ? *_impl_.end_key_type_.end_open_
      : reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::ListValue&>(::PROTOBUF_NAMESPACE_ID::_ListValue_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeyRange::end_open() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.end_open)
  return _internal_end_open();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::unsafe_arena_release_end_open() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.spanner.v1.KeyRange.end_open)
  if (_internal_has_end_open()) {
    clear_has_end_key_type();
    ::PROTOBUF_NAMESPACE_ID::ListValue* temp = _impl_.end_key_type_.end_open_;
    _impl_.end_key_type_.end_open_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void KeyRange::unsafe_arena_set_allocated_end_open(::PROTOBUF_NAMESPACE_ID::ListValue* end_open) {
  clear_end_key_type();
  if (end_open) {
    set_has_end_open();
    _impl_.end_key_type_.end_open_ = end_open;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.spanner.v1.KeyRange.end_open)
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::_internal_mutable_end_open() {
  if (!_internal_has_end_open()) {
    clear_end_key_type();
    set_has_end_open();
    _impl_.end_key_type_.end_open_ = CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::ListValue >(GetArenaForAllocation());
  }
  return _impl_.end_key_type_.end_open_;
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeyRange::mutable_end_open() {
  ::PROTOBUF_NAMESPACE_ID::ListValue* _msg = _internal_mutable_end_open();
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.end_open)
  return _msg;
}

inline bool KeyRange::has_start_key_type() const {
  return start_key_type_case() != START_KEY_TYPE_NOT_SET;
}
inline void KeyRange::clear_has_start_key_type() {
  _impl_._oneof_case_[0] = START_KEY_TYPE_NOT_SET;
}
inline bool KeyRange::has_end_key_type() const {
  return end_key_type_case() != END_KEY_TYPE_NOT_SET;
}
inline void KeyRange::clear_has_end_key_type() {
  _impl_._oneof_case_[1] = END_KEY_TYPE_NOT_SET;
}
inline KeyRange::StartKeyTypeCase KeyRange::start_key_type_case() const {
  return KeyRange::StartKeyTypeCase(_impl_._oneof_case_[0]);
}
inline KeyRange::EndKeyTypeCase KeyRange::end_key_type_case() const {
  return KeyRange::EndKeyTypeCase(_impl_._oneof_case_[1]);
}
// -------------------------------------------------------------------

// KeySet

// repeated .google.protobuf.ListValue keys = 1;
inline int KeySet::_internal_keys_size() const {
  return _impl_.keys_.size();
}
inline int KeySet::keys_size() const {
  return _internal_keys_size();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeySet::mutable_keys(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeySet.keys)
  return _impl_.keys_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::ListValue >*
KeySet::mutable_keys() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.KeySet.keys)
  return &_impl_.keys_;
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeySet::_internal_keys(int index) const {
  return _impl_.keys_.Get(index);
}
inline const ::PROTOBUF_NAMESPACE_ID::ListValue& KeySet::keys(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.keys)
  return _internal_keys(index);
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeySet::_internal_add_keys() {
  return _impl_.keys_.Add();
}
inline ::PROTOBUF_NAMESPACE_ID::ListValue* KeySet::add_keys() {
  ::PROTOBUF_NAMESPACE_ID::ListValue* _add = _internal_add_keys();
  // @@protoc_insertion_point(field_add:google.spanner.v1.KeySet.keys)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::ListValue >&
KeySet::keys() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.KeySet.keys)
  return _impl_.keys_;
}

// repeated .google.spanner.v1.KeyRange ranges = 2;
inline int KeySet::_internal_ranges_size() const {
  return _impl_.ranges_.size();
}
inline int KeySet::ranges_size() const {
  return _internal_ranges_size();
}
inline void KeySet::clear_ranges() {
  _impl_.ranges_.Clear();
}
inline ::google::spanner::v1::KeyRange* KeySet::mutable_ranges(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeySet.ranges)
  return _impl_.ranges_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::spanner::v1::KeyRange >*
KeySet::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.KeySet.ranges)
  return &_impl_.ranges_;
}
inline const ::google::spanner::v1::KeyRange& KeySet::_internal_ranges(int index) const {
  return _impl_.ranges_.Get(index);
}
inline const ::google::spanner::v1::KeyRange& KeySet::ranges(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.ranges)
  return _internal_ranges(index);
}
inline ::google::spanner::v1::KeyRange* KeySet::_internal_add_ranges() {
  return _impl_.ranges_.Add();
}
inline ::google::spanner::v1::KeyRange* KeySet::add_ranges() {
  ::google::spanner::v1::KeyRange* _add = _internal_add_ranges();
  // @@protoc_insertion_point(field_add:google.spanner.v1.KeySet.ranges)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::spanner::v1::KeyRange >&
KeySet::ranges() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.KeySet.ranges)
  return _impl_.ranges_;
}

// bool all = 3;
inline void KeySet::clear_all() {
  _impl_.all_ = false;
}
inline bool KeySet::_internal_all() const {
  return _impl_.all_;
}
inline bool KeySet::all() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.all)
  return _internal_all();
}
inline void KeySet::_internal_set_all(bool value) {
  
  _impl_.all_ = value;
}
inline void KeySet::set_all(bool value) {
  _internal_set_all(value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.KeySet.all)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fspanner_2fv1_2fkeys_2eproto
