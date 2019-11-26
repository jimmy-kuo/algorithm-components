// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attrpb/attribute_data.proto

#include "attrpb/attribute_data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace algocomp {
class AttributeDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AttributeData>
      _instance;
  ::google::protobuf::internal::ArenaStringPtr str_val_;
  ::google::protobuf::int32 int_val_;
  ::google::protobuf::int64 long_val_;
  float float_val_;
  const ::algocomp::SetCateValue* scate_val_;
} _AttributeData_default_instance_;
}  // namespace algocomp
namespace protobuf_attrpb_2fattribute_5fdata_2eproto {
void InitDefaultsAttributeDataImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_attrpb_2fsetcate_5fvalue_2eproto::InitDefaultsSetCateValue();
  {
    void* ptr = &::algocomp::_AttributeData_default_instance_;
    new (ptr) ::algocomp::AttributeData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::algocomp::AttributeData::InitAsDefaultInstance();
}

void InitDefaultsAttributeData() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsAttributeDataImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeData, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeData, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeData, attr_type_),
  offsetof(::algocomp::AttributeDataDefaultTypeInternal, str_val_),
  offsetof(::algocomp::AttributeDataDefaultTypeInternal, int_val_),
  offsetof(::algocomp::AttributeDataDefaultTypeInternal, long_val_),
  offsetof(::algocomp::AttributeDataDefaultTypeInternal, float_val_),
  offsetof(::algocomp::AttributeDataDefaultTypeInternal, scate_val_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeData, oneof_attr_val_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::algocomp::AttributeData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::algocomp::_AttributeData_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "attrpb/attribute_data.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033attrpb/attribute_data.proto\022\010algocomp\032"
      "\032attrpb/setcate_value.proto\"\300\002\n\rAttribut"
      "eData\0228\n\tattr_type\030\001 \001(\0162%.algocomp.Attr"
      "ibuteData.AttributeType\022\021\n\007str_val\030\002 \001(\t"
      "H\000\022\021\n\007int_val\030\003 \001(\005H\000\022\022\n\010long_val\030\004 \001(\003H"
      "\000\022\023\n\tfloat_val\030\005 \001(\002H\000\022+\n\tscate_val\030\006 \001("
      "\0132\026.algocomp.SetCateValueH\000\"g\n\rAttribute"
      "Type\022\013\n\007UNKNOWN\020\000\022\017\n\013CATEGORICAL\020\001\022\023\n\017SE"
      "T_CATEGORICAL\020\002\022\017\n\013REAL_VALUED\020\003\022\022\n\016UNIX"
      "_TIMESTAMP\020\004B\020\n\016oneof_attr_valB!\n\010algoco"
      "mpB\020AttributeValuePbP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 433);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "attrpb/attribute_data.proto", &protobuf_RegisterTypes);
  ::protobuf_attrpb_2fsetcate_5fvalue_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_attrpb_2fattribute_5fdata_2eproto
namespace algocomp {
const ::google::protobuf::EnumDescriptor* AttributeData_AttributeType_descriptor() {
  protobuf_attrpb_2fattribute_5fdata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_attrpb_2fattribute_5fdata_2eproto::file_level_enum_descriptors[0];
}
bool AttributeData_AttributeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AttributeData_AttributeType AttributeData::UNKNOWN;
const AttributeData_AttributeType AttributeData::CATEGORICAL;
const AttributeData_AttributeType AttributeData::SET_CATEGORICAL;
const AttributeData_AttributeType AttributeData::REAL_VALUED;
const AttributeData_AttributeType AttributeData::UNIX_TIMESTAMP;
const AttributeData_AttributeType AttributeData::AttributeType_MIN;
const AttributeData_AttributeType AttributeData::AttributeType_MAX;
const int AttributeData::AttributeType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void AttributeData::InitAsDefaultInstance() {
  ::algocomp::_AttributeData_default_instance_.str_val_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::algocomp::_AttributeData_default_instance_.int_val_ = 0;
  ::algocomp::_AttributeData_default_instance_.long_val_ = GOOGLE_LONGLONG(0);
  ::algocomp::_AttributeData_default_instance_.float_val_ = 0;
  ::algocomp::_AttributeData_default_instance_.scate_val_ = const_cast< ::algocomp::SetCateValue*>(
      ::algocomp::SetCateValue::internal_default_instance());
}
void AttributeData::set_allocated_scate_val(::algocomp::SetCateValue* scate_val) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_oneof_attr_val();
  if (scate_val) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(scate_val)->GetArena();
    if (message_arena != submessage_arena) {
      scate_val = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, scate_val, submessage_arena);
    }
    set_has_scate_val();
    oneof_attr_val_.scate_val_ = scate_val;
  }
  // @@protoc_insertion_point(field_set_allocated:algocomp.AttributeData.scate_val)
}
void AttributeData::clear_scate_val() {
  if (has_scate_val()) {
    if (GetArenaNoVirtual() == NULL) {
      delete oneof_attr_val_.scate_val_;
    }
    clear_has_oneof_attr_val();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttributeData::kAttrTypeFieldNumber;
const int AttributeData::kStrValFieldNumber;
const int AttributeData::kIntValFieldNumber;
const int AttributeData::kLongValFieldNumber;
const int AttributeData::kFloatValFieldNumber;
const int AttributeData::kScateValFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AttributeData::AttributeData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_attrpb_2fattribute_5fdata_2eproto::InitDefaultsAttributeData();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:algocomp.AttributeData)
}
AttributeData::AttributeData(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_attrpb_2fattribute_5fdata_2eproto::InitDefaultsAttributeData();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:algocomp.AttributeData)
}
AttributeData::AttributeData(const AttributeData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  attr_type_ = from.attr_type_;
  clear_has_oneof_attr_val();
  switch (from.oneof_attr_val_case()) {
    case kStrVal: {
      set_str_val(from.str_val());
      break;
    }
    case kIntVal: {
      set_int_val(from.int_val());
      break;
    }
    case kLongVal: {
      set_long_val(from.long_val());
      break;
    }
    case kFloatVal: {
      set_float_val(from.float_val());
      break;
    }
    case kScateVal: {
      mutable_scate_val()->::algocomp::SetCateValue::MergeFrom(from.scate_val());
      break;
    }
    case ONEOF_ATTR_VAL_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:algocomp.AttributeData)
}

void AttributeData::SharedCtor() {
  attr_type_ = 0;
  clear_has_oneof_attr_val();
  _cached_size_ = 0;
}

AttributeData::~AttributeData() {
  // @@protoc_insertion_point(destructor:algocomp.AttributeData)
  SharedDtor();
}

void AttributeData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  if (has_oneof_attr_val()) {
    clear_oneof_attr_val();
  }
}

void AttributeData::ArenaDtor(void* object) {
  AttributeData* _this = reinterpret_cast< AttributeData* >(object);
  (void)_this;
}
void AttributeData::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void AttributeData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttributeData::descriptor() {
  ::protobuf_attrpb_2fattribute_5fdata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_attrpb_2fattribute_5fdata_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AttributeData& AttributeData::default_instance() {
  ::protobuf_attrpb_2fattribute_5fdata_2eproto::InitDefaultsAttributeData();
  return *internal_default_instance();
}

AttributeData* AttributeData::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<AttributeData>(arena);
}

void AttributeData::clear_oneof_attr_val() {
// @@protoc_insertion_point(one_of_clear_start:algocomp.AttributeData)
  switch (oneof_attr_val_case()) {
    case kStrVal: {
      oneof_attr_val_.str_val_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
          GetArenaNoVirtual());
      break;
    }
    case kIntVal: {
      // No need to clear
      break;
    }
    case kLongVal: {
      // No need to clear
      break;
    }
    case kFloatVal: {
      // No need to clear
      break;
    }
    case kScateVal: {
      if (GetArenaNoVirtual() == NULL) {
        delete oneof_attr_val_.scate_val_;
      }
      break;
    }
    case ONEOF_ATTR_VAL_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = ONEOF_ATTR_VAL_NOT_SET;
}


void AttributeData::Clear() {
// @@protoc_insertion_point(message_clear_start:algocomp.AttributeData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attr_type_ = 0;
  clear_oneof_attr_val();
  _internal_metadata_.Clear();
}

bool AttributeData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:algocomp.AttributeData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .algocomp.AttributeData.AttributeType attr_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_attr_type(static_cast< ::algocomp::AttributeData_AttributeType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string str_val = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str_val()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->str_val().data(), static_cast<int>(this->str_val().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "algocomp.AttributeData.str_val"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 int_val = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          clear_oneof_attr_val();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &oneof_attr_val_.int_val_)));
          set_has_int_val();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 long_val = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          clear_oneof_attr_val();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &oneof_attr_val_.long_val_)));
          set_has_long_val();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float float_val = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {
          clear_oneof_attr_val();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &oneof_attr_val_.float_val_)));
          set_has_float_val();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .algocomp.SetCateValue scate_val = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_scate_val()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:algocomp.AttributeData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:algocomp.AttributeData)
  return false;
#undef DO_
}

void AttributeData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:algocomp.AttributeData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .algocomp.AttributeData.AttributeType attr_type = 1;
  if (this->attr_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->attr_type(), output);
  }

  // string str_val = 2;
  if (has_str_val()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str_val().data(), static_cast<int>(this->str_val().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "algocomp.AttributeData.str_val");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->str_val(), output);
  }

  // int32 int_val = 3;
  if (has_int_val()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->int_val(), output);
  }

  // int64 long_val = 4;
  if (has_long_val()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->long_val(), output);
  }

  // float float_val = 5;
  if (has_float_val()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->float_val(), output);
  }

  // .algocomp.SetCateValue scate_val = 6;
  if (has_scate_val()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *oneof_attr_val_.scate_val_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:algocomp.AttributeData)
}

::google::protobuf::uint8* AttributeData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:algocomp.AttributeData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .algocomp.AttributeData.AttributeType attr_type = 1;
  if (this->attr_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->attr_type(), target);
  }

  // string str_val = 2;
  if (has_str_val()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str_val().data(), static_cast<int>(this->str_val().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "algocomp.AttributeData.str_val");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->str_val(), target);
  }

  // int32 int_val = 3;
  if (has_int_val()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->int_val(), target);
  }

  // int64 long_val = 4;
  if (has_long_val()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->long_val(), target);
  }

  // float float_val = 5;
  if (has_float_val()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->float_val(), target);
  }

  // .algocomp.SetCateValue scate_val = 6;
  if (has_scate_val()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, *oneof_attr_val_.scate_val_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:algocomp.AttributeData)
  return target;
}

size_t AttributeData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:algocomp.AttributeData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .algocomp.AttributeData.AttributeType attr_type = 1;
  if (this->attr_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->attr_type());
  }

  switch (oneof_attr_val_case()) {
    // string str_val = 2;
    case kStrVal: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str_val());
      break;
    }
    // int32 int_val = 3;
    case kIntVal: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->int_val());
      break;
    }
    // int64 long_val = 4;
    case kLongVal: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->long_val());
      break;
    }
    // float float_val = 5;
    case kFloatVal: {
      total_size += 1 + 4;
      break;
    }
    // .algocomp.SetCateValue scate_val = 6;
    case kScateVal: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *oneof_attr_val_.scate_val_);
      break;
    }
    case ONEOF_ATTR_VAL_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttributeData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:algocomp.AttributeData)
  GOOGLE_DCHECK_NE(&from, this);
  const AttributeData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AttributeData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:algocomp.AttributeData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:algocomp.AttributeData)
    MergeFrom(*source);
  }
}

void AttributeData::MergeFrom(const AttributeData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:algocomp.AttributeData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.attr_type() != 0) {
    set_attr_type(from.attr_type());
  }
  switch (from.oneof_attr_val_case()) {
    case kStrVal: {
      set_str_val(from.str_val());
      break;
    }
    case kIntVal: {
      set_int_val(from.int_val());
      break;
    }
    case kLongVal: {
      set_long_val(from.long_val());
      break;
    }
    case kFloatVal: {
      set_float_val(from.float_val());
      break;
    }
    case kScateVal: {
      mutable_scate_val()->::algocomp::SetCateValue::MergeFrom(from.scate_val());
      break;
    }
    case ONEOF_ATTR_VAL_NOT_SET: {
      break;
    }
  }
}

void AttributeData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:algocomp.AttributeData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttributeData::CopyFrom(const AttributeData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:algocomp.AttributeData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttributeData::IsInitialized() const {
  return true;
}

void AttributeData::Swap(AttributeData* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    AttributeData* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void AttributeData::UnsafeArenaSwap(AttributeData* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void AttributeData::InternalSwap(AttributeData* other) {
  using std::swap;
  swap(attr_type_, other->attr_type_);
  swap(oneof_attr_val_, other->oneof_attr_val_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AttributeData::GetMetadata() const {
  protobuf_attrpb_2fattribute_5fdata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_attrpb_2fattribute_5fdata_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace algocomp

// @@protoc_insertion_point(global_scope)