// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/dashboard/v1/text.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto;
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {
class Text;
struct TextDefaultTypeInternal;
extern TextDefaultTypeInternal _Text_default_instance_;
}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::monitoring::dashboard::v1::Text* Arena::CreateMaybeMessage<::google::monitoring::dashboard::v1::Text>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {

enum Text_Format : int {
  Text_Format_FORMAT_UNSPECIFIED = 0,
  Text_Format_MARKDOWN = 1,
  Text_Format_RAW = 2,
  Text_Format_Text_Format_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Text_Format_Text_Format_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Text_Format_IsValid(int value);
constexpr Text_Format Text_Format_Format_MIN = Text_Format_FORMAT_UNSPECIFIED;
constexpr Text_Format Text_Format_Format_MAX = Text_Format_RAW;
constexpr int Text_Format_Format_ARRAYSIZE = Text_Format_Format_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Text_Format_descriptor();
template<typename T>
inline const std::string& Text_Format_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Text_Format>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Text_Format_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Text_Format_descriptor(), enum_t_value);
}
inline bool Text_Format_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Text_Format* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Text_Format>(
    Text_Format_descriptor(), name, value);
}
// ===================================================================

class Text final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.dashboard.v1.Text) */ {
 public:
  inline Text() : Text(nullptr) {}
  ~Text() override;
  explicit constexpr Text(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Text(const Text& from);
  Text(Text&& from) noexcept
    : Text() {
    *this = ::std::move(from);
  }

  inline Text& operator=(const Text& from) {
    CopyFrom(from);
    return *this;
  }
  inline Text& operator=(Text&& from) noexcept {
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
  static const Text& default_instance() {
    return *internal_default_instance();
  }
  static inline const Text* internal_default_instance() {
    return reinterpret_cast<const Text*>(
               &_Text_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Text& a, Text& b) {
    a.Swap(&b);
  }
  inline void Swap(Text* other) {
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
  void UnsafeArenaSwap(Text* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Text* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Text>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Text& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Text& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Text* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.dashboard.v1.Text";
  }
  protected:
  explicit Text(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Text_Format Format;
  static constexpr Format FORMAT_UNSPECIFIED =
    Text_Format_FORMAT_UNSPECIFIED;
  static constexpr Format MARKDOWN =
    Text_Format_MARKDOWN;
  static constexpr Format RAW =
    Text_Format_RAW;
  static inline bool Format_IsValid(int value) {
    return Text_Format_IsValid(value);
  }
  static constexpr Format Format_MIN =
    Text_Format_Format_MIN;
  static constexpr Format Format_MAX =
    Text_Format_Format_MAX;
  static constexpr int Format_ARRAYSIZE =
    Text_Format_Format_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Format_descriptor() {
    return Text_Format_descriptor();
  }
  template<typename T>
  static inline const std::string& Format_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Format>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Format_Name.");
    return Text_Format_Name(enum_t_value);
  }
  static inline bool Format_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Format* value) {
    return Text_Format_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 1,
    kFormatFieldNumber = 2,
  };
  // string content = 1;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // .google.monitoring.dashboard.v1.Text.Format format = 2;
  void clear_format();
  ::google::monitoring::dashboard::v1::Text_Format format() const;
  void set_format(::google::monitoring::dashboard::v1::Text_Format value);
  private:
  ::google::monitoring::dashboard::v1::Text_Format _internal_format() const;
  void _internal_set_format(::google::monitoring::dashboard::v1::Text_Format value);
  public:

  // @@protoc_insertion_point(class_scope:google.monitoring.dashboard.v1.Text)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  int format_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Text

// string content = 1;
inline void Text::clear_content() {
  content_.ClearToEmpty();
}
inline const std::string& Text::content() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Text.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Text::set_content(ArgT0&& arg0, ArgT... args) {
 
 content_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.Text.content)
}
inline std::string* Text::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Text.content)
  return _s;
}
inline const std::string& Text::_internal_content() const {
  return content_.Get();
}
inline void Text::_internal_set_content(const std::string& value) {
  
  content_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Text::_internal_mutable_content() {
  
  return content_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Text::release_content() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Text.content)
  return content_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Text::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  content_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (content_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.Text.content)
}

// .google.monitoring.dashboard.v1.Text.Format format = 2;
inline void Text::clear_format() {
  format_ = 0;
}
inline ::google::monitoring::dashboard::v1::Text_Format Text::_internal_format() const {
  return static_cast< ::google::monitoring::dashboard::v1::Text_Format >(format_);
}
inline ::google::monitoring::dashboard::v1::Text_Format Text::format() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Text.format)
  return _internal_format();
}
inline void Text::_internal_set_format(::google::monitoring::dashboard::v1::Text_Format value) {
  
  format_ = value;
}
inline void Text::set_format(::google::monitoring::dashboard::v1::Text_Format value) {
  _internal_set_format(value);
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.Text.format)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::monitoring::dashboard::v1::Text_Format> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::monitoring::dashboard::v1::Text_Format>() {
  return ::google::monitoring::dashboard::v1::Text_Format_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2ftext_2eproto
