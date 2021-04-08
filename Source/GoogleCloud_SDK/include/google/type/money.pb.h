// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/money.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fmoney_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fmoney_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2fmoney_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2fmoney_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fmoney_2eproto;
namespace google {
namespace type {
class Money;
class MoneyDefaultTypeInternal;
extern MoneyDefaultTypeInternal _Money_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::Money* Arena::CreateMaybeMessage<::google::type::Money>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class Money PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.Money) */ {
 public:
  inline Money() : Money(nullptr) {}
  virtual ~Money();

  Money(const Money& from);
  Money(Money&& from) noexcept
    : Money() {
    *this = ::std::move(from);
  }

  inline Money& operator=(const Money& from) {
    CopyFrom(from);
    return *this;
  }
  inline Money& operator=(Money&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Money& default_instance();

  static inline const Money* internal_default_instance() {
    return reinterpret_cast<const Money*>(
               &_Money_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Money& a, Money& b) {
    a.Swap(&b);
  }
  inline void Swap(Money* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Money* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Money* New() const final {
    return CreateMaybeMessage<Money>(nullptr);
  }

  Money* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Money>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Money& from);
  void MergeFrom(const Money& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Money* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.Money";
  }
  protected:
  explicit Money(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2ftype_2fmoney_2eproto);
    return ::descriptor_table_google_2ftype_2fmoney_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCurrencyCodeFieldNumber = 1,
    kUnitsFieldNumber = 2,
    kNanosFieldNumber = 3,
  };
  // string currency_code = 1;
  void clear_currency_code();
  const std::string& currency_code() const;
  void set_currency_code(const std::string& value);
  void set_currency_code(std::string&& value);
  void set_currency_code(const char* value);
  void set_currency_code(const char* value, size_t size);
  std::string* mutable_currency_code();
  std::string* release_currency_code();
  void set_allocated_currency_code(std::string* currency_code);
  private:
  const std::string& _internal_currency_code() const;
  void _internal_set_currency_code(const std::string& value);
  std::string* _internal_mutable_currency_code();
  public:

  // int64 units = 2;
  void clear_units();
  ::PROTOBUF_NAMESPACE_ID::int64 units() const;
  void set_units(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_units() const;
  void _internal_set_units(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 nanos = 3;
  void clear_nanos();
  ::PROTOBUF_NAMESPACE_ID::int32 nanos() const;
  void set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nanos() const;
  void _internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.Money)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr currency_code_;
  ::PROTOBUF_NAMESPACE_ID::int64 units_;
  ::PROTOBUF_NAMESPACE_ID::int32 nanos_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2ftype_2fmoney_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Money

// string currency_code = 1;
inline void Money::clear_currency_code() {
  currency_code_.ClearToEmpty();
}
inline const std::string& Money::currency_code() const {
  // @@protoc_insertion_point(field_get:google.type.Money.currency_code)
  return _internal_currency_code();
}
inline void Money::set_currency_code(const std::string& value) {
  _internal_set_currency_code(value);
  // @@protoc_insertion_point(field_set:google.type.Money.currency_code)
}
inline std::string* Money::mutable_currency_code() {
  // @@protoc_insertion_point(field_mutable:google.type.Money.currency_code)
  return _internal_mutable_currency_code();
}
inline const std::string& Money::_internal_currency_code() const {
  return currency_code_.Get();
}
inline void Money::_internal_set_currency_code(const std::string& value) {
  
  currency_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Money::set_currency_code(std::string&& value) {
  
  currency_code_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.type.Money.currency_code)
}
inline void Money::set_currency_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  currency_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.type.Money.currency_code)
}
inline void Money::set_currency_code(const char* value,
    size_t size) {
  
  currency_code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.type.Money.currency_code)
}
inline std::string* Money::_internal_mutable_currency_code() {
  
  return currency_code_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Money::release_currency_code() {
  // @@protoc_insertion_point(field_release:google.type.Money.currency_code)
  return currency_code_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Money::set_allocated_currency_code(std::string* currency_code) {
  if (currency_code != nullptr) {
    
  } else {
    
  }
  currency_code_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), currency_code,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.type.Money.currency_code)
}

// int64 units = 2;
inline void Money::clear_units() {
  units_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Money::_internal_units() const {
  return units_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Money::units() const {
  // @@protoc_insertion_point(field_get:google.type.Money.units)
  return _internal_units();
}
inline void Money::_internal_set_units(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  units_ = value;
}
inline void Money::set_units(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_units(value);
  // @@protoc_insertion_point(field_set:google.type.Money.units)
}

// int32 nanos = 3;
inline void Money::clear_nanos() {
  nanos_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Money::_internal_nanos() const {
  return nanos_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Money::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.Money.nanos)
  return _internal_nanos();
}
inline void Money::_internal_set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nanos_ = value;
}
inline void Money::set_nanos(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_nanos(value);
  // @@protoc_insertion_point(field_set:google.type.Money.nanos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2fmoney_2eproto
