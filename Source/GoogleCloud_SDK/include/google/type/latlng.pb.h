// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/latlng.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2flatlng_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2flatlng_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2flatlng_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2flatlng_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2flatlng_2eproto;
namespace google {
namespace type {
class LatLng;
struct LatLngDefaultTypeInternal;
extern LatLngDefaultTypeInternal _LatLng_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::LatLng* Arena::CreateMaybeMessage<::google::type::LatLng>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class LatLng final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.LatLng) */ {
 public:
  inline LatLng() : LatLng(nullptr) {}
  ~LatLng() override;
  explicit PROTOBUF_CONSTEXPR LatLng(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LatLng(const LatLng& from);
  LatLng(LatLng&& from) noexcept
    : LatLng() {
    *this = ::std::move(from);
  }

  inline LatLng& operator=(const LatLng& from) {
    CopyFrom(from);
    return *this;
  }
  inline LatLng& operator=(LatLng&& from) noexcept {
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
  static const LatLng& default_instance() {
    return *internal_default_instance();
  }
  static inline const LatLng* internal_default_instance() {
    return reinterpret_cast<const LatLng*>(
               &_LatLng_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LatLng& a, LatLng& b) {
    a.Swap(&b);
  }
  inline void Swap(LatLng* other) {
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
  void UnsafeArenaSwap(LatLng* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LatLng* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LatLng>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LatLng& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LatLng& from) {
    LatLng::MergeImpl(*this, from);
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
  void InternalSwap(LatLng* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.LatLng";
  }
  protected:
  explicit LatLng(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLatitudeFieldNumber = 1,
    kLongitudeFieldNumber = 2,
  };
  // double latitude = 1;
  void clear_latitude();
  double latitude() const;
  void set_latitude(double value);
  private:
  double _internal_latitude() const;
  void _internal_set_latitude(double value);
  public:

  // double longitude = 2;
  void clear_longitude();
  double longitude() const;
  void set_longitude(double value);
  private:
  double _internal_longitude() const;
  void _internal_set_longitude(double value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.LatLng)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double latitude_;
    double longitude_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2ftype_2flatlng_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LatLng

// double latitude = 1;
inline void LatLng::clear_latitude() {
  _impl_.latitude_ = 0;
}
inline double LatLng::_internal_latitude() const {
  return _impl_.latitude_;
}
inline double LatLng::latitude() const {
  // @@protoc_insertion_point(field_get:google.type.LatLng.latitude)
  return _internal_latitude();
}
inline void LatLng::_internal_set_latitude(double value) {
  
  _impl_.latitude_ = value;
}
inline void LatLng::set_latitude(double value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:google.type.LatLng.latitude)
}

// double longitude = 2;
inline void LatLng::clear_longitude() {
  _impl_.longitude_ = 0;
}
inline double LatLng::_internal_longitude() const {
  return _impl_.longitude_;
}
inline double LatLng::longitude() const {
  // @@protoc_insertion_point(field_get:google.type.LatLng.longitude)
  return _internal_longitude();
}
inline void LatLng::_internal_set_longitude(double value) {
  
  _impl_.longitude_ = value;
}
inline void LatLng::set_longitude(double value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:google.type.LatLng.longitude)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2flatlng_2eproto
