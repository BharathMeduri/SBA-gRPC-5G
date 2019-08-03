// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prime.proto

#include "prime.pb.h"

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
namespace helloworld {
class PrimeRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PrimeRequest>
      _instance;
} _PrimeRequest_default_instance_;
class PrimeReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PrimeReply>
      _instance;
} _PrimeReply_default_instance_;
}  // namespace helloworld
namespace protobuf_prime_2eproto {
void InitDefaultsPrimeRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::helloworld::_PrimeRequest_default_instance_;
    new (ptr) ::helloworld::PrimeRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::helloworld::PrimeRequest::InitAsDefaultInstance();
}

void InitDefaultsPrimeRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPrimeRequestImpl);
}

void InitDefaultsPrimeReplyImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::helloworld::_PrimeReply_default_instance_;
    new (ptr) ::helloworld::PrimeReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::helloworld::PrimeReply::InitAsDefaultInstance();
}

void InitDefaultsPrimeReply() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPrimeReplyImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::helloworld::PrimeRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::helloworld::PrimeRequest, num_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::helloworld::PrimeReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::helloworld::PrimeReply, count_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::helloworld::PrimeRequest)},
  { 6, -1, sizeof(::helloworld::PrimeReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::helloworld::_PrimeRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::helloworld::_PrimeReply_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "prime.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\013prime.proto\022\nhelloworld\"\033\n\014PrimeReques"
      "t\022\013\n\003num\030\001 \001(\005\"\033\n\nPrimeReply\022\r\n\005count\030\001 "
      "\001(\0052I\n\007Greeter\022>\n\010SayHello\022\030.helloworld."
      "PrimeRequest\032\026.helloworld.PrimeReply\"\000B6"
      "\n\033io.grpc.examples.helloworldB\017HelloWorl"
      "dProtoP\001\242\002\003HLWb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 222);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "prime.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_prime_2eproto
namespace helloworld {

// ===================================================================

void PrimeRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PrimeRequest::kNumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PrimeRequest::PrimeRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_prime_2eproto::InitDefaultsPrimeRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:helloworld.PrimeRequest)
}
PrimeRequest::PrimeRequest(const PrimeRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  num_ = from.num_;
  // @@protoc_insertion_point(copy_constructor:helloworld.PrimeRequest)
}

void PrimeRequest::SharedCtor() {
  num_ = 0;
  _cached_size_ = 0;
}

PrimeRequest::~PrimeRequest() {
  // @@protoc_insertion_point(destructor:helloworld.PrimeRequest)
  SharedDtor();
}

void PrimeRequest::SharedDtor() {
}

void PrimeRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrimeRequest::descriptor() {
  ::protobuf_prime_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_prime_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PrimeRequest& PrimeRequest::default_instance() {
  ::protobuf_prime_2eproto::InitDefaultsPrimeRequest();
  return *internal_default_instance();
}

PrimeRequest* PrimeRequest::New(::google::protobuf::Arena* arena) const {
  PrimeRequest* n = new PrimeRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PrimeRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.PrimeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  num_ = 0;
  _internal_metadata_.Clear();
}

bool PrimeRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:helloworld.PrimeRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 num = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_)));
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
  // @@protoc_insertion_point(parse_success:helloworld.PrimeRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:helloworld.PrimeRequest)
  return false;
#undef DO_
}

void PrimeRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:helloworld.PrimeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num = 1;
  if (this->num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:helloworld.PrimeRequest)
}

::google::protobuf::uint8* PrimeRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.PrimeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num = 1;
  if (this->num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.PrimeRequest)
  return target;
}

size_t PrimeRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.PrimeRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 num = 1;
  if (this->num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrimeRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:helloworld.PrimeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PrimeRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PrimeRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:helloworld.PrimeRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:helloworld.PrimeRequest)
    MergeFrom(*source);
  }
}

void PrimeRequest::MergeFrom(const PrimeRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:helloworld.PrimeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.num() != 0) {
    set_num(from.num());
  }
}

void PrimeRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:helloworld.PrimeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrimeRequest::CopyFrom(const PrimeRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.PrimeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrimeRequest::IsInitialized() const {
  return true;
}

void PrimeRequest::Swap(PrimeRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PrimeRequest::InternalSwap(PrimeRequest* other) {
  using std::swap;
  swap(num_, other->num_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PrimeRequest::GetMetadata() const {
  protobuf_prime_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_prime_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void PrimeReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PrimeReply::kCountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PrimeReply::PrimeReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_prime_2eproto::InitDefaultsPrimeReply();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:helloworld.PrimeReply)
}
PrimeReply::PrimeReply(const PrimeReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  count_ = from.count_;
  // @@protoc_insertion_point(copy_constructor:helloworld.PrimeReply)
}

void PrimeReply::SharedCtor() {
  count_ = 0;
  _cached_size_ = 0;
}

PrimeReply::~PrimeReply() {
  // @@protoc_insertion_point(destructor:helloworld.PrimeReply)
  SharedDtor();
}

void PrimeReply::SharedDtor() {
}

void PrimeReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrimeReply::descriptor() {
  ::protobuf_prime_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_prime_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PrimeReply& PrimeReply::default_instance() {
  ::protobuf_prime_2eproto::InitDefaultsPrimeReply();
  return *internal_default_instance();
}

PrimeReply* PrimeReply::New(::google::protobuf::Arena* arena) const {
  PrimeReply* n = new PrimeReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PrimeReply::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.PrimeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  count_ = 0;
  _internal_metadata_.Clear();
}

bool PrimeReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:helloworld.PrimeReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 count = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &count_)));
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
  // @@protoc_insertion_point(parse_success:helloworld.PrimeReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:helloworld.PrimeReply)
  return false;
#undef DO_
}

void PrimeReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:helloworld.PrimeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 count = 1;
  if (this->count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:helloworld.PrimeReply)
}

::google::protobuf::uint8* PrimeReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.PrimeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 count = 1;
  if (this->count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->count(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.PrimeReply)
  return target;
}

size_t PrimeReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.PrimeReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 count = 1;
  if (this->count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrimeReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:helloworld.PrimeReply)
  GOOGLE_DCHECK_NE(&from, this);
  const PrimeReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PrimeReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:helloworld.PrimeReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:helloworld.PrimeReply)
    MergeFrom(*source);
  }
}

void PrimeReply::MergeFrom(const PrimeReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:helloworld.PrimeReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.count() != 0) {
    set_count(from.count());
  }
}

void PrimeReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:helloworld.PrimeReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrimeReply::CopyFrom(const PrimeReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.PrimeReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrimeReply::IsInitialized() const {
  return true;
}

void PrimeReply::Swap(PrimeReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PrimeReply::InternalSwap(PrimeReply* other) {
  using std::swap;
  swap(count_, other->count_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PrimeReply::GetMetadata() const {
  protobuf_prime_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_prime_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace helloworld

// @@protoc_insertion_point(global_scope)