// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef PROTOBUF_INCLUDED_messages_2eproto
#define PROTOBUF_INCLUDED_messages_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_messages_2eproto 

namespace protobuf_messages_2eproto {
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
}  // namespace protobuf_messages_2eproto
namespace messages {
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace messages
namespace google {
namespace protobuf {
template<> ::messages::Request* Arena::CreateMaybeMessage<::messages::Request>(Arena*);
template<> ::messages::Response* Arena::CreateMaybeMessage<::messages::Response>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace messages {

enum Response_ResponseType {
  Response_ResponseType_OK = 0,
  Response_ResponseType_ERROR = 1,
  Response_ResponseType_UPDATE = 3,
  Response_ResponseType_Response_ResponseType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Response_ResponseType_Response_ResponseType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Response_ResponseType_IsValid(int value);
const Response_ResponseType Response_ResponseType_ResponseType_MIN = Response_ResponseType_OK;
const Response_ResponseType Response_ResponseType_ResponseType_MAX = Response_ResponseType_UPDATE;
const int Response_ResponseType_ResponseType_ARRAYSIZE = Response_ResponseType_ResponseType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Response_ResponseType_descriptor();
inline const ::std::string& Response_ResponseType_Name(Response_ResponseType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Response_ResponseType_descriptor(), value);
}
inline bool Response_ResponseType_Parse(
    const ::std::string& name, Response_ResponseType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Response_ResponseType>(
    Response_ResponseType_descriptor(), name, value);
}
enum Request_RequestType {
  Request_RequestType_SUBSCRIBE = 0,
  Request_RequestType_PUBLISH = 1,
  Request_RequestType_UNSUBSCRIBE = 2,
  Request_RequestType_Request_RequestType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Request_RequestType_Request_RequestType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Request_RequestType_IsValid(int value);
const Request_RequestType Request_RequestType_RequestType_MIN = Request_RequestType_SUBSCRIBE;
const Request_RequestType Request_RequestType_RequestType_MAX = Request_RequestType_UNSUBSCRIBE;
const int Request_RequestType_RequestType_ARRAYSIZE = Request_RequestType_RequestType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Request_RequestType_descriptor();
inline const ::std::string& Request_RequestType_Name(Request_RequestType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Request_RequestType_descriptor(), value);
}
inline bool Request_RequestType_Parse(
    const ::std::string& name, Request_RequestType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Request_RequestType>(
    Request_RequestType_descriptor(), name, value);
}
// ===================================================================

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messages.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(NULL);
  }

  Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Response_ResponseType ResponseType;
  static const ResponseType OK =
    Response_ResponseType_OK;
  static const ResponseType ERROR =
    Response_ResponseType_ERROR;
  static const ResponseType UPDATE =
    Response_ResponseType_UPDATE;
  static inline bool ResponseType_IsValid(int value) {
    return Response_ResponseType_IsValid(value);
  }
  static const ResponseType ResponseType_MIN =
    Response_ResponseType_ResponseType_MIN;
  static const ResponseType ResponseType_MAX =
    Response_ResponseType_ResponseType_MAX;
  static const int ResponseType_ARRAYSIZE =
    Response_ResponseType_ResponseType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ResponseType_descriptor() {
    return Response_ResponseType_descriptor();
  }
  static inline const ::std::string& ResponseType_Name(ResponseType value) {
    return Response_ResponseType_Name(value);
  }
  static inline bool ResponseType_Parse(const ::std::string& name,
      ResponseType* value) {
    return Response_ResponseType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string topic = 2;
  void clear_topic();
  static const int kTopicFieldNumber = 2;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // string body = 3;
  void clear_body();
  static const int kBodyFieldNumber = 3;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const char* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // .messages.Response.ResponseType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::messages::Response_ResponseType type() const;
  void set_type(::messages::Response_ResponseType value);

  // @@protoc_insertion_point(class_scope:messages.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messages.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(NULL);
  }

  Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Request_RequestType RequestType;
  static const RequestType SUBSCRIBE =
    Request_RequestType_SUBSCRIBE;
  static const RequestType PUBLISH =
    Request_RequestType_PUBLISH;
  static const RequestType UNSUBSCRIBE =
    Request_RequestType_UNSUBSCRIBE;
  static inline bool RequestType_IsValid(int value) {
    return Request_RequestType_IsValid(value);
  }
  static const RequestType RequestType_MIN =
    Request_RequestType_RequestType_MIN;
  static const RequestType RequestType_MAX =
    Request_RequestType_RequestType_MAX;
  static const int RequestType_ARRAYSIZE =
    Request_RequestType_RequestType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RequestType_descriptor() {
    return Request_RequestType_descriptor();
  }
  static inline const ::std::string& RequestType_Name(RequestType value) {
    return Request_RequestType_Name(value);
  }
  static inline bool RequestType_Parse(const ::std::string& name,
      RequestType* value) {
    return Request_RequestType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string topic = 2;
  void clear_topic();
  static const int kTopicFieldNumber = 2;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // .messages.Request.RequestType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::messages::Request_RequestType type() const;
  void set_type(::messages::Request_RequestType value);

  // @@protoc_insertion_point(class_scope:messages.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Response

// .messages.Response.ResponseType type = 1;
inline void Response::clear_type() {
  type_ = 0;
}
inline ::messages::Response_ResponseType Response::type() const {
  // @@protoc_insertion_point(field_get:messages.Response.type)
  return static_cast< ::messages::Response_ResponseType >(type_);
}
inline void Response::set_type(::messages::Response_ResponseType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:messages.Response.type)
}

// string topic = 2;
inline void Response::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::topic() const {
  // @@protoc_insertion_point(field_get:messages.Response.topic)
  return topic_.GetNoArena();
}
inline void Response::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messages.Response.topic)
}
#if LANG_CXX11
inline void Response::set_topic(::std::string&& value) {
  
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Response.topic)
}
#endif
inline void Response::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Response.topic)
}
inline void Response::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Response.topic)
}
inline ::std::string* Response::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:messages.Response.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_topic() {
  // @@protoc_insertion_point(field_release:messages.Response.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:messages.Response.topic)
}

// string body = 3;
inline void Response::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::body() const {
  // @@protoc_insertion_point(field_get:messages.Response.body)
  return body_.GetNoArena();
}
inline void Response::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messages.Response.body)
}
#if LANG_CXX11
inline void Response::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Response.body)
}
#endif
inline void Response::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Response.body)
}
inline void Response::set_body(const char* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Response.body)
}
inline ::std::string* Response::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:messages.Response.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_body() {
  // @@protoc_insertion_point(field_release:messages.Response.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:messages.Response.body)
}

// -------------------------------------------------------------------

// Request

// .messages.Request.RequestType type = 1;
inline void Request::clear_type() {
  type_ = 0;
}
inline ::messages::Request_RequestType Request::type() const {
  // @@protoc_insertion_point(field_get:messages.Request.type)
  return static_cast< ::messages::Request_RequestType >(type_);
}
inline void Request::set_type(::messages::Request_RequestType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:messages.Request.type)
}

// string topic = 2;
inline void Request::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::topic() const {
  // @@protoc_insertion_point(field_get:messages.Request.topic)
  return topic_.GetNoArena();
}
inline void Request::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messages.Request.topic)
}
#if LANG_CXX11
inline void Request::set_topic(::std::string&& value) {
  
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Request.topic)
}
#endif
inline void Request::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Request.topic)
}
inline void Request::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Request.topic)
}
inline ::std::string* Request::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:messages.Request.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_topic() {
  // @@protoc_insertion_point(field_release:messages.Request.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:messages.Request.topic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::messages::Response_ResponseType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::messages::Response_ResponseType>() {
  return ::messages::Response_ResponseType_descriptor();
}
template <> struct is_proto_enum< ::messages::Request_RequestType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::messages::Request_RequestType>() {
  return ::messages::Request_RequestType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_messages_2eproto