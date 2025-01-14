// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/color.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto

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
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2fcolor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2fcolor_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fcolor_2eproto;
namespace google {
namespace type {
class Color;
struct ColorDefaultTypeInternal;
extern ColorDefaultTypeInternal _Color_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::Color* Arena::CreateMaybeMessage<::google::type::Color>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class Color final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.Color) */ {
 public:
  inline Color() : Color(nullptr) {}
  ~Color() override;
  explicit PROTOBUF_CONSTEXPR Color(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
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
  static const Color& default_instance() {
    return *internal_default_instance();
  }
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
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
  void UnsafeArenaSwap(Color* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Color& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Color& from) {
    Color::MergeImpl(*this, from);
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
  void InternalSwap(Color* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.Color";
  }
  protected:
  explicit Color(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAlphaFieldNumber = 4,
    kRedFieldNumber = 1,
    kGreenFieldNumber = 2,
    kBlueFieldNumber = 3,
  };
  // .google.protobuf.FloatValue alpha = 4;
  bool has_alpha() const;
  private:
  bool _internal_has_alpha() const;
  public:
  void clear_alpha();
  const ::PROTOBUF_NAMESPACE_ID::FloatValue& alpha() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::FloatValue* release_alpha();
  ::PROTOBUF_NAMESPACE_ID::FloatValue* mutable_alpha();
  void set_allocated_alpha(::PROTOBUF_NAMESPACE_ID::FloatValue* alpha);
  private:
  const ::PROTOBUF_NAMESPACE_ID::FloatValue& _internal_alpha() const;
  ::PROTOBUF_NAMESPACE_ID::FloatValue* _internal_mutable_alpha();
  public:
  void unsafe_arena_set_allocated_alpha(
      ::PROTOBUF_NAMESPACE_ID::FloatValue* alpha);
  ::PROTOBUF_NAMESPACE_ID::FloatValue* unsafe_arena_release_alpha();

  // float red = 1;
  void clear_red();
  float red() const;
  void set_red(float value);
  private:
  float _internal_red() const;
  void _internal_set_red(float value);
  public:

  // float green = 2;
  void clear_green();
  float green() const;
  void set_green(float value);
  private:
  float _internal_green() const;
  void _internal_set_green(float value);
  public:

  // float blue = 3;
  void clear_blue();
  float blue() const;
  void set_blue(float value);
  private:
  float _internal_blue() const;
  void _internal_set_blue(float value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.Color)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::FloatValue* alpha_;
    float red_;
    float green_;
    float blue_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2ftype_2fcolor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Color

// float red = 1;
inline void Color::clear_red() {
  _impl_.red_ = 0;
}
inline float Color::_internal_red() const {
  return _impl_.red_;
}
inline float Color::red() const {
  // @@protoc_insertion_point(field_get:google.type.Color.red)
  return _internal_red();
}
inline void Color::_internal_set_red(float value) {
  
  _impl_.red_ = value;
}
inline void Color::set_red(float value) {
  _internal_set_red(value);
  // @@protoc_insertion_point(field_set:google.type.Color.red)
}

// float green = 2;
inline void Color::clear_green() {
  _impl_.green_ = 0;
}
inline float Color::_internal_green() const {
  return _impl_.green_;
}
inline float Color::green() const {
  // @@protoc_insertion_point(field_get:google.type.Color.green)
  return _internal_green();
}
inline void Color::_internal_set_green(float value) {
  
  _impl_.green_ = value;
}
inline void Color::set_green(float value) {
  _internal_set_green(value);
  // @@protoc_insertion_point(field_set:google.type.Color.green)
}

// float blue = 3;
inline void Color::clear_blue() {
  _impl_.blue_ = 0;
}
inline float Color::_internal_blue() const {
  return _impl_.blue_;
}
inline float Color::blue() const {
  // @@protoc_insertion_point(field_get:google.type.Color.blue)
  return _internal_blue();
}
inline void Color::_internal_set_blue(float value) {
  
  _impl_.blue_ = value;
}
inline void Color::set_blue(float value) {
  _internal_set_blue(value);
  // @@protoc_insertion_point(field_set:google.type.Color.blue)
}

// .google.protobuf.FloatValue alpha = 4;
inline bool Color::_internal_has_alpha() const {
  return this != internal_default_instance() && _impl_.alpha_ != nullptr;
}
inline bool Color::has_alpha() const {
  return _internal_has_alpha();
}
inline const ::PROTOBUF_NAMESPACE_ID::FloatValue& Color::_internal_alpha() const {
  const ::PROTOBUF_NAMESPACE_ID::FloatValue* p = _impl_.alpha_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::FloatValue&>(
      ::PROTOBUF_NAMESPACE_ID::_FloatValue_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::FloatValue& Color::alpha() const {
  // @@protoc_insertion_point(field_get:google.type.Color.alpha)
  return _internal_alpha();
}
inline void Color::unsafe_arena_set_allocated_alpha(
    ::PROTOBUF_NAMESPACE_ID::FloatValue* alpha) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.alpha_);
  }
  _impl_.alpha_ = alpha;
  if (alpha) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.type.Color.alpha)
}
inline ::PROTOBUF_NAMESPACE_ID::FloatValue* Color::release_alpha() {
  
  ::PROTOBUF_NAMESPACE_ID::FloatValue* temp = _impl_.alpha_;
  _impl_.alpha_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::FloatValue* Color::unsafe_arena_release_alpha() {
  // @@protoc_insertion_point(field_release:google.type.Color.alpha)
  
  ::PROTOBUF_NAMESPACE_ID::FloatValue* temp = _impl_.alpha_;
  _impl_.alpha_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::FloatValue* Color::_internal_mutable_alpha() {
  
  if (_impl_.alpha_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::FloatValue>(GetArenaForAllocation());
    _impl_.alpha_ = p;
  }
  return _impl_.alpha_;
}
inline ::PROTOBUF_NAMESPACE_ID::FloatValue* Color::mutable_alpha() {
  ::PROTOBUF_NAMESPACE_ID::FloatValue* _msg = _internal_mutable_alpha();
  // @@protoc_insertion_point(field_mutable:google.type.Color.alpha)
  return _msg;
}
inline void Color::set_allocated_alpha(::PROTOBUF_NAMESPACE_ID::FloatValue* alpha) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.alpha_);
  }
  if (alpha) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(alpha));
    if (message_arena != submessage_arena) {
      alpha = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, alpha, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.alpha_ = alpha;
  // @@protoc_insertion_point(field_set_allocated:google.type.Color.alpha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fcolor_2eproto
