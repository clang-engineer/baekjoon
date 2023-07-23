#include "_11005.h"

#include <gtest/gtest.h>

#include <string>

namespace _11005 {
namespace {
TEST(_11005, case1) {
  Solution s;

  EXPECT_EQ(s.GetBaseNumber(60466175, 36), "ZZZZZ");
}
}  // namespace
}  // namespace _11005
