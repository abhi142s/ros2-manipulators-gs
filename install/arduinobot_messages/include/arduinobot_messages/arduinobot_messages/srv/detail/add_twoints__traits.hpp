// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arduinobot_messages:srv/AddTwoints.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__TRAITS_HPP_
#define ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arduinobot_messages/srv/detail/add_twoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arduinobot_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduinobot_messages

namespace rosidl_generator_traits
{

[[deprecated("use arduinobot_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduinobot_messages::srv::AddTwoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduinobot_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduinobot_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduinobot_messages::srv::AddTwoints_Request & msg)
{
  return arduinobot_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduinobot_messages::srv::AddTwoints_Request>()
{
  return "arduinobot_messages::srv::AddTwoints_Request";
}

template<>
inline const char * name<arduinobot_messages::srv::AddTwoints_Request>()
{
  return "arduinobot_messages/srv/AddTwoints_Request";
}

template<>
struct has_fixed_size<arduinobot_messages::srv::AddTwoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduinobot_messages::srv::AddTwoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduinobot_messages::srv::AddTwoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduinobot_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduinobot_messages

namespace rosidl_generator_traits
{

[[deprecated("use arduinobot_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduinobot_messages::srv::AddTwoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduinobot_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduinobot_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduinobot_messages::srv::AddTwoints_Response & msg)
{
  return arduinobot_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduinobot_messages::srv::AddTwoints_Response>()
{
  return "arduinobot_messages::srv::AddTwoints_Response";
}

template<>
inline const char * name<arduinobot_messages::srv::AddTwoints_Response>()
{
  return "arduinobot_messages/srv/AddTwoints_Response";
}

template<>
struct has_fixed_size<arduinobot_messages::srv::AddTwoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduinobot_messages::srv::AddTwoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduinobot_messages::srv::AddTwoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduinobot_messages::srv::AddTwoints>()
{
  return "arduinobot_messages::srv::AddTwoints";
}

template<>
inline const char * name<arduinobot_messages::srv::AddTwoints>()
{
  return "arduinobot_messages/srv/AddTwoints";
}

template<>
struct has_fixed_size<arduinobot_messages::srv::AddTwoints>
  : std::integral_constant<
    bool,
    has_fixed_size<arduinobot_messages::srv::AddTwoints_Request>::value &&
    has_fixed_size<arduinobot_messages::srv::AddTwoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduinobot_messages::srv::AddTwoints>
  : std::integral_constant<
    bool,
    has_bounded_size<arduinobot_messages::srv::AddTwoints_Request>::value &&
    has_bounded_size<arduinobot_messages::srv::AddTwoints_Response>::value
  >
{
};

template<>
struct is_service<arduinobot_messages::srv::AddTwoints>
  : std::true_type
{
};

template<>
struct is_service_request<arduinobot_messages::srv::AddTwoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduinobot_messages::srv::AddTwoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__TRAITS_HPP_
