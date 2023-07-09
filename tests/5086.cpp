#include "5086.h"

#include <gtest/gtest.h>

namespace bj5086 {
namespace {

TEST(bj5086, case1) {
    bj5086::Solution s;
    EXPECT_EQ(s.solution(8, 16), "factor");
    EXPECT_EQ(s.solution(32, 4), "multiple");
    EXPECT_EQ(s.solution(17, 5), "neither");
}

TEST(bj5086, case2) {
    bj5086::Solution s;
    EXPECT_EQ(s.solution(0, 0), "");
}
}
}