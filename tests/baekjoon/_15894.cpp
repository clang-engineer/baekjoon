
#include "baekjoon/_15894.h"

#include <gtest/gtest.h>
#include <cmath>

namespace baekjoon_15894 {
    namespace {

        TEST(_15894, case1) {
            Solution s1(1);
            EXPECT_EQ(s1.GetResult(), 4);

            Solution s2(3);
            EXPECT_EQ(s2.GetResult(), 12);

            Solution s3(std::pow(10, 9));
            EXPECT_EQ(s3.GetResult(), 4000000000);
        }
    }
}