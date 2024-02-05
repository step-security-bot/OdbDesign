// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pinconnection.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pinconnection_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pinconnection_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "component.pb.h"
#include "pin.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pinconnection_2eproto ODBDESIGN_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct ODBDESIGN_EXPORT TableStruct_pinconnection_2eproto {
  static const uint32_t offsets[];
};
ODBDESIGN_EXPORT extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pinconnection_2eproto;
namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {
class PinConnection;
struct PinConnectionDefaultTypeInternal;
ODBDESIGN_EXPORT extern PinConnectionDefaultTypeInternal _PinConnection_default_instance_;
}  // namespace ProductModel
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> ODBDESIGN_EXPORT ::Odb::Lib::Protobuf::ProductModel::PinConnection* Arena::CreateMaybeMessage<::Odb::Lib::Protobuf::ProductModel::PinConnection>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {

// ===================================================================

class ODBDESIGN_EXPORT PinConnection final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Odb.Lib.Protobuf.ProductModel.PinConnection) */ {
 public:
  inline PinConnection() : PinConnection(nullptr) {}
  ~PinConnection() override;
  explicit PROTOBUF_CONSTEXPR PinConnection(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PinConnection(const PinConnection& from);
  PinConnection(PinConnection&& from) noexcept
    : PinConnection() {
    *this = ::std::move(from);
  }

  inline PinConnection& operator=(const PinConnection& from) {
    CopyFrom(from);
    return *this;
  }
  inline PinConnection& operator=(PinConnection&& from) noexcept {
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
  static const PinConnection& default_instance() {
    return *internal_default_instance();
  }
  static inline const PinConnection* internal_default_instance() {
    return reinterpret_cast<const PinConnection*>(
               &_PinConnection_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PinConnection& a, PinConnection& b) {
    a.Swap(&b);
  }
  inline void Swap(PinConnection* other) {
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
  void UnsafeArenaSwap(PinConnection* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PinConnection* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PinConnection>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PinConnection& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PinConnection& from) {
    PinConnection::MergeImpl(*this, from);
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
  void InternalSwap(PinConnection* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Odb.Lib.Protobuf.ProductModel.PinConnection";
  }
  protected:
  explicit PinConnection(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kComponentFieldNumber = 2,
    kPinFieldNumber = 3,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .Odb.Lib.Protobuf.ProductModel.Component component = 2;
  bool has_component() const;
  private:
  bool _internal_has_component() const;
  public:
  void clear_component();
  const ::Odb::Lib::Protobuf::ProductModel::Component& component() const;
  PROTOBUF_NODISCARD ::Odb::Lib::Protobuf::ProductModel::Component* release_component();
  ::Odb::Lib::Protobuf::ProductModel::Component* mutable_component();
  void set_allocated_component(::Odb::Lib::Protobuf::ProductModel::Component* component);
  private:
  const ::Odb::Lib::Protobuf::ProductModel::Component& _internal_component() const;
  ::Odb::Lib::Protobuf::ProductModel::Component* _internal_mutable_component();
  public:
  void unsafe_arena_set_allocated_component(
      ::Odb::Lib::Protobuf::ProductModel::Component* component);
  ::Odb::Lib::Protobuf::ProductModel::Component* unsafe_arena_release_component();

  // optional .Odb.Lib.Protobuf.ProductModel.Pin pin = 3;
  bool has_pin() const;
  private:
  bool _internal_has_pin() const;
  public:
  void clear_pin();
  const ::Odb::Lib::Protobuf::ProductModel::Pin& pin() const;
  PROTOBUF_NODISCARD ::Odb::Lib::Protobuf::ProductModel::Pin* release_pin();
  ::Odb::Lib::Protobuf::ProductModel::Pin* mutable_pin();
  void set_allocated_pin(::Odb::Lib::Protobuf::ProductModel::Pin* pin);
  private:
  const ::Odb::Lib::Protobuf::ProductModel::Pin& _internal_pin() const;
  ::Odb::Lib::Protobuf::ProductModel::Pin* _internal_mutable_pin();
  public:
  void unsafe_arena_set_allocated_pin(
      ::Odb::Lib::Protobuf::ProductModel::Pin* pin);
  ::Odb::Lib::Protobuf::ProductModel::Pin* unsafe_arena_release_pin();

  // @@protoc_insertion_point(class_scope:Odb.Lib.Protobuf.ProductModel.PinConnection)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::Odb::Lib::Protobuf::ProductModel::Component* component_;
    ::Odb::Lib::Protobuf::ProductModel::Pin* pin_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_pinconnection_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PinConnection

// optional string name = 1;
inline bool PinConnection::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PinConnection::has_name() const {
  return _internal_has_name();
}
inline void PinConnection::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PinConnection::name() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.PinConnection.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PinConnection::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.ProductModel.PinConnection.name)
}
inline std::string* PinConnection::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.ProductModel.PinConnection.name)
  return _s;
}
inline const std::string& PinConnection::_internal_name() const {
  return _impl_.name_.Get();
}
inline void PinConnection::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* PinConnection::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* PinConnection::release_name() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.ProductModel.PinConnection.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void PinConnection::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.ProductModel.PinConnection.name)
}

// optional .Odb.Lib.Protobuf.ProductModel.Component component = 2;
inline bool PinConnection::_internal_has_component() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.component_ != nullptr);
  return value;
}
inline bool PinConnection::has_component() const {
  return _internal_has_component();
}
inline const ::Odb::Lib::Protobuf::ProductModel::Component& PinConnection::_internal_component() const {
  const ::Odb::Lib::Protobuf::ProductModel::Component* p = _impl_.component_;
  return p != nullptr ? *p : reinterpret_cast<const ::Odb::Lib::Protobuf::ProductModel::Component&>(
      ::Odb::Lib::Protobuf::ProductModel::_Component_default_instance_);
}
inline const ::Odb::Lib::Protobuf::ProductModel::Component& PinConnection::component() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.PinConnection.component)
  return _internal_component();
}
inline void PinConnection::unsafe_arena_set_allocated_component(
    ::Odb::Lib::Protobuf::ProductModel::Component* component) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.component_);
  }
  _impl_.component_ = component;
  if (component) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Odb.Lib.Protobuf.ProductModel.PinConnection.component)
}
inline ::Odb::Lib::Protobuf::ProductModel::Component* PinConnection::release_component() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::Odb::Lib::Protobuf::ProductModel::Component* temp = _impl_.component_;
  _impl_.component_ = nullptr;
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
inline ::Odb::Lib::Protobuf::ProductModel::Component* PinConnection::unsafe_arena_release_component() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.ProductModel.PinConnection.component)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::Odb::Lib::Protobuf::ProductModel::Component* temp = _impl_.component_;
  _impl_.component_ = nullptr;
  return temp;
}
inline ::Odb::Lib::Protobuf::ProductModel::Component* PinConnection::_internal_mutable_component() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.component_ == nullptr) {
    auto* p = CreateMaybeMessage<::Odb::Lib::Protobuf::ProductModel::Component>(GetArenaForAllocation());
    _impl_.component_ = p;
  }
  return _impl_.component_;
}
inline ::Odb::Lib::Protobuf::ProductModel::Component* PinConnection::mutable_component() {
  ::Odb::Lib::Protobuf::ProductModel::Component* _msg = _internal_mutable_component();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.ProductModel.PinConnection.component)
  return _msg;
}
inline void PinConnection::set_allocated_component(::Odb::Lib::Protobuf::ProductModel::Component* component) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.component_);
  }
  if (component) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(component));
    if (message_arena != submessage_arena) {
      component = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, component, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.component_ = component;
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.ProductModel.PinConnection.component)
}

// optional .Odb.Lib.Protobuf.ProductModel.Pin pin = 3;
inline bool PinConnection::_internal_has_pin() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.pin_ != nullptr);
  return value;
}
inline bool PinConnection::has_pin() const {
  return _internal_has_pin();
}
inline const ::Odb::Lib::Protobuf::ProductModel::Pin& PinConnection::_internal_pin() const {
  const ::Odb::Lib::Protobuf::ProductModel::Pin* p = _impl_.pin_;
  return p != nullptr ? *p : reinterpret_cast<const ::Odb::Lib::Protobuf::ProductModel::Pin&>(
      ::Odb::Lib::Protobuf::ProductModel::_Pin_default_instance_);
}
inline const ::Odb::Lib::Protobuf::ProductModel::Pin& PinConnection::pin() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.PinConnection.pin)
  return _internal_pin();
}
inline void PinConnection::unsafe_arena_set_allocated_pin(
    ::Odb::Lib::Protobuf::ProductModel::Pin* pin) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pin_);
  }
  _impl_.pin_ = pin;
  if (pin) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Odb.Lib.Protobuf.ProductModel.PinConnection.pin)
}
inline ::Odb::Lib::Protobuf::ProductModel::Pin* PinConnection::release_pin() {
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::Odb::Lib::Protobuf::ProductModel::Pin* temp = _impl_.pin_;
  _impl_.pin_ = nullptr;
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
inline ::Odb::Lib::Protobuf::ProductModel::Pin* PinConnection::unsafe_arena_release_pin() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.ProductModel.PinConnection.pin)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::Odb::Lib::Protobuf::ProductModel::Pin* temp = _impl_.pin_;
  _impl_.pin_ = nullptr;
  return temp;
}
inline ::Odb::Lib::Protobuf::ProductModel::Pin* PinConnection::_internal_mutable_pin() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.pin_ == nullptr) {
    auto* p = CreateMaybeMessage<::Odb::Lib::Protobuf::ProductModel::Pin>(GetArenaForAllocation());
    _impl_.pin_ = p;
  }
  return _impl_.pin_;
}
inline ::Odb::Lib::Protobuf::ProductModel::Pin* PinConnection::mutable_pin() {
  ::Odb::Lib::Protobuf::ProductModel::Pin* _msg = _internal_mutable_pin();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.ProductModel.PinConnection.pin)
  return _msg;
}
inline void PinConnection::set_allocated_pin(::Odb::Lib::Protobuf::ProductModel::Pin* pin) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pin_);
  }
  if (pin) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pin));
    if (message_arena != submessage_arena) {
      pin = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pin, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.pin_ = pin;
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.ProductModel.PinConnection.pin)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace ProductModel
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pinconnection_2eproto