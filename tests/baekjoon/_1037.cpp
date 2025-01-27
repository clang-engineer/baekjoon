#include "baekjoon/_1037.h"
#include <vector>

#include <gtest/gtest.h>

namespace baekjoon_1037 {
    namespace {
        TEST(_1037, solution) {
            std::vector<long long> nums = {4, 2};
            Solution solution(nums);
            long long result = solution.solution();

            EXPECT_EQ(result, 8);
        }

        TEST(_1037, solution2) {
            std::vector<long long> nums = {2};
            Solution solution(nums);
            long long result = solution.solution();

            EXPECT_EQ(result, 4);
        }

        TEST(_1037, solution3) {
            std::vector<long long> nums = {3, 4, 2, 12, 6, 8};
            Solution solution(nums);
            long long result = solution.solution();

            EXPECT_EQ(result, 24);
        }

        TEST(_1037, solution4) {
            std::vector<long long> nums = {14, 26456, 2, 28, 13228, 3307, 7, 23149, 8, 6614, 46298, 56, 4, 92596};
            Solution solution(nums);
            long long result = solution.solution();

            EXPECT_EQ(result, 185192);
        }
    }
}