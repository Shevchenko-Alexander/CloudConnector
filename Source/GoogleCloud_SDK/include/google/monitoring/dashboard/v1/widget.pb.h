// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/dashboard/v1/widget.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "google/api/field_behavior.pb.h"
#include "google/monitoring/dashboard/v1/alertchart.pb.h"
#include "google/monitoring/dashboard/v1/scorecard.pb.h"
#include "google/monitoring/dashboard/v1/text.pb.h"
#include "google/monitoring/dashboard/v1/xychart.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto_metadata_getter(int index);
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {
class Widget;
struct WidgetDefaultTypeInternal;
extern WidgetDefaultTypeInternal _Widget_default_instance_;
}  // namespace v1
}  // namespace dashboard
}  // namespace monitoring
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::monitoring::dashboard::v1::Widget* Arena::CreateMaybeMessage<::google::monitoring::dashboard::v1::Widget>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace monitoring {
namespace dashboard {
namespace v1 {

// ===================================================================

class Widget PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.monitoring.dashboard.v1.Widget) */ {
 public:
  inline Widget() : Widget(nullptr) {}
  virtual ~Widget();
  explicit constexpr Widget(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Widget(const Widget& from);
  Widget(Widget&& from) noexcept
    : Widget() {
    *this = ::std::move(from);
  }

  inline Widget& operator=(const Widget& from) {
    CopyFrom(from);
    return *this;
  }
  inline Widget& operator=(Widget&& from) noexcept {
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
  static const Widget& default_instance() {
    return *internal_default_instance();
  }
  enum ContentCase {
    kXyChart = 2,
    kScorecard = 3,
    kText = 4,
    kBlank = 5,
    kAlertChart = 7,
    CONTENT_NOT_SET = 0,
  };

  static inline const Widget* internal_default_instance() {
    return reinterpret_cast<const Widget*>(
               &_Widget_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Widget& a, Widget& b) {
    a.Swap(&b);
  }
  inline void Swap(Widget* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Widget* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Widget* New() const final {
    return CreateMaybeMessage<Widget>(nullptr);
  }

  Widget* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Widget>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Widget& from);
  void MergeFrom(const Widget& from);
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
  void InternalSwap(Widget* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.monitoring.dashboard.v1.Widget";
  }
  protected:
  explicit Widget(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTitleFieldNumber = 1,
    kXyChartFieldNumber = 2,
    kScorecardFieldNumber = 3,
    kTextFieldNumber = 4,
    kBlankFieldNumber = 5,
    kAlertChartFieldNumber = 7,
  };
  // string title = 1 [(.google.api.field_behavior) = OPTIONAL];
  void clear_title();
  const std::string& title() const;
  void set_title(const std::string& value);
  void set_title(std::string&& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  std::string* mutable_title();
  std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // .google.monitoring.dashboard.v1.XyChart xy_chart = 2;
  bool has_xy_chart() const;
  private:
  bool _internal_has_xy_chart() const;
  public:
  void clear_xy_chart();
  const ::google::monitoring::dashboard::v1::XyChart& xy_chart() const;
  ::google::monitoring::dashboard::v1::XyChart* release_xy_chart();
  ::google::monitoring::dashboard::v1::XyChart* mutable_xy_chart();
  void set_allocated_xy_chart(::google::monitoring::dashboard::v1::XyChart* xy_chart);
  private:
  const ::google::monitoring::dashboard::v1::XyChart& _internal_xy_chart() const;
  ::google::monitoring::dashboard::v1::XyChart* _internal_mutable_xy_chart();
  public:
  void unsafe_arena_set_allocated_xy_chart(
      ::google::monitoring::dashboard::v1::XyChart* xy_chart);
  ::google::monitoring::dashboard::v1::XyChart* unsafe_arena_release_xy_chart();

  // .google.monitoring.dashboard.v1.Scorecard scorecard = 3;
  bool has_scorecard() const;
  private:
  bool _internal_has_scorecard() const;
  public:
  void clear_scorecard();
  const ::google::monitoring::dashboard::v1::Scorecard& scorecard() const;
  ::google::monitoring::dashboard::v1::Scorecard* release_scorecard();
  ::google::monitoring::dashboard::v1::Scorecard* mutable_scorecard();
  void set_allocated_scorecard(::google::monitoring::dashboard::v1::Scorecard* scorecard);
  private:
  const ::google::monitoring::dashboard::v1::Scorecard& _internal_scorecard() const;
  ::google::monitoring::dashboard::v1::Scorecard* _internal_mutable_scorecard();
  public:
  void unsafe_arena_set_allocated_scorecard(
      ::google::monitoring::dashboard::v1::Scorecard* scorecard);
  ::google::monitoring::dashboard::v1::Scorecard* unsafe_arena_release_scorecard();

  // .google.monitoring.dashboard.v1.Text text = 4;
  bool has_text() const;
  private:
  bool _internal_has_text() const;
  public:
  void clear_text();
  const ::google::monitoring::dashboard::v1::Text& text() const;
  ::google::monitoring::dashboard::v1::Text* release_text();
  ::google::monitoring::dashboard::v1::Text* mutable_text();
  void set_allocated_text(::google::monitoring::dashboard::v1::Text* text);
  private:
  const ::google::monitoring::dashboard::v1::Text& _internal_text() const;
  ::google::monitoring::dashboard::v1::Text* _internal_mutable_text();
  public:
  void unsafe_arena_set_allocated_text(
      ::google::monitoring::dashboard::v1::Text* text);
  ::google::monitoring::dashboard::v1::Text* unsafe_arena_release_text();

  // .google.protobuf.Empty blank = 5;
  bool has_blank() const;
  private:
  bool _internal_has_blank() const;
  public:
  void clear_blank();
  const PROTOBUF_NAMESPACE_ID::Empty& blank() const;
  PROTOBUF_NAMESPACE_ID::Empty* release_blank();
  PROTOBUF_NAMESPACE_ID::Empty* mutable_blank();
  void set_allocated_blank(PROTOBUF_NAMESPACE_ID::Empty* blank);
  private:
  const PROTOBUF_NAMESPACE_ID::Empty& _internal_blank() const;
  PROTOBUF_NAMESPACE_ID::Empty* _internal_mutable_blank();
  public:
  void unsafe_arena_set_allocated_blank(
      PROTOBUF_NAMESPACE_ID::Empty* blank);
  PROTOBUF_NAMESPACE_ID::Empty* unsafe_arena_release_blank();

  // .google.monitoring.dashboard.v1.AlertChart alert_chart = 7;
  bool has_alert_chart() const;
  private:
  bool _internal_has_alert_chart() const;
  public:
  void clear_alert_chart();
  const ::google::monitoring::dashboard::v1::AlertChart& alert_chart() const;
  ::google::monitoring::dashboard::v1::AlertChart* release_alert_chart();
  ::google::monitoring::dashboard::v1::AlertChart* mutable_alert_chart();
  void set_allocated_alert_chart(::google::monitoring::dashboard::v1::AlertChart* alert_chart);
  private:
  const ::google::monitoring::dashboard::v1::AlertChart& _internal_alert_chart() const;
  ::google::monitoring::dashboard::v1::AlertChart* _internal_mutable_alert_chart();
  public:
  void unsafe_arena_set_allocated_alert_chart(
      ::google::monitoring::dashboard::v1::AlertChart* alert_chart);
  ::google::monitoring::dashboard::v1::AlertChart* unsafe_arena_release_alert_chart();

  void clear_content();
  ContentCase content_case() const;
  // @@protoc_insertion_point(class_scope:google.monitoring.dashboard.v1.Widget)
 private:
  class _Internal;
  void set_has_xy_chart();
  void set_has_scorecard();
  void set_has_text();
  void set_has_blank();
  void set_has_alert_chart();

  inline bool has_content() const;
  inline void clear_has_content();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  union ContentUnion {
    constexpr ContentUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::google::monitoring::dashboard::v1::XyChart* xy_chart_;
    ::google::monitoring::dashboard::v1::Scorecard* scorecard_;
    ::google::monitoring::dashboard::v1::Text* text_;
    PROTOBUF_NAMESPACE_ID::Empty* blank_;
    ::google::monitoring::dashboard::v1::AlertChart* alert_chart_;
  } content_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Widget

// string title = 1 [(.google.api.field_behavior) = OPTIONAL];
inline void Widget::clear_title() {
  title_.ClearToEmpty();
}
inline const std::string& Widget::title() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.title)
  return _internal_title();
}
inline void Widget::set_title(const std::string& value) {
  _internal_set_title(value);
  // @@protoc_insertion_point(field_set:google.monitoring.dashboard.v1.Widget.title)
}
inline std::string* Widget::mutable_title() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.title)
  return _internal_mutable_title();
}
inline const std::string& Widget::_internal_title() const {
  return title_.Get();
}
inline void Widget::_internal_set_title(const std::string& value) {
  
  title_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Widget::set_title(std::string&& value) {
  
  title_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.monitoring.dashboard.v1.Widget.title)
}
inline void Widget::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  title_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.monitoring.dashboard.v1.Widget.title)
}
inline void Widget::set_title(const char* value,
    size_t size) {
  
  title_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.monitoring.dashboard.v1.Widget.title)
}
inline std::string* Widget::_internal_mutable_title() {
  
  return title_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Widget::release_title() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.title)
  return title_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Widget::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  title_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.dashboard.v1.Widget.title)
}

// .google.monitoring.dashboard.v1.XyChart xy_chart = 2;
inline bool Widget::_internal_has_xy_chart() const {
  return content_case() == kXyChart;
}
inline bool Widget::has_xy_chart() const {
  return _internal_has_xy_chart();
}
inline void Widget::set_has_xy_chart() {
  _oneof_case_[0] = kXyChart;
}
inline ::google::monitoring::dashboard::v1::XyChart* Widget::release_xy_chart() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.xy_chart)
  if (_internal_has_xy_chart()) {
    clear_has_content();
      ::google::monitoring::dashboard::v1::XyChart* temp = content_.xy_chart_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    content_.xy_chart_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::monitoring::dashboard::v1::XyChart& Widget::_internal_xy_chart() const {
  return _internal_has_xy_chart()
      ? *content_.xy_chart_
      : reinterpret_cast< ::google::monitoring::dashboard::v1::XyChart&>(::google::monitoring::dashboard::v1::_XyChart_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::XyChart& Widget::xy_chart() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.xy_chart)
  return _internal_xy_chart();
}
inline ::google::monitoring::dashboard::v1::XyChart* Widget::unsafe_arena_release_xy_chart() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.monitoring.dashboard.v1.Widget.xy_chart)
  if (_internal_has_xy_chart()) {
    clear_has_content();
    ::google::monitoring::dashboard::v1::XyChart* temp = content_.xy_chart_;
    content_.xy_chart_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Widget::unsafe_arena_set_allocated_xy_chart(::google::monitoring::dashboard::v1::XyChart* xy_chart) {
  clear_content();
  if (xy_chart) {
    set_has_xy_chart();
    content_.xy_chart_ = xy_chart;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.Widget.xy_chart)
}
inline ::google::monitoring::dashboard::v1::XyChart* Widget::_internal_mutable_xy_chart() {
  if (!_internal_has_xy_chart()) {
    clear_content();
    set_has_xy_chart();
    content_.xy_chart_ = CreateMaybeMessage< ::google::monitoring::dashboard::v1::XyChart >(GetArena());
  }
  return content_.xy_chart_;
}
inline ::google::monitoring::dashboard::v1::XyChart* Widget::mutable_xy_chart() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.xy_chart)
  return _internal_mutable_xy_chart();
}

// .google.monitoring.dashboard.v1.Scorecard scorecard = 3;
inline bool Widget::_internal_has_scorecard() const {
  return content_case() == kScorecard;
}
inline bool Widget::has_scorecard() const {
  return _internal_has_scorecard();
}
inline void Widget::set_has_scorecard() {
  _oneof_case_[0] = kScorecard;
}
inline ::google::monitoring::dashboard::v1::Scorecard* Widget::release_scorecard() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.scorecard)
  if (_internal_has_scorecard()) {
    clear_has_content();
      ::google::monitoring::dashboard::v1::Scorecard* temp = content_.scorecard_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    content_.scorecard_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::monitoring::dashboard::v1::Scorecard& Widget::_internal_scorecard() const {
  return _internal_has_scorecard()
      ? *content_.scorecard_
      : reinterpret_cast< ::google::monitoring::dashboard::v1::Scorecard&>(::google::monitoring::dashboard::v1::_Scorecard_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::Scorecard& Widget::scorecard() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.scorecard)
  return _internal_scorecard();
}
inline ::google::monitoring::dashboard::v1::Scorecard* Widget::unsafe_arena_release_scorecard() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.monitoring.dashboard.v1.Widget.scorecard)
  if (_internal_has_scorecard()) {
    clear_has_content();
    ::google::monitoring::dashboard::v1::Scorecard* temp = content_.scorecard_;
    content_.scorecard_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Widget::unsafe_arena_set_allocated_scorecard(::google::monitoring::dashboard::v1::Scorecard* scorecard) {
  clear_content();
  if (scorecard) {
    set_has_scorecard();
    content_.scorecard_ = scorecard;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.Widget.scorecard)
}
inline ::google::monitoring::dashboard::v1::Scorecard* Widget::_internal_mutable_scorecard() {
  if (!_internal_has_scorecard()) {
    clear_content();
    set_has_scorecard();
    content_.scorecard_ = CreateMaybeMessage< ::google::monitoring::dashboard::v1::Scorecard >(GetArena());
  }
  return content_.scorecard_;
}
inline ::google::monitoring::dashboard::v1::Scorecard* Widget::mutable_scorecard() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.scorecard)
  return _internal_mutable_scorecard();
}

// .google.monitoring.dashboard.v1.Text text = 4;
inline bool Widget::_internal_has_text() const {
  return content_case() == kText;
}
inline bool Widget::has_text() const {
  return _internal_has_text();
}
inline void Widget::set_has_text() {
  _oneof_case_[0] = kText;
}
inline ::google::monitoring::dashboard::v1::Text* Widget::release_text() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.text)
  if (_internal_has_text()) {
    clear_has_content();
      ::google::monitoring::dashboard::v1::Text* temp = content_.text_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    content_.text_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::monitoring::dashboard::v1::Text& Widget::_internal_text() const {
  return _internal_has_text()
      ? *content_.text_
      : reinterpret_cast< ::google::monitoring::dashboard::v1::Text&>(::google::monitoring::dashboard::v1::_Text_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::Text& Widget::text() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.text)
  return _internal_text();
}
inline ::google::monitoring::dashboard::v1::Text* Widget::unsafe_arena_release_text() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.monitoring.dashboard.v1.Widget.text)
  if (_internal_has_text()) {
    clear_has_content();
    ::google::monitoring::dashboard::v1::Text* temp = content_.text_;
    content_.text_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Widget::unsafe_arena_set_allocated_text(::google::monitoring::dashboard::v1::Text* text) {
  clear_content();
  if (text) {
    set_has_text();
    content_.text_ = text;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.Widget.text)
}
inline ::google::monitoring::dashboard::v1::Text* Widget::_internal_mutable_text() {
  if (!_internal_has_text()) {
    clear_content();
    set_has_text();
    content_.text_ = CreateMaybeMessage< ::google::monitoring::dashboard::v1::Text >(GetArena());
  }
  return content_.text_;
}
inline ::google::monitoring::dashboard::v1::Text* Widget::mutable_text() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.text)
  return _internal_mutable_text();
}

// .google.protobuf.Empty blank = 5;
inline bool Widget::_internal_has_blank() const {
  return content_case() == kBlank;
}
inline bool Widget::has_blank() const {
  return _internal_has_blank();
}
inline void Widget::set_has_blank() {
  _oneof_case_[0] = kBlank;
}
inline PROTOBUF_NAMESPACE_ID::Empty* Widget::release_blank() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.blank)
  if (_internal_has_blank()) {
    clear_has_content();
      PROTOBUF_NAMESPACE_ID::Empty* temp = content_.blank_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    content_.blank_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const PROTOBUF_NAMESPACE_ID::Empty& Widget::_internal_blank() const {
  return _internal_has_blank()
      ? *content_.blank_
      : reinterpret_cast< PROTOBUF_NAMESPACE_ID::Empty&>(PROTOBUF_NAMESPACE_ID::_Empty_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Empty& Widget::blank() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.blank)
  return _internal_blank();
}
inline PROTOBUF_NAMESPACE_ID::Empty* Widget::unsafe_arena_release_blank() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.monitoring.dashboard.v1.Widget.blank)
  if (_internal_has_blank()) {
    clear_has_content();
    PROTOBUF_NAMESPACE_ID::Empty* temp = content_.blank_;
    content_.blank_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Widget::unsafe_arena_set_allocated_blank(PROTOBUF_NAMESPACE_ID::Empty* blank) {
  clear_content();
  if (blank) {
    set_has_blank();
    content_.blank_ = blank;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.Widget.blank)
}
inline PROTOBUF_NAMESPACE_ID::Empty* Widget::_internal_mutable_blank() {
  if (!_internal_has_blank()) {
    clear_content();
    set_has_blank();
    content_.blank_ = CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Empty >(GetArena());
  }
  return content_.blank_;
}
inline PROTOBUF_NAMESPACE_ID::Empty* Widget::mutable_blank() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.blank)
  return _internal_mutable_blank();
}

// .google.monitoring.dashboard.v1.AlertChart alert_chart = 7;
inline bool Widget::_internal_has_alert_chart() const {
  return content_case() == kAlertChart;
}
inline bool Widget::has_alert_chart() const {
  return _internal_has_alert_chart();
}
inline void Widget::set_has_alert_chart() {
  _oneof_case_[0] = kAlertChart;
}
inline ::google::monitoring::dashboard::v1::AlertChart* Widget::release_alert_chart() {
  // @@protoc_insertion_point(field_release:google.monitoring.dashboard.v1.Widget.alert_chart)
  if (_internal_has_alert_chart()) {
    clear_has_content();
      ::google::monitoring::dashboard::v1::AlertChart* temp = content_.alert_chart_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    content_.alert_chart_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::monitoring::dashboard::v1::AlertChart& Widget::_internal_alert_chart() const {
  return _internal_has_alert_chart()
      ? *content_.alert_chart_
      : reinterpret_cast< ::google::monitoring::dashboard::v1::AlertChart&>(::google::monitoring::dashboard::v1::_AlertChart_default_instance_);
}
inline const ::google::monitoring::dashboard::v1::AlertChart& Widget::alert_chart() const {
  // @@protoc_insertion_point(field_get:google.monitoring.dashboard.v1.Widget.alert_chart)
  return _internal_alert_chart();
}
inline ::google::monitoring::dashboard::v1::AlertChart* Widget::unsafe_arena_release_alert_chart() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.monitoring.dashboard.v1.Widget.alert_chart)
  if (_internal_has_alert_chart()) {
    clear_has_content();
    ::google::monitoring::dashboard::v1::AlertChart* temp = content_.alert_chart_;
    content_.alert_chart_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Widget::unsafe_arena_set_allocated_alert_chart(::google::monitoring::dashboard::v1::AlertChart* alert_chart) {
  clear_content();
  if (alert_chart) {
    set_has_alert_chart();
    content_.alert_chart_ = alert_chart;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.monitoring.dashboard.v1.Widget.alert_chart)
}
inline ::google::monitoring::dashboard::v1::AlertChart* Widget::_internal_mutable_alert_chart() {
  if (!_internal_has_alert_chart()) {
    clear_content();
    set_has_alert_chart();
    content_.alert_chart_ = CreateMaybeMessage< ::google::monitoring::dashboard::v1::AlertChart >(GetArena());
  }
  return content_.alert_chart_;
}
inline ::google::monitoring::dashboard::v1::AlertChart* Widget::mutable_alert_chart() {
  // @@protoc_insertion_point(field_mutable:google.monitoring.dashboard.v1.Widget.alert_chart)
  return _internal_mutable_alert_chart();
}

inline bool Widget::has_content() const {
  return content_case() != CONTENT_NOT_SET;
}
inline void Widget::clear_has_content() {
  _oneof_case_[0] = CONTENT_NOT_SET;
}
inline Widget::ContentCase Widget::content_case() const {
  return Widget::ContentCase(_oneof_case_[0]);
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fmonitoring_2fdashboard_2fv1_2fwidget_2eproto