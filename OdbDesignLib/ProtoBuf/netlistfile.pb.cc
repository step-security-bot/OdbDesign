// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: netlistfile.proto

#include "netlistfile.pb.h"

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
PROTOBUF_CONSTEXPR NetlistFile::NetlistFile(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.netnames_)*/{}
  , /*decltype(_impl_.path_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.units_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.optimized_)*/false
  , /*decltype(_impl_.staggered_)*/0} {}
struct NetlistFileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetlistFileDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetlistFileDefaultTypeInternal() {}
  union {
    NetlistFile _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetlistFileDefaultTypeInternal _NetlistFile_default_instance_;
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
static ::_pb::Metadata file_level_metadata_netlistfile_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_netlistfile_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_netlistfile_2eproto = nullptr;

const uint32_t TableStruct_netlistfile_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.path_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.units_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.optimized_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.staggered_),
  PROTOBUF_FIELD_OFFSET(::Odb::Lib::Protobuf::NetlistFile, _impl_.netnames_),
  0,
  1,
  2,
  3,
  4,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::Odb::Lib::Protobuf::NetlistFile)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Odb::Lib::Protobuf::_NetlistFile_default_instance_._instance,
};

const char descriptor_table_protodef_netlistfile_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021netlistfile.proto\022\020Odb.Lib.Protobuf\"\225\002"
  "\n\013NetlistFile\022\021\n\004path\030\001 \001(\tH\000\210\001\001\022\021\n\004name"
  "\030\002 \001(\tH\001\210\001\001\022\022\n\005units\030\003 \001(\tH\002\210\001\001\022\026\n\toptim"
  "ized\030\004 \001(\010H\003\210\001\001\022\?\n\tstaggered\030\005 \001(\0162\'.Odb"
  ".Lib.Protobuf.NetlistFile.StaggeredH\004\210\001\001"
  "\022\020\n\010netNames\030\006 \003(\t\")\n\tStaggered\022\007\n\003Yes\020\000"
  "\022\006\n\002No\020\001\022\013\n\007Unknown\020\002B\007\n\005_pathB\007\n\005_nameB"
  "\010\n\006_unitsB\014\n\n_optimizedB\014\n\n_staggeredb\006p"
  "roto3"
  ;
static ::_pbi::once_flag descriptor_table_netlistfile_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_netlistfile_2eproto = {
    false, false, 325, descriptor_table_protodef_netlistfile_2eproto,
    "netlistfile.proto",
    &descriptor_table_netlistfile_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_netlistfile_2eproto::offsets,
    file_level_metadata_netlistfile_2eproto, file_level_enum_descriptors_netlistfile_2eproto,
    file_level_service_descriptors_netlistfile_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_netlistfile_2eproto_getter() {
  return &descriptor_table_netlistfile_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_netlistfile_2eproto(&descriptor_table_netlistfile_2eproto);
namespace Odb {
namespace Lib {
namespace Protobuf {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* NetlistFile_Staggered_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_netlistfile_2eproto);
  return file_level_enum_descriptors_netlistfile_2eproto[0];
}
bool NetlistFile_Staggered_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr NetlistFile_Staggered NetlistFile::Yes;
constexpr NetlistFile_Staggered NetlistFile::No;
constexpr NetlistFile_Staggered NetlistFile::Unknown;
constexpr NetlistFile_Staggered NetlistFile::Staggered_MIN;
constexpr NetlistFile_Staggered NetlistFile::Staggered_MAX;
constexpr int NetlistFile::Staggered_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class NetlistFile::_Internal {
 public:
  using HasBits = decltype(std::declval<NetlistFile>()._impl_._has_bits_);
  static void set_has_path(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_units(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_optimized(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_staggered(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

NetlistFile::NetlistFile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Odb.Lib.Protobuf.NetlistFile)
}
NetlistFile::NetlistFile(const NetlistFile& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  NetlistFile* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.netnames_){from._impl_.netnames_}
    , decltype(_impl_.path_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.units_){}
    , decltype(_impl_.optimized_){}
    , decltype(_impl_.staggered_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.path_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_path()) {
    _this->_impl_.path_.Set(from._internal_path(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.units_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.units_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_units()) {
    _this->_impl_.units_.Set(from._internal_units(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.optimized_, &from._impl_.optimized_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.staggered_) -
    reinterpret_cast<char*>(&_impl_.optimized_)) + sizeof(_impl_.staggered_));
  // @@protoc_insertion_point(copy_constructor:Odb.Lib.Protobuf.NetlistFile)
}

inline void NetlistFile::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.netnames_){arena}
    , decltype(_impl_.path_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.units_){}
    , decltype(_impl_.optimized_){false}
    , decltype(_impl_.staggered_){0}
  };
  _impl_.path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.path_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.units_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.units_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

NetlistFile::~NetlistFile() {
  // @@protoc_insertion_point(destructor:Odb.Lib.Protobuf.NetlistFile)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetlistFile::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.netnames_.~RepeatedPtrField();
  _impl_.path_.Destroy();
  _impl_.name_.Destroy();
  _impl_.units_.Destroy();
}

void NetlistFile::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NetlistFile::Clear() {
// @@protoc_insertion_point(message_clear_start:Odb.Lib.Protobuf.NetlistFile)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.netnames_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.path_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.units_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&_impl_.optimized_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.staggered_) -
        reinterpret_cast<char*>(&_impl_.optimized_)) + sizeof(_impl_.staggered_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetlistFile::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_path();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.NetlistFile.path"));
        } else
          goto handle_unusual;
        continue;
      // optional string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.NetlistFile.name"));
        } else
          goto handle_unusual;
        continue;
      // optional string units = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_units();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.NetlistFile.units"));
        } else
          goto handle_unusual;
        continue;
      // optional bool optimized = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_optimized(&has_bits);
          _impl_.optimized_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .Odb.Lib.Protobuf.NetlistFile.Staggered staggered = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_staggered(static_cast<::Odb::Lib::Protobuf::NetlistFile_Staggered>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated string netNames = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_netnames();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Odb.Lib.Protobuf.NetlistFile.netNames"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
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

uint8_t* NetlistFile::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Odb.Lib.Protobuf.NetlistFile)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string path = 1;
  if (_internal_has_path()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_path().data(), static_cast<int>(this->_internal_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.NetlistFile.path");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_path(), target);
  }

  // optional string name = 2;
  if (_internal_has_name()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.NetlistFile.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional string units = 3;
  if (_internal_has_units()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_units().data(), static_cast<int>(this->_internal_units().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.NetlistFile.units");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_units(), target);
  }

  // optional bool optimized = 4;
  if (_internal_has_optimized()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_optimized(), target);
  }

  // optional .Odb.Lib.Protobuf.NetlistFile.Staggered staggered = 5;
  if (_internal_has_staggered()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_staggered(), target);
  }

  // repeated string netNames = 6;
  for (int i = 0, n = this->_internal_netnames_size(); i < n; i++) {
    const auto& s = this->_internal_netnames(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Odb.Lib.Protobuf.NetlistFile.netNames");
    target = stream->WriteString(6, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Odb.Lib.Protobuf.NetlistFile)
  return target;
}

size_t NetlistFile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Odb.Lib.Protobuf.NetlistFile)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string netNames = 6;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.netnames_.size());
  for (int i = 0, n = _impl_.netnames_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.netnames_.Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string path = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_path());
    }

    // optional string name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string units = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_units());
    }

    // optional bool optimized = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional .Odb.Lib.Protobuf.NetlistFile.Staggered staggered = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_staggered());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NetlistFile::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    NetlistFile::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NetlistFile::GetClassData() const { return &_class_data_; }


void NetlistFile::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<NetlistFile*>(&to_msg);
  auto& from = static_cast<const NetlistFile&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Odb.Lib.Protobuf.NetlistFile)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.netnames_.MergeFrom(from._impl_.netnames_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_path(from._internal_path());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_units(from._internal_units());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.optimized_ = from._impl_.optimized_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.staggered_ = from._impl_.staggered_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NetlistFile::CopyFrom(const NetlistFile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Odb.Lib.Protobuf.NetlistFile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetlistFile::IsInitialized() const {
  return true;
}

void NetlistFile::InternalSwap(NetlistFile* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.netnames_.InternalSwap(&other->_impl_.netnames_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.path_, lhs_arena,
      &other->_impl_.path_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.units_, lhs_arena,
      &other->_impl_.units_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NetlistFile, _impl_.staggered_)
      + sizeof(NetlistFile::_impl_.staggered_)
      - PROTOBUF_FIELD_OFFSET(NetlistFile, _impl_.optimized_)>(
          reinterpret_cast<char*>(&_impl_.optimized_),
          reinterpret_cast<char*>(&other->_impl_.optimized_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NetlistFile::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_netlistfile_2eproto_getter, &descriptor_table_netlistfile_2eproto_once,
      file_level_metadata_netlistfile_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Odb::Lib::Protobuf::NetlistFile*
Arena::CreateMaybeMessage< ::Odb::Lib::Protobuf::NetlistFile >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Odb::Lib::Protobuf::NetlistFile >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>