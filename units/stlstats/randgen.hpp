#ifndef __RANDGEN_HPP_
#define __RANDGEN_HPP_

#include <random>
#include <vector>
#include <algorithm>


namespace stlstats::randgen
{
        template <class RandomGenerator = std::mt19937,
                 class RandomFunction = std::normal_distribution<double>>
        class RandomFunc
        {
                RandomGenerator gen;
                RandomFunction dis;

                public:
                        RandomFunc(double mean=0.0, double stdev=0.2) :
                                dis(mean, stdev)
                { 
                        std::random_device rd;
                        gen=RandomGenerator(rd());
                }

                        double operator ()() { return dis(gen); };
        };

        std::vector<double> gen_normal_vec(unsigned int size, 
                        double mean=0.0,
                        double stdev = 0.05)
        {
                auto rf=RandomFunc(mean, stdev);
                std::vector<double> vec(size);
                std::generate(vec.begin(),
                                vec.end(),
                                rf);
                return vec;
        }
}

#endif
