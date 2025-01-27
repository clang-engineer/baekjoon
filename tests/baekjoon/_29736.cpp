#include "baekjoon/_29736.h"

#include <gtest/gtest.h>
#include <string>

namespace baekjoon_29736 {
namespace {
TEST(_29736, Case1) {
  int lower = 10;
  int upper = 100;
  int stand = 50;
  int gap = 10;

  EXPECT_EQ("21", GetPossibleCount(lower, upper, stand, gap));
}

TEST(_29736, Case2) {
  int lower = 25;
  int upper = 75;
  int stand = 10;
  int gap = 5;

  EXPECT_EQ("IMPOSSIBLE", GetPossibleCount(lower, upper, stand, gap));
}
} // namespace
} // namespace baekjoon_29736
