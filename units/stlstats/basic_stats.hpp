#ifndef __BASIC_STATS_HPP_
#define __BASIC_STATS_HPP_

#include <vector>

namespace stlstats
{
 
        double mean(const std::vector<double>&);
        double var(const std::vector<double>&);
        double stdev(const std::vector<double>&);
        double skew(const std::vector<double>&);
        double kurtosis(const std::vector<double>&);
}

#endif
