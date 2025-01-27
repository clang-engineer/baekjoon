#include "baekjoon/_9012.h"
#include <gtest/gtest.h>

namespace baekjoon_9012 {
namespace {
TEST(_9012, IsValidParenthesisString) {
  EXPECT_EQ(IsValidParenthesisString("(())())"), false);
}

TEST(_9012, IsValidParenthesisString2) {
  EXPECT_EQ(IsValidParenthesisString("(((()())()"), false);
}

TEST(_9012, IsValidParenthesisString3) {
  EXPECT_EQ(IsValidParenthesisString("(()())((()))"), true);
}

TEST(_9012, IsValidParenthesisString4) {
  EXPECT_EQ(IsValidParenthesisString("((()()(()))(((())))()"), false);
}

TEST(_9012, IsValidParenthesisString5) {
  EXPECT_EQ(IsValidParenthesisString("()()()()(()()())()"), true);
}

} // namespace
  //
} // namespace baekjoon_9012
