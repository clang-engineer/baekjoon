#include "baekjoon/_4134.h"

#include <gtest/gtest.h>

namespace baekjoon_4134 {
namespace {
TEST(_4134, Solution1) {
  Solution s;
  EXPECT_EQ(7, s.GetNextDecimal(6));

  EXPECT_EQ(23, s.GetNextDecimal(20));

  EXPECT_EQ(101, s.GetNextDecimal(100));
};
} // namespace
} // namespace baekjoon_4134
