#include "baekjoon/_17103.h"

#include <gtest/gtest.h>

namespace baekjoon_17103 {
namespace {
TEST(_17103, case1) {
  Solution solution1 = Solution(6);
  EXPECT_EQ(solution1.GetGoldBachPartitionNum(), 1);

  Solution solution2 = Solution(8);
  EXPECT_EQ(solution2.GetGoldBachPartitionNum(), 1);

  Solution solution3 = Solution(10);
  EXPECT_EQ(solution3.GetGoldBachPartitionNum(), 2);

  Solution solution4 = Solution(12);
  EXPECT_EQ(solution4.GetGoldBachPartitionNum(), 1);

  Solution solution5 = Solution(100);
  EXPECT_EQ(solution5.GetGoldBachPartitionNum(), 6);
}
} // namespace
} // namespace baekjoon_17103
