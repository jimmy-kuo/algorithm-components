// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attrpb/attribute_bunch.proto

#ifndef PROTOBUF_attrpb_2fattribute_5fbunch_2eproto__INCLUDED
#define PROTOBUF_attrpb_2fattribute_5fbunch_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "attrpb/attribute_data.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_attrpb_2fattribute_5fbunch_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsAttributeBunch_AttrsEntry_DoNotUseImpl();
void InitDefaultsAttributeBunch_AttrsEntry_DoNotUse();
void InitDefaultsAttributeBunchImpl();
void InitDefaultsAttributeBunch();
inline void InitDefaults() {
  InitDefaultsAttributeBunch_AttrsEntry_DoNotUse();
  InitDefaultsAttributeBunch();
}
}  // namespace protobuf_attrpb_2fattribute_5fbunch_2eproto
namespace algocomp {
class AttributeBunch;
class AttributeBunchDefaultTypeInternal;
extern AttributeBunchDefaultTypeInternal _AttributeBunch_default_instance_;
class AttributeBunch_AttrsEntry_DoNotUse;
class AttributeBunch_AttrsEntry_DoNotUseDefaultTypeInternal;
extern AttributeBunch_AttrsEntry_DoNotUseDefaultTypeInternal _AttributeBunch_AttrsEntry_DoNotUse_default_instance_;
}  // namespace algocomp
namespace algocomp {

// ===================================================================

class AttributeBunch_AttrsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<AttributeBunch_AttrsEntry_DoNotUse, 
    ::std::string, ::algocomp::AttributeData,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<AttributeBunch_AttrsEntry_DoNotUse, 
    ::std::string, ::algocomp::AttributeData,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  AttributeBunch_AttrsEntry_DoNotUse();
  AttributeBunch_AttrsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const AttributeBunch_AttrsEntry_DoNotUse& other);
  static const AttributeBunch_AttrsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const AttributeBunch_AttrsEntry_DoNotUse*>(&_AttributeBunch_AttrsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class AttributeBunch : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:algocomp.AttributeBunch) */ {
 public:
  AttributeBunch();
  virtual ~AttributeBunch();

  AttributeBunch(const AttributeBunch& from);

  inline AttributeBunch& operator=(const AttributeBunch& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AttributeBunch(AttributeBunch&& from) noexcept
    : AttributeBunch() {
    *this = ::std::move(from);
  }

  inline AttributeBunch& operator=(AttributeBunch&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const AttributeBunch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AttributeBunch* internal_default_instance() {
    return reinterpret_cast<const AttributeBunch*>(
               &_AttributeBunch_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(AttributeBunch* other);
  void Swap(AttributeBunch* other);
  friend void swap(AttributeBunch& a, AttributeBunch& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AttributeBunch* New() const PROTOBUF_FINAL { return New(NULL); }

  AttributeBunch* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AttributeBunch& from);
  void MergeFrom(const AttributeBunch& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AttributeBunch* other);
  protected:
  explicit AttributeBunch(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .algocomp.AttributeData> attrs = 1;
  int attrs_size() const;
  void clear_attrs();
  static const int kAttrsFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >&
      attrs() const;
  ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >*
      mutable_attrs();

  // @@protoc_insertion_point(class_scope:algocomp.AttributeBunch)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::MapField<
      AttributeBunch_AttrsEntry_DoNotUse,
      ::std::string, ::algocomp::AttributeData,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > attrs_;
  mutable int _cached_size_;
  friend struct ::protobuf_attrpb_2fattribute_5fbunch_2eproto::TableStruct;
  friend void ::protobuf_attrpb_2fattribute_5fbunch_2eproto::InitDefaultsAttributeBunchImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// AttributeBunch

// map<string, .algocomp.AttributeData> attrs = 1;
inline int AttributeBunch::attrs_size() const {
  return attrs_.size();
}
inline const ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >&
AttributeBunch::attrs() const {
  // @@protoc_insertion_point(field_map:algocomp.AttributeBunch.attrs)
  return attrs_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::algocomp::AttributeData >*
AttributeBunch::mutable_attrs() {
  // @@protoc_insertion_point(field_mutable_map:algocomp.AttributeBunch.attrs)
  return attrs_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace algocomp

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_attrpb_2fattribute_5fbunch_2eproto__INCLUDED