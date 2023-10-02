/**
Name: example_date.hpp
Description: demonstration of PHdate library
Author: Pranav Hundekari
*/

// #include <functional> -- for std::greater
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

#include "date.hpp"

using namespace pranavh;

int main() {
  try {
    date d1(2014, 6, 2), d2(2014, 3), d3(2012), d4(9999, 12, 31);
    date d5(d1);
    date d6 = d2;
    std::cout << (d1 + 1500) << '\n';
    std::cout << d2 << '\n';
    std::cout << d3 << '\n';
    std::cout << d4 << '\n' << '\n';
    std::cout << d5 << '\n';
    std::cout << (d6 + (-15)) << '\n';
    std::vector<date> v(10);
    std::iota(v.begin(), v.end(), date(2015, 2, 21));
    for (auto dt : v)
      std::cout << dt << '\t';
    std::cout << '\n' << (d1 > d3) << '\n';
    std::cout << '\n' << (d2 < d3) << '\n';
    std::cout << '\n' << (d4 >= d4) << '\n';
    std::vector<date> v1{date(2014), date(2011), date(1980), date(2019),
                         date(1990)};
    for (auto dt : v1)
      std::cout << dt << '\t';
    std::cout << '\n';

    std::sort(v1.begin(), v1.end());
    for (auto dt : v1)
      std::cout << dt << '\t';
    std::cout << '\n';

    std::sort(v1.begin(), v1.end(), std::greater<>());
    for (auto dt: v1)
            std::cout << dt << '\t';
    std::cout << '\n';
    
    std::reverse(v1.begin(), v1.end());
    for (auto dt : v1)
      std::cout << dt << '\t';
    std::cout << '\n' << '\n';

    d1 = d2 + 45;
    std::cout << d1 << '\n';
    d1 = d2 - 45;
    std::cout << d1 << '\n';
    d1 = d2 + (-15);
    std::cout << d1 << '\n';
    d1 = d2 - (-25);
    std::cout << d1 << '\n';

    } catch (const char* msg) {
  std::cerr << msg << '\n';
}
return 0;
}
