#include "baekjoon/_1764.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>
#include <set>

namespace baekjoon_1764 {
namespace {
TEST(_1764, Solution) {

std::vector<std::string> heard{"ohhenrie", "charlie", "baesangwook"};
std::vector<std::string> seen{"obama", "baesangwook", "ohhenrie", "clinton"};


baekjoon_1764::Solution solution(std::move(heard), std::move(seen));

std::vector<std::string> result = solution.GetResult();
std::vector<std::string> expected = {"baesangwook", "ohhenrie"};
EXPECT_EQ(result, expected);
}

}  // namespace
}  // namespace baekjoon_1764

