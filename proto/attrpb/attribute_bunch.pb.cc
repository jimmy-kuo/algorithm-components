// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attrpb/attribute_bunch.proto

#include "attrpb/attribute_bunch.pb.h"

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
class AttributeBunch_AttrsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AttributeBunch_AttrsEntry_DoNotUse>
      _instance;
} _AttributeBunch_AttrsEntry_DoNotUse_default_instance_;
class AttributeBunchDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AttributeBunch>
      _instance;
} _AttributeBunch_default_instance_;
}  // namespace algocomp
namespace protobuf_attrpb_2fattribute_5fbunch_2eproto {
void InitDefaultsAttributeBunch_AttrsEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_attrpb_2fattribute_5fdata_2eproto::InitDefaultsAttributeData();
  {
    void* ptr = &::algocomp::_AttributeBunch_AttrsEntry_DoNotUse_default_instance_;
    new (ptr) ::algocomp::AttributeBunch_AttrsEntry_DoNotUse();
  }
  ::algocomp::AttributeBunch_AttrsEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsAttributeBunch_AttrsEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsAttributeBunch_AttrsEntry_DoNotUseImpl);
}

void InitDefaultsAttributeBunchImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_attrpb_2fattribute_5fbunch_2eproto::InitDefaultsAttributeBunch_AttrsEntry_DoNotUse();
  {
    void* ptr = &::algocomp::_AttributeBunch_default_instance_;
    new (ptr) ::algocomp::AttributeBunch();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::algocomp::AttributeBunch::InitAsDefaultInstance();
}

void InitDefaultsAttributeBunch() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsAttributeBunchImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch_AttrsEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch_AttrsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch_AttrsEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch_AttrsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::algocomp::AttributeBunch, attrs_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::algocomp::AttributeBunch_AttrsEntry_DoNotUse)},
  { 9, -1, sizeof(::algocomp::AttributeBunch)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::algocomp::_AttributeBunch_AttrsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::algocomp::_AttributeBunch_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "attrpb/attribute_bunch.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034attrpb/attribute_bunch.proto\022\010algocomp"
      "\032\033attrpb/attribute_data.proto\"\213\001\n\016Attrib"
      "uteBunch\0222\n\005attrs\030\001 \003(\0132#.algocomp.Attri"
      "buteBunch.AttrsEntry\032E\n\nAttrsEntry\022\013\n\003ke"
      "y\030\001 \001(\t\022&\n\005value\030\002 \001(\0132\027.algocomp.Attrib"
      "uteData:\0028\001B!\n\010algocompB\020AttributeBunchP"
      "bP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 254);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "attrpb/attribute_bunch.proto", &protobuf_RegisterTypes);
  ::protobuf_attrpb_2fattribute_5fdata_2eproto::AddDescriptors();
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
}  // namespace protobuf_attrpb_2fattribute_5fbunch_2eproto
namespace algocomp {

// ===================================================================

AttributeBunch_AttrsEntry_DoNotUse::AttributeBunch_AttrsEntry_DoNotUse() {}
AttributeBunch_AttrsEntry_DoNotUse::AttributeBunch_AttrsEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void AttributeBunch_AttrsEntry_DoNotUse::MergeFrom(const AttributeBunch_AttrsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata AttributeBunch_AttrsEntry_DoNotUse::GetMetadata() const {
  ::protobuf_attrpb_2fattribute_5fbunch_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_attrpb_2fattribute_5fbunch_2eproto::file_level_metadata[0];
}
void AttributeBunch_AttrsEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void AttributeBunch::InitAsDefaultInstance() {
}
void AttributeBunch::clear_attrs() {
  attrs_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttributeBunch::kAttrsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AttributeBunch::AttributeBunch()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_attrpb_2fattribute_5fbunch_2eproto::InitDefaultsAttributeBunch();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:algocomp.AttributeBunch)
}
AttributeBunch::AttributeBunch(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  attrs_(arena) {
  ::protobuf_attrpb_2fattribute_5fbunch_2eproto::InitDefaultsAttributeBunch();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:algocomp.AttributeBunch)
}
AttributeBunch::AttributeBunch(const AttributeBunch& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  attrs_.MergeFrom(from.attrs_);
  // @@protoc_insertion_point(copy_constructor:algocomp.AttributeBunch)
}

void AttributeBunch::SharedCtor() {
  _cached_size_ = 0;
}

AttributeBunch::~AttributeBunch() {
  // @@protoc_insertion_point(destructor:algocomp.AttributeBunch)
  SharedDtor();
}

void AttributeBunch::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void AttributeBunch::ArenaDtor(void* object) {
  AttributeBunch* _this = reinterpret_cast< AttributeBunch* >(object);
  (void)_this;
}
void AttributeBunch::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void AttributeBunch::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttributeBunch::descriptor() {
  ::protobuf_attrpb_2fattribute_5fbunch_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_attrpb_2fattribute_5fbunch_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AttributeBunch& AttributeBunch::default_instance() {
  ::protobuf_attrpb_2fattribute_5fbunch_2eproto::InitDefaultsAttributeBunch();
  return *internal_default_instance();
}

AttributeBunch* AttributeBunch::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<AttributeBunch>(arena);
}

void AttributeBunch::Clear() {
// @@protoc_insertion_point(message_clear_start:algocomp.AttributeBunch)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attrs_.Clear();
  _internal_metadata_.Clear();
}

bool AttributeBunch::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:algocomp.AttributeBunch)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, .algocomp.AttributeData> attrs = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          AttributeBunch_AttrsEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              AttributeBunch_AttrsEntry_DoNotUse,
              ::std::string, ::algocomp::AttributeData,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData > > parser(&attrs_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "algocomp.AttributeBunch.AttrsEntry.key"));
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
  // @@protoc_insertion_point(parse_success:algocomp.AttributeBunch)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:algocomp.AttributeBunch)
  return false;
#undef DO_
}

void AttributeBunch::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:algocomp.AttributeBunch)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .algocomp.AttributeData> attrs = 1;
  if (!this->attrs().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "algocomp.AttributeBunch.AttrsEntry.key");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->attrs().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->attrs().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_iterator
          it = this->attrs().begin();
          it != this->attrs().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AttributeBunch_AttrsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(attrs_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<AttributeBunch_AttrsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_iterator
          it = this->attrs().begin();
          it != this->attrs().end(); ++it) {
        entry.reset(attrs_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:algocomp.AttributeBunch)
}

::google::protobuf::uint8* AttributeBunch::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:algocomp.AttributeBunch)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .algocomp.AttributeData> attrs = 1;
  if (!this->attrs().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "algocomp.AttributeBunch.AttrsEntry.key");
      }
    };

    if (deterministic &&
        this->attrs().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->attrs().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_iterator
          it = this->attrs().begin();
          it != this->attrs().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AttributeBunch_AttrsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(attrs_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<AttributeBunch_AttrsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_iterator
          it = this->attrs().begin();
          it != this->attrs().end(); ++it) {
        entry.reset(attrs_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:algocomp.AttributeBunch)
  return target;
}

size_t AttributeBunch::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:algocomp.AttributeBunch)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, .algocomp.AttributeData> attrs = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->attrs_size());
  {
    ::google::protobuf::scoped_ptr<AttributeBunch_AttrsEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >::const_iterator
        it = this->attrs().begin();
        it != this->attrs().end(); ++it) {
      if (entry.get() != NULL && entry->GetArena() != NULL) {
        entry.release();
      }
      entry.reset(attrs_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
    if (entry.get() != NULL && entry->GetArena() != NULL) {
      entry.release();
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttributeBunch::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:algocomp.AttributeBunch)
  GOOGLE_DCHECK_NE(&from, this);
  const AttributeBunch* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AttributeBunch>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:algocomp.AttributeBunch)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:algocomp.AttributeBunch)
    MergeFrom(*source);
  }
}

void AttributeBunch::MergeFrom(const AttributeBunch& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:algocomp.AttributeBunch)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  attrs_.MergeFrom(from.attrs_);
}

void AttributeBunch::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:algocomp.AttributeBunch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttributeBunch::CopyFrom(const AttributeBunch& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:algocomp.AttributeBunch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttributeBunch::IsInitialized() const {
  return true;
}

void AttributeBunch::Swap(AttributeBunch* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    AttributeBunch* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void AttributeBunch::UnsafeArenaSwap(AttributeBunch* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void AttributeBunch::InternalSwap(AttributeBunch* other) {
  using std::swap;
  attrs_.Swap(&other->attrs_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AttributeBunch::GetMetadata() const {
  protobuf_attrpb_2fattribute_5fbunch_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_attrpb_2fattribute_5fbunch_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace algocomp

// @@protoc_insertion_point(global_scope)
