#include "10798.h"
#include <vector>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace bj10798 {
namespace {

TEST(bj10798, case1) {
    std::vector<std::string> list = {"ABCDE", "abcde", "01234", "FGHIJ", "fghij"};
    Solution s;
    EXPECT_EQ(s.GetVerticalConcatString(&list), "Aa0FfBb1GgCc2HhDd3IiEe4Jj");
}

TEST(bj10798, case2) {
    std::vector<std::string> list = {"AABCDD", "afzz", "09121", "a8EWg6", "P5h3kx"};
    Solution s;
    EXPECT_EQ(s.GetVerticalConcatString(&list), "Aa0aPAf985Bz1EhCz2W3D1gkD6x");
}
}
}