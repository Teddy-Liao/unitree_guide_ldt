/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: Error_.idl
  Source: Error_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_ERROR__HPP
#define DDSCXX_ERROR__HPP

#include <cstdint>

namespace unitree_go
{
namespace msg
{
namespace dds_
{
class Error_
{
private:
 uint32_t source_ = 0;
 uint32_t state_ = 0;

public:
  Error_() = default;

  explicit Error_(
    uint32_t source,
    uint32_t state) :
    source_(source),
    state_(state) { }

  uint32_t source() const { return this->source_; }
  uint32_t& source() { return this->source_; }
  void source(uint32_t _val_) { this->source_ = _val_; }
  uint32_t state() const { return this->state_; }
  uint32_t& state() { return this->state_; }
  void state(uint32_t _val_) { this->state_ = _val_; }

  bool operator==(const Error_& _other) const
  {
    (void) _other;
    return source_ == _other.source_ &&
      state_ == _other.state_;
  }

  bool operator!=(const Error_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::unitree_go::msg::dds_::Error_>::getTypeName()
{
  return "unitree_go::msg::dds_::Error_";
}

template <> constexpr bool TopicTraits<::unitree_go::msg::dds_::Error_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::unitree_go::msg::dds_::Error_>::type_map_blob_sz() { return 254; }
template<> constexpr unsigned int TopicTraits<::unitree_go::msg::dds_::Error_>::type_info_blob_sz() { return 100; }
template<> inline const uint8_t * TopicTraits<::unitree_go::msg::dds_::Error_>::type_map_blob() {
  static const uint8_t blob[] = {
 0x4b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf1,  0x76,  0x79,  0x56,  0x84,  0x80,  0x73,  0x64, 
 0x1f,  0xee,  0x3b,  0xc7,  0x0e,  0xd6,  0x56,  0x00,  0x33,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x36,  0xcd,  0x38,  0xf4,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x9e,  0xd3,  0x9e,  0x2e,  0x00, 
 0x84,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf2,  0x8f,  0x76,  0x98,  0x54,  0xc5,  0x14,  0x4a, 
 0x4b,  0x4c,  0xbf,  0xbe,  0x7d,  0xd9,  0x1f,  0x00,  0x6c,  0x00,  0x00,  0x00,  0xf2,  0x51,  0x01,  0x00, 
 0x26,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x1e,  0x00,  0x00,  0x00,  0x75,  0x6e,  0x69,  0x74, 
 0x72,  0x65,  0x65,  0x5f,  0x67,  0x6f,  0x3a,  0x3a,  0x6d,  0x73,  0x67,  0x3a,  0x3a,  0x64,  0x64,  0x73, 
 0x5f,  0x3a,  0x3a,  0x45,  0x72,  0x72,  0x6f,  0x72,  0x5f,  0x00,  0x00,  0x00,  0x38,  0x00,  0x00,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x15,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00, 
 0x07,  0x00,  0x00,  0x00,  0x73,  0x6f,  0x75,  0x72,  0x63,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00,  0x06,  0x00,  0x00,  0x00, 
 0x73,  0x74,  0x61,  0x74,  0x65,  0x00,  0x00,  0x00,  0x22,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0xf2,  0x8f,  0x76,  0x98,  0x54,  0xc5,  0x14,  0x4a,  0x4b,  0x4c,  0xbf,  0xbe,  0x7d,  0xd9,  0x1f,  0xf1, 
 0x76,  0x79,  0x56,  0x84,  0x80,  0x73,  0x64,  0x1f,  0xee,  0x3b,  0xc7,  0x0e,  0xd6,  0x56, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::unitree_go::msg::dds_::Error_>::type_info_blob() {
  static const uint8_t blob[] = {
 0x60,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0x76,  0x79,  0x56,  0x84,  0x80,  0x73,  0x64,  0x1f,  0xee,  0x3b,  0xc7, 
 0x0e,  0xd6,  0x56,  0x00,  0x37,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf2,  0x8f,  0x76,  0x98,  0x54,  0xc5,  0x14,  0x4a,  0x4b,  0x4c,  0xbf,  0xbe, 
 0x7d,  0xd9,  0x1f,  0x00,  0x70,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::unitree_go::msg::dds_::Error_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::unitree_go::msg::dds_::Error_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::unitree_go::msg::dds_::Error_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
propvec &get_type_props<::unitree_go::msg::dds_::Error_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::unitree_go::msg::dds_::Error_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.source()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.state()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::unitree_go::msg::dds_::Error_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::Error_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::unitree_go::msg::dds_::Error_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.source()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.state()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::unitree_go::msg::dds_::Error_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::Error_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::unitree_go::msg::dds_::Error_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.source()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.state()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::unitree_go::msg::dds_::Error_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::Error_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::unitree_go::msg::dds_::Error_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.source()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.state()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::unitree_go::msg::dds_::Error_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::Error_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_ERROR__HPP
