#include "../result.hpp"
#include <iostream>
#include <string>

using namespace pranavh;

auto function(int i) {
  Result<double, std::string> res;
  try {
    if (i == 0)
      throw std::invalid_argument(std::to_string(i) +
                                  " is an invalid argument.");
    auto ret_value = 1.0 / i;
    res.setValue(ret_value);
  } catch (const std::exception &e) {
    res.setError(e.what());
  }
  return res;
}

int main() {
  auto ret = function(10);
  switch (ret.match()) {
  case (ResultType::Value):
    std::cout << "val: " << ret.value() << '\n';
    break;
  case (ResultType::Error):
    std::cout << "ret: " << ret.error() << '\n';
    break;
  }
  return 0;
}
