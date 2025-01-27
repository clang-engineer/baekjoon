#include "baekjoon/_1934.h"

#include <gtest/gtest.h>

namespace baekjoon_1934 {
    namespace {
        TEST(_1934, Quiz1) {
            Solution solution(1, 1);
            EXPECT_EQ(solution.GetAnswer(), 1);
        }

        TEST(_1934, Quiz2) {
            Solution solution(1, 45000);
            EXPECT_EQ(solution.GetAnswer(), 45000);
        }

        TEST(_1934, Quiz3) {
            Solution solution(6, 10);
            EXPECT_EQ(solution.GetAnswer(), 30);
        }

        TEST(_1934, Quiz4) {
            Solution solution(13, 17);
            EXPECT_EQ(solution.GetAnswer(), 221);
        }

    }
}
