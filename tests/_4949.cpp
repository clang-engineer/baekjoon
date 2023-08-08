#include "../include/_4949.h"

#include <gtest/gtest.h>
#include <string>

namespace _4949 {
namespace {
TEST(_4949, Case1) {
  std::string input =
      "So when I die (the [first] I will see in (heaven) is a score list).";

  EXPECT_EQ("yes", IsBalanced(input));
}

TEST(_4949, Case2) {
  std::string input = "[ first in ] ( first out ).";

  EXPECT_EQ("yes", IsBalanced(input));
}

TEST(_4949, Case3) {
  std::string input =
      "Half Moon tonight (At least it is better than no Moon at all].";

  EXPECT_EQ("no", IsBalanced(input));
}

TEST(_4949, Case4) {
  std::string input = "A rope may form )( a trail in a maze.";

  EXPECT_EQ("no", IsBalanced(input));
}

TEST(_4949, Case5) {
  std::string input =
      "Help( I[m being held prisoner in a fortune cookie factory)].";

  EXPECT_EQ("no", IsBalanced(input));
}

} // namespace
} // namespace _4949
