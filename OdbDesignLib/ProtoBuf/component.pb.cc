// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: component.proto

#include "component.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {
PROTOBUF_CONSTEXPR Component::Component(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.refdes_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.partname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.package_)*/nullptr
  , /*decltype(_impl_.part_)*/nullptr
  , /*decltype(_impl_.index_)*/0u
  , /*decltype(_impl_.side_)*/0} {}
struct ComponentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ComponentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ComponentDefaultTypeInternal() {}
  union {
    Component _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ComponentDefaultTypeInternal _Component_default_instance_;
}  // namespace ProductModel
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
static ::_pb::Metadata file_level_metadata_component_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_component_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_component_2eproto = nullptr;

const uint32_t TableStruct_component_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.refdes_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.partname_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.package_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.index_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.side_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::ProductModel::Component, _impl_.part_),
  0,
  1,
  2,
  4,
  5,
  3,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::Odb::Lib::Protobuf::ProductModel::Component)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Odb::Lib::Protobuf::ProductModel::_Component_default_instance_._instance,
};

const char descriptor_table_protodef_component_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017component.proto\022\035Odb.Lib.Protobuf.Prod"
  "uctModel\032\013enums.proto\032\npart.proto\032\rpacka"
  "ge.proto\"\261\002\n\tComponent\022\023\n\006refDes\030\001 \001(\tH\000"
  "\210\001\001\022\025\n\010partName\030\002 \001(\tH\001\210\001\001\022<\n\007package\030\003 "
  "\001(\0132&.Odb.Lib.Protobuf.ProductModel.Pack"
  "ageH\002\210\001\001\022\022\n\005index\030\004 \001(\rH\003\210\001\001\022.\n\004side\030\005 \001"
  "(\0162\033.Odb.Lib.Protobuf.BoardSideH\004\210\001\001\0226\n\004"
  "part\030\006 \001(\0132#.Odb.Lib.Protobuf.ProductMod"
  "el.PartH\005\210\001\001B\t\n\007_refDesB\013\n\t_partNameB\n\n\010"
  "_packageB\010\n\006_indexB\007\n\005_sideB\007\n\005_partb\006pr"
  "oto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_component_2eproto_deps[3] = {
  &::descriptor_table_enums_2eproto,
  &::descriptor_table_package_2eproto,
  &::descriptor_table_part_2eproto,
};
static ::_pbi::once_flag descriptor_table_component_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_component_2eproto = {
    false, false, 404, descriptor_table_protodef_component_2eproto,
    "component.proto",
    &descriptor_table_component_2eproto_once, descriptor_table_component_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_component_2eproto::offsets,
    file_level_metadata_component_2eproto, file_level_enum_descriptors_component_2eproto,
    file_level_service_descriptors_component_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_component_2eproto_getter() {
  return &descriptor_table_component_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_component_2eproto(&descriptor_table_component_2eproto);
namespace Odb {
namespace Lib {
namespace Protobuf {
namespace ProductModel {

// ===================================================================

class Component::_Internal {
 public:
  using HasBits = decltype(std::declval<Component>()._impl_._has_bits_);
  static void set_has_refdes(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_partname(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::Odb::Lib::Protobuf::ProductModel::Package& package(const Component* msg);
  static void set_has_package(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_index(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_side(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static const ::Odb::Lib::Protobuf::ProductModel::Part& part(const Component* msg);
  static void set_has_part(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::Odb::Lib::Protobuf::ProductModel::Package&
Component::_Internal::package(const Component* msg) {
  return *msg->_impl_.package_;
}
const ::Odb::Lib::Protobuf::ProductModel::Part&
Component::_Internal::part(const Component* msg) {
  return *msg->_impl_.part_;
}
void Component::clear_package() {
  if (_impl_.package_ != nullptr) _impl_.package_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void Component::clear_part() {
  if (_impl_.part_ != nullptr) _impl_.part_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
Component::Component(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Odb.Lib.Protobuf.ProductModel.Component)
}
Component::Component(const Component& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Component* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.refdes_){}
    , decltype(_impl_.partname_){}
    , decltype(_impl_.package_){nullptr}
    , decltype(_impl_.part_){nullptr}
    , decltype(_impl_.index_){}
    , decltype(_impl_.side_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.refdes_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.refdes_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_refdes()) {
    _this->_impl_.refdes_.Set(from._internal_refdes(), 
      _this->GetArenaForAllocation());
  }
  _impl_.partname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.partname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_partname()) {
    _this->_impl_.partname_.Set(from._internal_partname(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_package()) {
    _this->_impl_.package_ = new ::Odb::Lib::Protobuf::ProductModel::Package(*from._impl_.package_);
  }
  if (from._internal_has_part()) {
    _this->_impl_.part_ = new ::Odb::Lib::Protobuf::ProductModel::Part(*from._impl_.part_);
  }
  ::memcpy(&_impl_.index_, &from._impl_.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.side_) -
    reinterpret_cast<char*>(&_impl_.index_)) + sizeof(_impl_.side_));
  // @@protoc_insertion_point(copy_constructor:Odb.Lib.Protobuf.ProductModel.Component)
}

inline void Component::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.refdes_){}
    , decltype(_impl_.partname_){}
    , decltype(_impl_.package_){nullptr}
    , decltype(_impl_.part_){nullptr}
    , decltype(_impl_.index_){0u}
    , decltype(_impl_.side_){0}
  };
  _impl_.refdes_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.refdes_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.partname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.partname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Component::~Component() {
  // @@protoc_insertion_point(destructor:Odb.Lib.Protobuf.ProductModel.Component)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Component::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.refdes_.Destroy();
  _impl_.partname_.Destroy();
  if (this != internal_default_instance()) delete _impl_.package_;
  if (this != internal_default_instance()) delete _impl_.part_;
}

void Component::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Component::Clear() {
// @@protoc_insertion_point(message_clear_start:Odb.Lib.Protobuf.ProductModel.Component)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.refdes_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.partname_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.package_ != nullptr);
      _impl_.package_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(_impl_.part_ != nullptr);
      _impl_.part_->Clear();
    }
  }
  if (cached_has_bits & 0x00000030u) {
    ::memset(&_impl_.index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.side_) -
        reinterpret_cast<char*>(&_impl_.index_)) + sizeof(_impl_.side_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Component::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string refDes = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_refdes();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.ProductModel.Component.refDes"));
        } else
          goto handle_unusual;
        continue;
      // optional string partName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_partname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.ProductModel.Component.partName"));
        } else
          goto handle_unusual;
        continue;
      // optional .Odb.Lib.Protobuf.ProductModel.Package package = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_package(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 index = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_index(&has_bits);
          _impl_.index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .Odb.Lib.Protobuf.BoardSide side = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_side(static_cast<::Odb::Lib::Protobuf::BoardSide>(val));
        } else
          goto handle_unusual;
        continue;
      // optional .Odb.Lib.Protobuf.ProductModel.Part part = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_part(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Component::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Odb.Lib.Protobuf.ProductModel.Component)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string refDes = 1;
  if (_internal_has_refdes()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_refdes().data(), static_cast<int>(this->_internal_refdes().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.ProductModel.Component.refDes");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_refdes(), target);
  }

  // optional string partName = 2;
  if (_internal_has_partname()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_partname().data(), static_cast<int>(this->_internal_partname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.ProductModel.Component.partName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_partname(), target);
  }

  // optional .Odb.Lib.Protobuf.ProductModel.Package package = 3;
  if (_internal_has_package()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::package(this),
        _Internal::package(this).GetCachedSize(), target, stream);
  }

  // optional uint32 index = 4;
  if (_internal_has_index()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_index(), target);
  }

  // optional .Odb.Lib.Protobuf.BoardSide side = 5;
  if (_internal_has_side()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_side(), target);
  }

  // optional .Odb.Lib.Protobuf.ProductModel.Part part = 6;
  if (_internal_has_part()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::part(this),
        _Internal::part(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Odb.Lib.Protobuf.ProductModel.Component)
  return target;
}

size_t Component::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Odb.Lib.Protobuf.ProductModel.Component)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string refDes = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_refdes());
    }

    // optional string partName = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_partname());
    }

    // optional .Odb.Lib.Protobuf.ProductModel.Package package = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.package_);
    }

    // optional .Odb.Lib.Protobuf.ProductModel.Part part = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.part_);
    }

    // optional uint32 index = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_index());
    }

    // optional .Odb.Lib.Protobuf.BoardSide side = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_side());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Component::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Component::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Component::GetClassData() const { return &_class_data_; }


void Component::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Component*>(&to_msg);
  auto& from = static_cast<const Component&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Odb.Lib.Protobuf.ProductModel.Component)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_refdes(from._internal_refdes());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_partname(from._internal_partname());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_package()->::Odb::Lib::Protobuf::ProductModel::Package::MergeFrom(
          from._internal_package());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_part()->::Odb::Lib::Protobuf::ProductModel::Part::MergeFrom(
          from._internal_part());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.index_ = from._impl_.index_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.side_ = from._impl_.side_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Component::CopyFrom(const Component& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Odb.Lib.Protobuf.ProductModel.Component)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Component::IsInitialized() const {
  return true;
}

void Component::InternalSwap(Component* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.refdes_, lhs_arena,
      &other->_impl_.refdes_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.partname_, lhs_arena,
      &other->_impl_.partname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Component, _impl_.side_)
      + sizeof(Component::_impl_.side_)
      - PROTOBUF_FIELD_OFFSET(Component, _impl_.package_)>(
          reinterpret_cast<char*>(&_impl_.package_),
          reinterpret_cast<char*>(&other->_impl_.package_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Component::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_component_2eproto_getter, &descriptor_table_component_2eproto_once,
      file_level_metadata_component_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace ProductModel
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Odb::Lib::Protobuf::ProductModel::Component*
Arena::CreateMaybeMessage< ::Odb::Lib::Protobuf::ProductModel::Component >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Odb::Lib::Protobuf::ProductModel::Component >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
