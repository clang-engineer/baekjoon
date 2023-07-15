#include <gtest/gtest.h>

#include "_18870.h"

namespace _18870 {
namespace {
TEST(_18870, Solution) {
    std::vector<int> input = {2, 4, -10, 4, -9};
    _18870::Solution s(input);

    std::vector<int> result = s.GetResult();
    std::vector<int> expected = {2, 3, 0, 3, 1};
    EXPECT_EQ(result, expected);
}
}
}