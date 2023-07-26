#include "_11050.h"

#include <gtest/gtest.h>

namespace _11050 {
namespace {

TEST(_11050, case) {
  Solution s;

  EXPECT_EQ(s.GetBinomialCoefficient(5, 2), 10);
}

} // namespace
} // namespace _11050
