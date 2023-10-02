/**
Name: test_date_construction.cpp
Description: A basic test to check if constructors for date don't fail 
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
    std::cout <<d1;
    std::cout <<d2;
    std::cout <<d3;

    return 0;
}
