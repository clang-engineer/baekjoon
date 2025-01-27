//
// Created by zero on 2023/07/11.
//
#include "baekjoon/_9506.h"

#include <string>
#include <gtest/gtest.h>

namespace baekjoon_9506 {
    namespace {
        TEST(_9506, case1) {

            Solution s1(6);
            EXPECT_EQ(s1.GetResultString(), "6 = 1 + 2 + 3");

            Solution s2(28);
            EXPECT_EQ(s2.GetResultString(), "28 = 1 + 2 + 4 + 7 + 14");

            Solution s3(12);
            EXPECT_EQ(s3.GetResultString(), "12 is NOT perfect.");
        }
    }
}