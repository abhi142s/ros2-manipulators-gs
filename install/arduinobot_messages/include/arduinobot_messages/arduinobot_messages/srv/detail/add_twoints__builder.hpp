// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduinobot_messages:srv/AddTwoints.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_
#define ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduinobot_messages/srv/detail/add_twoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduinobot_messages
{

namespace srv
{

namespace builder
{

class Init_AddTwoints_Request_b
{
public:
  explicit Init_AddTwoints_Request_b(::arduinobot_messages::srv::AddTwoints_Request & msg)
  : msg_(msg)
  {}
  ::arduinobot_messages::srv::AddTwoints_Request b(::arduinobot_messages::srv::AddTwoints_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_messages::srv::AddTwoints_Request msg_;
};

class Init_AddTwoints_Request_a
{
public:
  Init_AddTwoints_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoints_Request_b a(::arduinobot_messages::srv::AddTwoints_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoints_Request_b(msg_);
  }

private:
  ::arduinobot_messages::srv::AddTwoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_messages::srv::AddTwoints_Request>()
{
  return arduinobot_messages::srv::builder::Init_AddTwoints_Request_a();
}

}  // namespace arduinobot_messages


namespace arduinobot_messages
{

namespace srv
{

namespace builder
{

class Init_AddTwoints_Response_sum
{
public:
  Init_AddTwoints_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduinobot_messages::srv::AddTwoints_Response sum(::arduinobot_messages::srv::AddTwoints_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_messages::srv::AddTwoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_messages::srv::AddTwoints_Response>()
{
  return arduinobot_messages::srv::builder::Init_AddTwoints_Response_sum();
}

}  // namespace arduinobot_messages

#endif  // ARDUINOBOT_MESSAGES__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_
