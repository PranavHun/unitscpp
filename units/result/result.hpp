#pragma once

#include <iostream>
#include <string>

namespace pranavh {

enum class ResultType { Value, Error };

template <class A, class B> struct Result {
private:
  ResultType result_type;
  A a = A();
  B b = B();

public:
  void setError(B err) {
    b = err;
    result_type = ResultType::Error;
  }
  void setValue(A val) {
    a = val;
    result_type = ResultType::Value;
  }
  auto match() const { return result_type; }
  auto value() const {
    if (result_type == ResultType::Value)
      return a;
    else
      throw std::runtime_error("Attempt to access value when it is an error");
  };
  auto error() const {
    if (result_type == ResultType::Error)
      return b;
    else
      throw std::runtime_error("Attempt to access error when it is a value");
  }
  auto expect(const std::string &e) const {
    if (result_type == ResultType::Value)
      return a;
    else
      throw std::runtime_error(e);
  }
  auto unwrap() const {
    if (result_type == ResultType::Value)
      return a;
    else
      throw std::runtime_error("Result has error. Unwrap not possible.");
  }

  auto unwrap_or(A u_a) const {
    if (result_type == ResultType::Value)
      return a;
    else
      return u_a;
  }
};
} // namespace pranavh