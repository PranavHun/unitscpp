/**
Name: csv.hpp
Description: simple csv handling
Author: Pranav Hundekari
*/

#pragma once

#include <ostream>

namespace pranavh {

template <class T>
void print_all(std::ostream &os, char /* sep */, T v)
{
        os << v << '\n';
}

template <class T, class... Args>
void print_all(std::ostream &os, char sep, T first, Args... args)
{
        os << first << sep;
        print_all(os, sep, args...);
} 
} // namespace pranavh
