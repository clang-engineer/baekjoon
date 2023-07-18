#include "_1620.h"
#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <unordered_map>

namespace _1620 {
    namespace {
        TEST(_1620, case) {
            std::unordered_map<std::string, int> map{{"hello", 0}, {"world", 1}, {"leetcode", 2}, {"love", 3}, {"fire", 4}};

            std::vector<std::string> vec{"hello", "world", "leetcode", "love", "fire"};

            _1620::Solution solution(map, vec);


            EXPECT_EQ(solution.FindMatch("hello"), "1");
            EXPECT_EQ(solution.FindMatch("world"), "2");
            EXPECT_EQ(solution.FindMatch("leetcode"), "3");
            EXPECT_EQ(solution.FindMatch("love"), "4");
            EXPECT_EQ(solution.FindMatch("fire"), "5");

            EXPECT_EQ(solution.FindMatch("1"), "hello");
            EXPECT_EQ(solution.FindMatch("2"), "world");
            EXPECT_EQ(solution.FindMatch("3"), "leetcode");
            EXPECT_EQ(solution.FindMatch("4"), "love");
            EXPECT_EQ(solution.FindMatch("5"), "fire");
        }
    } // namespace
} // namespace _1620
