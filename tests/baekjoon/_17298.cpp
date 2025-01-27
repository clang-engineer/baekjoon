//
// Created by zero on 2024/03/23.
//

#include <gtest/gtest.h>
#include "baekjoon/_17298.h"

namespace baekjoon_17298 {
    TEST(_17298, case1) {
        std::vector<int> arr = {3, 5, 2, 7};
        std::vector<int> answer = GetNextGreaterElement(arr);
        std::vector<int> expected = {5, 7, 7, -1};
        EXPECT_EQ(answer, expected);
    }

    TEST(_17298, case2) {
        std::vector<int> arr = {9, 5, 4, 8};
        std::vector<int> answer = GetNextGreaterElement(arr);
        std::vector<int> expected = {-1, 8, 8, -1};
        EXPECT_EQ(answer, expected);
    }
}