#include <gtest/gtest.h>

#include "baekjoon/_10101.h"

#include <string>

namespace baekjoon_10101 {
    namespace {
        TEST(_10101, case1) {
            Solution solution = Solution();

            std::string result = solution.GetTriangleType(60, 70, 50);

            EXPECT_EQ(result, "Scalene");
        }

    }
}