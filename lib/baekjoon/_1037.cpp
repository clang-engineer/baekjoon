#include "baekjoon/_1037.h"

#include <vector>
#include <algorithm>

namespace baekjoon_1037 {
    Solution::Solution(std::vector<long long> _nums) : nums(_nums) {}

    long long Solution::GetGCD(long long a, long long b) {
        if (b == 0) return a;
        return GetGCD(b, a % b);
    }

    long long Solution::GetLcm(long long a, long long b) {
        return a * b / GetGCD(a, b);
    }

    long long Solution::solution() {

//        if (nums.size() == 1) {
//            return nums[0] * nums[0];
//        }

        long long max = *std::max_element(nums.begin(), nums.end());
        long long min = *std::min_element(nums.begin(), nums.end());

        long long result = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            result = GetLcm(result, nums[i]);
        }

        if (result <= max) {
            result *= min;
        }

        return result;
    }
}