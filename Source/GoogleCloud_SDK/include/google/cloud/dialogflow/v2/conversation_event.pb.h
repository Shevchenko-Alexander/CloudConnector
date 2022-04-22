// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/dialogflow/v2/conversation_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto

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
#include "google/api/annotations.pb.h"
#include "google/cloud/dialogflow/v2/participant.pb.h"
#include "google/rpc/status.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto;
namespace google {
namespace cloud {
namespace dialogflow {
namespace v2 {
class ConversationEvent;
struct ConversationEventDefaultTypeInternal;
extern ConversationEventDefaultTypeInternal _ConversationEvent_default_instance_;
}  // namespace v2
}  // namespace dialogflow
}  // namespace cloud
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::cloud::dialogflow::v2::ConversationEvent* Arena::CreateMaybeMessage<::google::cloud::dialogflow::v2::ConversationEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace cloud {
namespace dialogflow {
namespace v2 {

enum ConversationEvent_Type : int {
  ConversationEvent_Type_TYPE_UNSPECIFIED = 0,
  ConversationEvent_Type_CONVERSATION_STARTED = 1,
  ConversationEvent_Type_CONVERSATION_FINISHED = 2,
  ConversationEvent_Type_HUMAN_INTERVENTION_NEEDED = 3,
  ConversationEvent_Type_NEW_MESSAGE = 5,
  ConversationEvent_Type_UNRECOVERABLE_ERROR = 4,
  ConversationEvent_Type_ConversationEvent_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ConversationEvent_Type_ConversationEvent_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ConversationEvent_Type_IsValid(int value);
constexpr ConversationEvent_Type ConversationEvent_Type_Type_MIN = ConversationEvent_Type_TYPE_UNSPECIFIED;
constexpr ConversationEvent_Type ConversationEvent_Type_Type_MAX = ConversationEvent_Type_NEW_MESSAGE;
constexpr int ConversationEvent_Type_Type_ARRAYSIZE = ConversationEvent_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ConversationEvent_Type_descriptor();
template<typename T>
inline const std::string& ConversationEvent_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConversationEvent_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConversationEvent_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ConversationEvent_Type_descriptor(), enum_t_value);
}
inline bool ConversationEvent_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConversationEvent_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ConversationEvent_Type>(
    ConversationEvent_Type_descriptor(), name, value);
}
// ===================================================================

class ConversationEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.dialogflow.v2.ConversationEvent) */ {
 public:
  inline ConversationEvent() : ConversationEvent(nullptr) {}
  ~ConversationEvent() override;
  explicit constexpr ConversationEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConversationEvent(const ConversationEvent& from);
  ConversationEvent(ConversationEvent&& from) noexcept
    : ConversationEvent() {
    *this = ::std::move(from);
  }

  inline ConversationEvent& operator=(const ConversationEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConversationEvent& operator=(ConversationEvent&& from) noexcept {
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
  static const ConversationEvent& default_instance() {
    return *internal_default_instance();
  }
  enum PayloadCase {
    kNewMessagePayload = 4,
    PAYLOAD_NOT_SET = 0,
  };

  static inline const ConversationEvent* internal_default_instance() {
    return reinterpret_cast<const ConversationEvent*>(
               &_ConversationEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConversationEvent& a, ConversationEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(ConversationEvent* other) {
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
  void UnsafeArenaSwap(ConversationEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ConversationEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ConversationEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ConversationEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ConversationEvent& from);
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
  void InternalSwap(ConversationEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.dialogflow.v2.ConversationEvent";
  }
  protected:
  explicit ConversationEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ConversationEvent_Type Type;
  static constexpr Type TYPE_UNSPECIFIED =
    ConversationEvent_Type_TYPE_UNSPECIFIED;
  static constexpr Type CONVERSATION_STARTED =
    ConversationEvent_Type_CONVERSATION_STARTED;
  static constexpr Type CONVERSATION_FINISHED =
    ConversationEvent_Type_CONVERSATION_FINISHED;
  static constexpr Type HUMAN_INTERVENTION_NEEDED =
    ConversationEvent_Type_HUMAN_INTERVENTION_NEEDED;
  static constexpr Type NEW_MESSAGE =
    ConversationEvent_Type_NEW_MESSAGE;
  static constexpr Type UNRECOVERABLE_ERROR =
    ConversationEvent_Type_UNRECOVERABLE_ERROR;
  static inline bool Type_IsValid(int value) {
    return ConversationEvent_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    ConversationEvent_Type_Type_MIN;
  static constexpr Type Type_MAX =
    ConversationEvent_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    ConversationEvent_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return ConversationEvent_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return ConversationEvent_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return ConversationEvent_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kConversationFieldNumber = 1,
    kErrorStatusFieldNumber = 3,
    kTypeFieldNumber = 2,
    kNewMessagePayloadFieldNumber = 4,
  };
  // string conversation = 1;
  void clear_conversation();
  const std::string& conversation() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_conversation(ArgT0&& arg0, ArgT... args);
  std::string* mutable_conversation();
  PROTOBUF_NODISCARD std::string* release_conversation();
  void set_allocated_conversation(std::string* conversation);
  private:
  const std::string& _internal_conversation() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_conversation(const std::string& value);
  std::string* _internal_mutable_conversation();
  public:

  // .google.rpc.Status error_status = 3;
  bool has_error_status() const;
  private:
  bool _internal_has_error_status() const;
  public:
  void clear_error_status();
  const ::google::rpc::Status& error_status() const;
  PROTOBUF_NODISCARD ::google::rpc::Status* release_error_status();
  ::google::rpc::Status* mutable_error_status();
  void set_allocated_error_status(::google::rpc::Status* error_status);
  private:
  const ::google::rpc::Status& _internal_error_status() const;
  ::google::rpc::Status* _internal_mutable_error_status();
  public:
  void unsafe_arena_set_allocated_error_status(
      ::google::rpc::Status* error_status);
  ::google::rpc::Status* unsafe_arena_release_error_status();

  // .google.cloud.dialogflow.v2.ConversationEvent.Type type = 2;
  void clear_type();
  ::google::cloud::dialogflow::v2::ConversationEvent_Type type() const;
  void set_type(::google::cloud::dialogflow::v2::ConversationEvent_Type value);
  private:
  ::google::cloud::dialogflow::v2::ConversationEvent_Type _internal_type() const;
  void _internal_set_type(::google::cloud::dialogflow::v2::ConversationEvent_Type value);
  public:

  // .google.cloud.dialogflow.v2.Message new_message_payload = 4;
  bool has_new_message_payload() const;
  private:
  bool _internal_has_new_message_payload() const;
  public:
  void clear_new_message_payload();
  const ::google::cloud::dialogflow::v2::Message& new_message_payload() const;
  PROTOBUF_NODISCARD ::google::cloud::dialogflow::v2::Message* release_new_message_payload();
  ::google::cloud::dialogflow::v2::Message* mutable_new_message_payload();
  void set_allocated_new_message_payload(::google::cloud::dialogflow::v2::Message* new_message_payload);
  private:
  const ::google::cloud::dialogflow::v2::Message& _internal_new_message_payload() const;
  ::google::cloud::dialogflow::v2::Message* _internal_mutable_new_message_payload();
  public:
  void unsafe_arena_set_allocated_new_message_payload(
      ::google::cloud::dialogflow::v2::Message* new_message_payload);
  ::google::cloud::dialogflow::v2::Message* unsafe_arena_release_new_message_payload();

  void clear_payload();
  PayloadCase payload_case() const;
  // @@protoc_insertion_point(class_scope:google.cloud.dialogflow.v2.ConversationEvent)
 private:
  class _Internal;
  void set_has_new_message_payload();

  inline bool has_payload() const;
  inline void clear_has_payload();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr conversation_;
  ::google::rpc::Status* error_status_;
  int type_;
  union PayloadUnion {
    constexpr PayloadUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::google::cloud::dialogflow::v2::Message* new_message_payload_;
  } payload_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConversationEvent

// string conversation = 1;
inline void ConversationEvent::clear_conversation() {
  conversation_.ClearToEmpty();
}
inline const std::string& ConversationEvent::conversation() const {
  // @@protoc_insertion_point(field_get:google.cloud.dialogflow.v2.ConversationEvent.conversation)
  return _internal_conversation();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConversationEvent::set_conversation(ArgT0&& arg0, ArgT... args) {
 
 conversation_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.cloud.dialogflow.v2.ConversationEvent.conversation)
}
inline std::string* ConversationEvent::mutable_conversation() {
  std::string* _s = _internal_mutable_conversation();
  // @@protoc_insertion_point(field_mutable:google.cloud.dialogflow.v2.ConversationEvent.conversation)
  return _s;
}
inline const std::string& ConversationEvent::_internal_conversation() const {
  return conversation_.Get();
}
inline void ConversationEvent::_internal_set_conversation(const std::string& value) {
  
  conversation_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConversationEvent::_internal_mutable_conversation() {
  
  return conversation_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConversationEvent::release_conversation() {
  // @@protoc_insertion_point(field_release:google.cloud.dialogflow.v2.ConversationEvent.conversation)
  return conversation_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConversationEvent::set_allocated_conversation(std::string* conversation) {
  if (conversation != nullptr) {
    
  } else {
    
  }
  conversation_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), conversation,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (conversation_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    conversation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.cloud.dialogflow.v2.ConversationEvent.conversation)
}

// .google.cloud.dialogflow.v2.ConversationEvent.Type type = 2;
inline void ConversationEvent::clear_type() {
  type_ = 0;
}
inline ::google::cloud::dialogflow::v2::ConversationEvent_Type ConversationEvent::_internal_type() const {
  return static_cast< ::google::cloud::dialogflow::v2::ConversationEvent_Type >(type_);
}
inline ::google::cloud::dialogflow::v2::ConversationEvent_Type ConversationEvent::type() const {
  // @@protoc_insertion_point(field_get:google.cloud.dialogflow.v2.ConversationEvent.type)
  return _internal_type();
}
inline void ConversationEvent::_internal_set_type(::google::cloud::dialogflow::v2::ConversationEvent_Type value) {
  
  type_ = value;
}
inline void ConversationEvent::set_type(::google::cloud::dialogflow::v2::ConversationEvent_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:google.cloud.dialogflow.v2.ConversationEvent.type)
}

// .google.rpc.Status error_status = 3;
inline bool ConversationEvent::_internal_has_error_status() const {
  return this != internal_default_instance() && error_status_ != nullptr;
}
inline bool ConversationEvent::has_error_status() const {
  return _internal_has_error_status();
}
inline const ::google::rpc::Status& ConversationEvent::_internal_error_status() const {
  const ::google::rpc::Status* p = error_status_;
  return p != nullptr ? *p : reinterpret_cast<const ::google::rpc::Status&>(
      ::google::rpc::_Status_default_instance_);
}
inline const ::google::rpc::Status& ConversationEvent::error_status() const {
  // @@protoc_insertion_point(field_get:google.cloud.dialogflow.v2.ConversationEvent.error_status)
  return _internal_error_status();
}
inline void ConversationEvent::unsafe_arena_set_allocated_error_status(
    ::google::rpc::Status* error_status) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_status_);
  }
  error_status_ = error_status;
  if (error_status) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.cloud.dialogflow.v2.ConversationEvent.error_status)
}
inline ::google::rpc::Status* ConversationEvent::release_error_status() {
  
  ::google::rpc::Status* temp = error_status_;
  error_status_ = nullptr;
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
inline ::google::rpc::Status* ConversationEvent::unsafe_arena_release_error_status() {
  // @@protoc_insertion_point(field_release:google.cloud.dialogflow.v2.ConversationEvent.error_status)
  
  ::google::rpc::Status* temp = error_status_;
  error_status_ = nullptr;
  return temp;
}
inline ::google::rpc::Status* ConversationEvent::_internal_mutable_error_status() {
  
  if (error_status_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::rpc::Status>(GetArenaForAllocation());
    error_status_ = p;
  }
  return error_status_;
}
inline ::google::rpc::Status* ConversationEvent::mutable_error_status() {
  ::google::rpc::Status* _msg = _internal_mutable_error_status();
  // @@protoc_insertion_point(field_mutable:google.cloud.dialogflow.v2.ConversationEvent.error_status)
  return _msg;
}
inline void ConversationEvent::set_allocated_error_status(::google::rpc::Status* error_status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_status_);
  }
  if (error_status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_status));
    if (message_arena != submessage_arena) {
      error_status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, error_status, submessage_arena);
    }
    
  } else {
    
  }
  error_status_ = error_status;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.dialogflow.v2.ConversationEvent.error_status)
}

// .google.cloud.dialogflow.v2.Message new_message_payload = 4;
inline bool ConversationEvent::_internal_has_new_message_payload() const {
  return payload_case() == kNewMessagePayload;
}
inline bool ConversationEvent::has_new_message_payload() const {
  return _internal_has_new_message_payload();
}
inline void ConversationEvent::set_has_new_message_payload() {
  _oneof_case_[0] = kNewMessagePayload;
}
inline ::google::cloud::dialogflow::v2::Message* ConversationEvent::release_new_message_payload() {
  // @@protoc_insertion_point(field_release:google.cloud.dialogflow.v2.ConversationEvent.new_message_payload)
  if (_internal_has_new_message_payload()) {
    clear_has_payload();
      ::google::cloud::dialogflow::v2::Message* temp = payload_.new_message_payload_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    payload_.new_message_payload_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::cloud::dialogflow::v2::Message& ConversationEvent::_internal_new_message_payload() const {
  return _internal_has_new_message_payload()
      ? *payload_.new_message_payload_
      : reinterpret_cast< ::google::cloud::dialogflow::v2::Message&>(::google::cloud::dialogflow::v2::_Message_default_instance_);
}
inline const ::google::cloud::dialogflow::v2::Message& ConversationEvent::new_message_payload() const {
  // @@protoc_insertion_point(field_get:google.cloud.dialogflow.v2.ConversationEvent.new_message_payload)
  return _internal_new_message_payload();
}
inline ::google::cloud::dialogflow::v2::Message* ConversationEvent::unsafe_arena_release_new_message_payload() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.cloud.dialogflow.v2.ConversationEvent.new_message_payload)
  if (_internal_has_new_message_payload()) {
    clear_has_payload();
    ::google::cloud::dialogflow::v2::Message* temp = payload_.new_message_payload_;
    payload_.new_message_payload_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void ConversationEvent::unsafe_arena_set_allocated_new_message_payload(::google::cloud::dialogflow::v2::Message* new_message_payload) {
  clear_payload();
  if (new_message_payload) {
    set_has_new_message_payload();
    payload_.new_message_payload_ = new_message_payload;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.cloud.dialogflow.v2.ConversationEvent.new_message_payload)
}
inline ::google::cloud::dialogflow::v2::Message* ConversationEvent::_internal_mutable_new_message_payload() {
  if (!_internal_has_new_message_payload()) {
    clear_payload();
    set_has_new_message_payload();
    payload_.new_message_payload_ = CreateMaybeMessage< ::google::cloud::dialogflow::v2::Message >(GetArenaForAllocation());
  }
  return payload_.new_message_payload_;
}
inline ::google::cloud::dialogflow::v2::Message* ConversationEvent::mutable_new_message_payload() {
  ::google::cloud::dialogflow::v2::Message* _msg = _internal_mutable_new_message_payload();
  // @@protoc_insertion_point(field_mutable:google.cloud.dialogflow.v2.ConversationEvent.new_message_payload)
  return _msg;
}

inline bool ConversationEvent::has_payload() const {
  return payload_case() != PAYLOAD_NOT_SET;
}
inline void ConversationEvent::clear_has_payload() {
  _oneof_case_[0] = PAYLOAD_NOT_SET;
}
inline ConversationEvent::PayloadCase ConversationEvent::payload_case() const {
  return ConversationEvent::PayloadCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace dialogflow
}  // namespace cloud
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::cloud::dialogflow::v2::ConversationEvent_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::dialogflow::v2::ConversationEvent_Type>() {
  return ::google::cloud::dialogflow::v2::ConversationEvent_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fdialogflow_2fv2_2fconversation_5fevent_2eproto
