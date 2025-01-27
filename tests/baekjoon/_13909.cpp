#include <gtest/gtest.h>

#include "baekjoon/_13909.h"

namespace baekjoon_13909 {
    namespace {
        TEST(_13909, Solution) {
            Solution s1(3);
            EXPECT_EQ(s1.GetOpenMirrorNumber(), 1);

            Solution s2(24);
            EXPECT_EQ(s2.GetOpenMirrorNumber(), 4);


        };
    }
}
