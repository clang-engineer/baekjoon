#include "../include/_1463.h"
#include <gtest/gtest.h>

namespace _1463 {
namespace {
TEST(_1463, case1) {
  EXPECT_EQ(GetMake1OperationCount(2), 1);
  EXPECT_EQ(GetMake1OperationCount(1), 0);
}

TEST(_1463, case2) { EXPECT_EQ(GetMake1OperationCount(10), 3); }
} // namespace
} // namespace _1463
