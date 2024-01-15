// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_net_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_net_2eproto

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
#include "pinconnection.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_net_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_net_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_net_2eproto;
namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {
class Net;
struct NetDefaultTypeInternal;
extern NetDefaultTypeInternal _Net_default_instance_;
}  // namespace ProductModel
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> ::Odb::Lib::Protobuf::ProductModel::Net* Arena::CreateMaybeMessage<::Odb::Lib::Protobuf::ProductModel::Net>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {

// ===================================================================

class Net final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Odb.Lib.Protobuf.ProductModel.Net) */ {
 public:
  inline Net() : Net(nullptr) {}
  ~Net() override;
  explicit PROTOBUF_CONSTEXPR Net(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Net(const Net& from);
  Net(Net&& from) noexcept
    : Net() {
    *this = ::std::move(from);
  }

  inline Net& operator=(const Net& from) {
    CopyFrom(from);
    return *this;
  }
  inline Net& operator=(Net&& from) noexcept {
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
  static const Net& default_instance() {
    return *internal_default_instance();
  }
  static inline const Net* internal_default_instance() {
    return reinterpret_cast<const Net*>(
               &_Net_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Net& a, Net& b) {
    a.Swap(&b);
  }
  inline void Swap(Net* other) {
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
  void UnsafeArenaSwap(Net* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Net* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Net>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Net& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Net& from) {
    Net::MergeImpl(*this, from);
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
  void InternalSwap(Net* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Odb.Lib.Protobuf.ProductModel.Net";
  }
  protected:
  explicit Net(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPinConnectionsFieldNumber = 2,
    kNameFieldNumber = 1,
    kIndexFieldNumber = 3,
  };
  // repeated .Odb.Lib.Protobuf.ProductModel.PinConnection pinConnections = 2;
  int pinconnections_size() const;
  private:
  int _internal_pinconnections_size() const;
  public:
  void clear_pinconnections();
  ::Odb::Lib::Protobuf::ProductModel::PinConnection* mutable_pinconnections(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Odb::Lib::Protobuf::ProductModel::PinConnection >*
      mutable_pinconnections();
  private:
  const ::Odb::Lib::Protobuf::ProductModel::PinConnection& _internal_pinconnections(int index) const;
  ::Odb::Lib::Protobuf::ProductModel::PinConnection* _internal_add_pinconnections();
  public:
  const ::Odb::Lib::Protobuf::ProductModel::PinConnection& pinconnections(int index) const;
  ::Odb::Lib::Protobuf::ProductModel::PinConnection* add_pinconnections();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Odb::Lib::Protobuf::ProductModel::PinConnection >&
      pinconnections() const;

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

  // optional uint32 index = 3;
  bool has_index() const;
  private:
  bool _internal_has_index() const;
  public:
  void clear_index();
  uint32_t index() const;
  void set_index(uint32_t value);
  private:
  uint32_t _internal_index() const;
  void _internal_set_index(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Odb.Lib.Protobuf.ProductModel.Net)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Odb::Lib::Protobuf::ProductModel::PinConnection > pinconnections_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    uint32_t index_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_net_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Net

// optional string name = 1;
inline bool Net::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Net::has_name() const {
  return _internal_has_name();
}
inline void Net::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Net::name() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.Net.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Net::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.ProductModel.Net.name)
}
inline std::string* Net::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.ProductModel.Net.name)
  return _s;
}
inline const std::string& Net::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Net::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Net::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Net::release_name() {
  // @@protoc_insertion_point(field_release:Odb.Lib.Protobuf.ProductModel.Net.name)
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
inline void Net::set_allocated_name(std::string* name) {
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
  // @@protoc_insertion_point(field_set_allocated:Odb.Lib.Protobuf.ProductModel.Net.name)
}

// repeated .Odb.Lib.Protobuf.ProductModel.PinConnection pinConnections = 2;
inline int Net::_internal_pinconnections_size() const {
  return _impl_.pinconnections_.size();
}
inline int Net::pinconnections_size() const {
  return _internal_pinconnections_size();
}
inline ::Odb::Lib::Protobuf::ProductModel::PinConnection* Net::mutable_pinconnections(int index) {
  // @@protoc_insertion_point(field_mutable:Odb.Lib.Protobuf.ProductModel.Net.pinConnections)
  return _impl_.pinconnections_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Odb::Lib::Protobuf::ProductModel::PinConnection >*
Net::mutable_pinconnections() {
  // @@protoc_insertion_point(field_mutable_list:Odb.Lib.Protobuf.ProductModel.Net.pinConnections)
  return &_impl_.pinconnections_;
}
inline const ::Odb::Lib::Protobuf::ProductModel::PinConnection& Net::_internal_pinconnections(int index) const {
  return _impl_.pinconnections_.Get(index);
}
inline const ::Odb::Lib::Protobuf::ProductModel::PinConnection& Net::pinconnections(int index) const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.Net.pinConnections)
  return _internal_pinconnections(index);
}
inline ::Odb::Lib::Protobuf::ProductModel::PinConnection* Net::_internal_add_pinconnections() {
  return _impl_.pinconnections_.Add();
}
inline ::Odb::Lib::Protobuf::ProductModel::PinConnection* Net::add_pinconnections() {
  ::Odb::Lib::Protobuf::ProductModel::PinConnection* _add = _internal_add_pinconnections();
  // @@protoc_insertion_point(field_add:Odb.Lib.Protobuf.ProductModel.Net.pinConnections)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Odb::Lib::Protobuf::ProductModel::PinConnection >&
Net::pinconnections() const {
  // @@protoc_insertion_point(field_list:Odb.Lib.Protobuf.ProductModel.Net.pinConnections)
  return _impl_.pinconnections_;
}

// optional uint32 index = 3;
inline bool Net::_internal_has_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Net::has_index() const {
  return _internal_has_index();
}
inline void Net::clear_index() {
  _impl_.index_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline uint32_t Net::_internal_index() const {
  return _impl_.index_;
}
inline uint32_t Net::index() const {
  // @@protoc_insertion_point(field_get:Odb.Lib.Protobuf.ProductModel.Net.index)
  return _internal_index();
}
inline void Net::_internal_set_index(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.index_ = value;
}
inline void Net::set_index(uint32_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:Odb.Lib.Protobuf.ProductModel.Net.index)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_net_2eproto
