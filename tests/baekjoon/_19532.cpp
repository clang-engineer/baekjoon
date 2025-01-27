#include "baekjoon/_19532.h"

#include <gtest/gtest.h>

namespace baekjoon_19532 {
namespace {
TEST(_19532, Solution ) {
Solution solution(1, 3, -1, 4, 1, 7);
EXPECT_EQ(solution.GetX(), 2);
EXPECT_EQ(solution.GetY(), -1);
}

TEST(_19532, Solution2 ) {
Solution solution(2, 5, 8, 3, -4, -11);
EXPECT_EQ(solution.GetX(), -1);
EXPECT_EQ(solution.GetY(), 2);
}
}
}
