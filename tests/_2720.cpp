//
// Created by zero on 2023/07/10.
//
#include "_2720.h"

#include <gtest/gtest.h>

namespace _2720 {
    namespace {
        TEST(_2720, case1) {
            Solution s(124);
            std::vector<int> result = s.GetChange();

            EXPECT_EQ(result[0], 4);
            EXPECT_EQ(result[1], 2);
            EXPECT_EQ(result[2], 0);
            EXPECT_EQ(result[3], 4);
        }

        TEST(_2720, case2) {
            Solution s(25);
            std::vector<int> result = s.GetChange();

            EXPECT_EQ(result[0], 1);
            EXPECT_EQ(result[1], 0);
            EXPECT_EQ(result[2], 0);
            EXPECT_EQ(result[3], 0);
        }

        TEST(_2720, case3) {
            Solution s(194);
            std::vector<int> result = s.GetChange();

            EXPECT_EQ(result[0], 7);
            EXPECT_EQ(result[1], 1);
            EXPECT_EQ(result[2], 1);
            EXPECT_EQ(result[3], 4);
        }

    }
}