#ifndef BAEKJOON__1037_H
#define BAEKJOON__1037_H

#include <vector>

namespace _1037 {
    class Solution {
    private:
        long long GetGCD(long long a, long long b);
        long long GetLcm(long long a, long long b);
    public:
        std::vector<long long> nums;
        long long solution();
        Solution(std::vector<long long> _nums);
    };
};

#endif
