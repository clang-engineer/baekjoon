#include "_1010.h"

#include <gtest/gtest.h>

namespace _1010 {
namespace {
TEST(_1010, case) {

  Solution s;

  EXPECT_EQ(s.GetCombination(2, 2), 1);
  EXPECT_EQ(s.GetCombination(1, 5), 5);
  EXPECT_EQ(s.GetCombination(13, 29), 67863915);
}
} // namespace
} // namespace _1010
