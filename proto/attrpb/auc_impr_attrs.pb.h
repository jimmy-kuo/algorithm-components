// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attrpb/auc_impr_attrs.proto

#ifndef PROTOBUF_attrpb_2fauc_5fimpr_5fattrs_2eproto__INCLUDED
#define PROTOBUF_attrpb_2fauc_5fimpr_5fattrs_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "attrpb/attribute_bunch.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_attrpb_2fauc_5fimpr_5fattrs_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsAUCImprAttrsImpl();
void InitDefaultsAUCImprAttrs();
inline void InitDefaults() {
  InitDefaultsAUCImprAttrs();
}
}  // namespace protobuf_attrpb_2fauc_5fimpr_5fattrs_2eproto
namespace algocomp {
class AUCImprAttrs;
class AUCImprAttrsDefaultTypeInternal;
extern AUCImprAttrsDefaultTypeInternal _AUCImprAttrs_default_instance_;
}  // namespace algocomp
namespace algocomp {

// ===================================================================

class AUCImprAttrs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:algocomp.AUCImprAttrs) */ {
 public:
  AUCImprAttrs();
  virtual ~AUCImprAttrs();

  AUCImprAttrs(const AUCImprAttrs& from);

  inline AUCImprAttrs& operator=(const AUCImprAttrs& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AUCImprAttrs(AUCImprAttrs&& from) noexcept
    : AUCImprAttrs() {
    *this = ::std::move(from);
  }

  inline AUCImprAttrs& operator=(AUCImprAttrs&& from) noexcept {
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
  static const AUCImprAttrs& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AUCImprAttrs* internal_default_instance() {
    return reinterpret_cast<const AUCImprAttrs*>(
               &_AUCImprAttrs_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(AUCImprAttrs* other);
  void Swap(AUCImprAttrs* other);
  friend void swap(AUCImprAttrs& a, AUCImprAttrs& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AUCImprAttrs* New() const PROTOBUF_FINAL { return New(NULL); }

  AUCImprAttrs* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AUCImprAttrs& from);
  void MergeFrom(const AUCImprAttrs& from);
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
  void InternalSwap(AUCImprAttrs* other);
  protected:
  explicit AUCImprAttrs(::google::protobuf::Arena* arena);
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

  // repeated float labels = 1;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 1;
  float labels(int index) const;
  void set_labels(int index, float value);
  void add_labels(float value);
  const ::google::protobuf::RepeatedField< float >&
      labels() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_labels();

  // repeated float weights = 2;
  int weights_size() const;
  void clear_weights();
  static const int kWeightsFieldNumber = 2;
  float weights(int index) const;
  void set_weights(int index, float value);
  void add_weights(float value);
  const ::google::protobuf::RepeatedField< float >&
      weights() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_weights();

  // repeated float scores = 3;
  int scores_size() const;
  void clear_scores();
  static const int kScoresFieldNumber = 3;
  float scores(int index) const;
  void set_scores(int index, float value);
  void add_scores(float value);
  const ::google::protobuf::RepeatedField< float >&
      scores() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_scores();

  // repeated .algocomp.AttributeBunch ads = 5;
  int ads_size() const;
  void clear_ads();
  static const int kAdsFieldNumber = 5;
  const ::algocomp::AttributeBunch& ads(int index) const;
  ::algocomp::AttributeBunch* mutable_ads(int index);
  ::algocomp::AttributeBunch* add_ads();
  ::google::protobuf::RepeatedPtrField< ::algocomp::AttributeBunch >*
      mutable_ads();
  const ::google::protobuf::RepeatedPtrField< ::algocomp::AttributeBunch >&
      ads() const;

  // .algocomp.AttributeBunch user_and_ctx = 4;
  bool has_user_and_ctx() const;
  void clear_user_and_ctx();
  static const int kUserAndCtxFieldNumber = 4;
  private:
  void _slow_mutable_user_and_ctx();
  public:
  const ::algocomp::AttributeBunch& user_and_ctx() const;
  ::algocomp::AttributeBunch* release_user_and_ctx();
  ::algocomp::AttributeBunch* mutable_user_and_ctx();
  void set_allocated_user_and_ctx(::algocomp::AttributeBunch* user_and_ctx);
  void unsafe_arena_set_allocated_user_and_ctx(
      ::algocomp::AttributeBunch* user_and_ctx);
  ::algocomp::AttributeBunch* unsafe_arena_release_user_and_ctx();

  // @@protoc_insertion_point(class_scope:algocomp.AUCImprAttrs)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedField< float > labels_;
  mutable int _labels_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > weights_;
  mutable int _weights_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > scores_;
  mutable int _scores_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::algocomp::AttributeBunch > ads_;
  ::algocomp::AttributeBunch* user_and_ctx_;
  mutable int _cached_size_;
  friend struct ::protobuf_attrpb_2fauc_5fimpr_5fattrs_2eproto::TableStruct;
  friend void ::protobuf_attrpb_2fauc_5fimpr_5fattrs_2eproto::InitDefaultsAUCImprAttrsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AUCImprAttrs

// repeated float labels = 1;
inline int AUCImprAttrs::labels_size() const {
  return labels_.size();
}
inline void AUCImprAttrs::clear_labels() {
  labels_.Clear();
}
inline float AUCImprAttrs::labels(int index) const {
  // @@protoc_insertion_point(field_get:algocomp.AUCImprAttrs.labels)
  return labels_.Get(index);
}
inline void AUCImprAttrs::set_labels(int index, float value) {
  labels_.Set(index, value);
  // @@protoc_insertion_point(field_set:algocomp.AUCImprAttrs.labels)
}
inline void AUCImprAttrs::add_labels(float value) {
  labels_.Add(value);
  // @@protoc_insertion_point(field_add:algocomp.AUCImprAttrs.labels)
}
inline const ::google::protobuf::RepeatedField< float >&
AUCImprAttrs::labels() const {
  // @@protoc_insertion_point(field_list:algocomp.AUCImprAttrs.labels)
  return labels_;
}
inline ::google::protobuf::RepeatedField< float >*
AUCImprAttrs::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:algocomp.AUCImprAttrs.labels)
  return &labels_;
}

// repeated float weights = 2;
inline int AUCImprAttrs::weights_size() const {
  return weights_.size();
}
inline void AUCImprAttrs::clear_weights() {
  weights_.Clear();
}
inline float AUCImprAttrs::weights(int index) const {
  // @@protoc_insertion_point(field_get:algocomp.AUCImprAttrs.weights)
  return weights_.Get(index);
}
inline void AUCImprAttrs::set_weights(int index, float value) {
  weights_.Set(index, value);
  // @@protoc_insertion_point(field_set:algocomp.AUCImprAttrs.weights)
}
inline void AUCImprAttrs::add_weights(float value) {
  weights_.Add(value);
  // @@protoc_insertion_point(field_add:algocomp.AUCImprAttrs.weights)
}
inline const ::google::protobuf::RepeatedField< float >&
AUCImprAttrs::weights() const {
  // @@protoc_insertion_point(field_list:algocomp.AUCImprAttrs.weights)
  return weights_;
}
inline ::google::protobuf::RepeatedField< float >*
AUCImprAttrs::mutable_weights() {
  // @@protoc_insertion_point(field_mutable_list:algocomp.AUCImprAttrs.weights)
  return &weights_;
}

// repeated float scores = 3;
inline int AUCImprAttrs::scores_size() const {
  return scores_.size();
}
inline void AUCImprAttrs::clear_scores() {
  scores_.Clear();
}
inline float AUCImprAttrs::scores(int index) const {
  // @@protoc_insertion_point(field_get:algocomp.AUCImprAttrs.scores)
  return scores_.Get(index);
}
inline void AUCImprAttrs::set_scores(int index, float value) {
  scores_.Set(index, value);
  // @@protoc_insertion_point(field_set:algocomp.AUCImprAttrs.scores)
}
inline void AUCImprAttrs::add_scores(float value) {
  scores_.Add(value);
  // @@protoc_insertion_point(field_add:algocomp.AUCImprAttrs.scores)
}
inline const ::google::protobuf::RepeatedField< float >&
AUCImprAttrs::scores() const {
  // @@protoc_insertion_point(field_list:algocomp.AUCImprAttrs.scores)
  return scores_;
}
inline ::google::protobuf::RepeatedField< float >*
AUCImprAttrs::mutable_scores() {
  // @@protoc_insertion_point(field_mutable_list:algocomp.AUCImprAttrs.scores)
  return &scores_;
}

// .algocomp.AttributeBunch user_and_ctx = 4;
inline bool AUCImprAttrs::has_user_and_ctx() const {
  return this != internal_default_instance() && user_and_ctx_ != NULL;
}
inline const ::algocomp::AttributeBunch& AUCImprAttrs::user_and_ctx() const {
  const ::algocomp::AttributeBunch* p = user_and_ctx_;
  // @@protoc_insertion_point(field_get:algocomp.AUCImprAttrs.user_and_ctx)
  return p != NULL ? *p : *reinterpret_cast<const ::algocomp::AttributeBunch*>(
      &::algocomp::_AttributeBunch_default_instance_);
}
inline ::algocomp::AttributeBunch* AUCImprAttrs::release_user_and_ctx() {
  // @@protoc_insertion_point(field_release:algocomp.AUCImprAttrs.user_and_ctx)
  
  ::algocomp::AttributeBunch* temp = user_and_ctx_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp, NULL);
  }
  user_and_ctx_ = NULL;
  return temp;
}
inline ::algocomp::AttributeBunch* AUCImprAttrs::unsafe_arena_release_user_and_ctx() {
  // @@protoc_insertion_point(field_unsafe_arena_release:algocomp.AUCImprAttrs.user_and_ctx)
  
  ::algocomp::AttributeBunch* temp = user_and_ctx_;
  user_and_ctx_ = NULL;
  return temp;
}
inline ::algocomp::AttributeBunch* AUCImprAttrs::mutable_user_and_ctx() {
  
  if (user_and_ctx_ == NULL) {
    _slow_mutable_user_and_ctx();
  }
  // @@protoc_insertion_point(field_mutable:algocomp.AUCImprAttrs.user_and_ctx)
  return user_and_ctx_;
}
inline void AUCImprAttrs::set_allocated_user_and_ctx(::algocomp::AttributeBunch* user_and_ctx) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(user_and_ctx_);
  }
  if (user_and_ctx) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(user_and_ctx)->GetArena();
    if (message_arena != submessage_arena) {
      user_and_ctx = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, user_and_ctx, submessage_arena);
    }
    
  } else {
    
  }
  user_and_ctx_ = user_and_ctx;
  // @@protoc_insertion_point(field_set_allocated:algocomp.AUCImprAttrs.user_and_ctx)
}

// repeated .algocomp.AttributeBunch ads = 5;
inline int AUCImprAttrs::ads_size() const {
  return ads_.size();
}
inline const ::algocomp::AttributeBunch& AUCImprAttrs::ads(int index) const {
  // @@protoc_insertion_point(field_get:algocomp.AUCImprAttrs.ads)
  return ads_.Get(index);
}
inline ::algocomp::AttributeBunch* AUCImprAttrs::mutable_ads(int index) {
  // @@protoc_insertion_point(field_mutable:algocomp.AUCImprAttrs.ads)
  return ads_.Mutable(index);
}
inline ::algocomp::AttributeBunch* AUCImprAttrs::add_ads() {
  // @@protoc_insertion_point(field_add:algocomp.AUCImprAttrs.ads)
  return ads_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::algocomp::AttributeBunch >*
AUCImprAttrs::mutable_ads() {
  // @@protoc_insertion_point(field_mutable_list:algocomp.AUCImprAttrs.ads)
  return &ads_;
}
inline const ::google::protobuf::RepeatedPtrField< ::algocomp::AttributeBunch >&
AUCImprAttrs::ads() const {
  // @@protoc_insertion_point(field_list:algocomp.AUCImprAttrs.ads)
  return ads_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace algocomp

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_attrpb_2fauc_5fimpr_5fattrs_2eproto__INCLUDED