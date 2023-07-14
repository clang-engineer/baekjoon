#include <gtest/gtest.h>

#include "_5073.h"

namespace _5073 {
    namespace {
        TEST(_5073, case1) {
            Solution solution = Solution();

            std::string result = solution.GetTriangleType(7, 7, 7);
            EXPECT_EQ(result, "Equilateral");

        }

        TEST(_5073, case2) {
            Solution solution = Solution();

            std::string result = solution.GetTriangleType(6, 5, 4);
            EXPECT_EQ(result, "Scalene");
        }

        TEST(_5073, case3) {
            Solution solution = Solution();

            std::string result = solution.GetTriangleType(3, 2, 5);
            EXPECT_EQ(result, "Invalid");
        }

        TEST(_5073, case4) {
            Solution solution = Solution();

            std::string result = solution.GetTriangleType(6, 2, 6);
            EXPECT_EQ(result, "Isosceles");
        }

    }
}
