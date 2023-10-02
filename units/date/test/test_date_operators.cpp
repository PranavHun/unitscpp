/**
Name: test_date_operators.cpp
Description: A basic test to check if operators on date don't fail 
Author: Pranav Hundekari
*/

#include <iostream>
#include "../date.hpp"

int main()
{
    // Y[M][D] Construction
    auto d1 = pranavh::date(2014, 6, 2);
    auto d2 = pranavh::date(2014, 6);
    auto d3 = pranavh::date(2014);
    d1 = d1 + 100;
    d1 = d1 + (-50);
    d2 = d2 + 100;
    d2 = d2 + (-50);
    ++d3;
    --d1;
    if (d1 != d2) {}
    if (d1 == d3) {}
    if (d1 > d2) {}
    if (d3 < d2) {}
    if (d3 >= d1) {}
    if (d1 <= d3) {}

    return 0;
}
