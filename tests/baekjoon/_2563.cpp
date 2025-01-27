//
// Created by zero on 2023/07/10.
//

#include "baekjoon/_2563.h"
#include <gtest/gtest.h>

namespace baekjoon_2563 {
    namespace {
        TEST(_2563, case1) {
            std::vector<Coord> paper = {{3,  7},
                                        {15, 7},
                                        {5,  2}};
            Solution s(paper);
            EXPECT_EQ(s.GetNonOverlapArea(), 260);
        };
    }
}