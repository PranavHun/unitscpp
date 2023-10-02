/**
Name: example_date.hpp
Description: demonstration of PHcsv library
Author: Pranav Hundekari
*/

#include <iostream>
#include <fstream>

#include "csv.hpp"

int main()
{
        std::ofstream ofs("text.txt", std::ios::trunc);
        pranavh::print_all(ofs, '|', "sdf", 1, 1.0, "asdfs", 'a', 3.5);
        pranavh::print_all(ofs, '\t', "sdf", 2, 100, "asdfs", 'b', 3.5);
        pranavh::print_all(std::cout, ',', "sdf", 3, 10.0, "asdfs", 'c', 3.5);
        pranavh::print_all(ofs, ';', "sdf", 4, 100.0, "asdfs", 'd', 3.5);
        return 0;
}
