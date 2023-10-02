#include "../basic_stats.hpp"
#include "../randgen.hpp"
#include <iostream>

int main(int /*argc*/, char** /*argv*/)
{
        auto v = stlstats::randgen::gen_normal_vec(1000, 10.0, 15.0);
        std::cout << "Mean       : " << stlstats::mean(v) << '\n';
        std::cout << "Variance   : " << stlstats::var(v) << '\n';
        std::cout << "Std. Dev   : " << stlstats::stdev(v) << '\n';
        std::cout << "Skew       : " << stlstats::skew(v) << '\n';
        std::cout << "Kurtosis   : " << stlstats::kurtosis(v) << '\n';
        return 0;
}
