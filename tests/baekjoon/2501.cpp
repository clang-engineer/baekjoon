#include "baekjoon/2501.h"

#include <gtest/gtest.h>

namespace baekjoon_2501 {
namespace {

TEST(_2501, case1) {
    Solution s = Solution(6);
    EXPECT_EQ(s.GetKthFactor(3), 3);
}

TEST(_2501, case2) {
    Solution s = Solution(25);
    EXPECT_EQ(s.GetKthFactor(4), 0);
}

TEST(_2501, case3) {
    Solution s = Solution(2735);
    EXPECT_EQ(s.GetKthFactor(1), 1);
}

}
}