#include "baekjoon/_10828.h"

#include <string>
#include <gtest/gtest.h>

namespace baekjoon_10828 {
    namespace {
        TEST(_10828, case1) {
            Solution s1(14);
            s1.Push(1);
            s1.Push(2);
            EXPECT_EQ(s1.Top(), 2);
            EXPECT_EQ(s1.Size(), 2);
            EXPECT_EQ(s1.Empty(), 0);

            EXPECT_EQ(s1.Pop(), 2);
            EXPECT_EQ(s1.Pop(), 1);
            EXPECT_EQ(s1.Pop(), -1);
            EXPECT_EQ(s1.Size(), 0);
            EXPECT_EQ(s1.Empty(), 1);
            EXPECT_EQ(s1.Pop(), -1);

            s1.Push(3);
            EXPECT_EQ(s1.Empty(), 0);
            EXPECT_EQ(s1.Top(), 3);
        }

    }
}