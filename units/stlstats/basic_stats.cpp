#include "basic_stats.hpp"
#include <algorithm>
#include <cmath>
#include <functional>
#include <numeric>


namespace stlstats
{
        double statfunction(const std::vector<double>& v,
                        int n,
                        double mu=0.0,
                        double sigma=1.0,
                        double pwr=1.0)
        {
                return std::accumulate(v.begin(), v.end(), 0.0, 
                                [mu, sigma, pwr] (double init, double X) 
                                {
                                return init + std::pow((X-mu) / sigma, pwr);
                                }) / n;
        }

        double mean(const std::vector<double>& v)
        {
                return statfunction(v, v.size());
        }

        double var(const std::vector<double>& v)
        {
                return statfunction(v, v.size(), mean(v), 1.0, 2.0);
        }

        double stdev(const std::vector<double>& v)
        {
                return std::pow(var(v), 0.5);
        }

        double skew(const std::vector<double>& v)
        {
                return statfunction(v, v.size(), mean(v), stdev(v), 3.0);
        }
      
        double kurtosis(const std::vector<double>& v)
        {
                return statfunction(v, v.size(), mean(v), stdev(v), 4.0) - 3.0;
        }
}
