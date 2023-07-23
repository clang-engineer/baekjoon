#include "_2745.h"

#include <gtest/gtest.h>

#include <iostream>

namespace _2745 {
namespace {
TEST(_2745, case1) {
  std::string scale = "ZZZZZ";
  int base = 36;
  int result = 60466175;
  EXPECT_EQ(result, Solution().GetDecimalNumber(scale, base));
}

}  // unnamed namespace
}  // namespace _2745
