/**
Name: test_date_in_containers.cpp
Description: A basic test to check if date is usable in containers like vector 
Author: Pranav Hundekari
*/

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

#include "../date.hpp"

using namespace pranavh;

int main()
{
    std::vector<date> v(10);
    std::iota(v.begin(), v.end(), date(2015, 2, 21));
    for (auto dt : v)
      std::cout << dt << '\t';
    std::cout << '\n';

    std::vector<date> v1{date(2014), date(2011), date(1980), date(2019),
                         date(1990)};
    std::sort(v1.begin(), v1.end());
    std::sort(v1.begin(), v1.end(), std::greater<>());
    std::reverse(v1.begin(), v1.end());

    return 0;
}
