//
// Created by zero on 2024/02/18.
//

#include <gtest/gtest.h>
#include "_1197.h"

namespace _1197 {
    namespace {
        TEST(_1197, case1) {
            std::vector<Edge> edges = {
                    {1, 2, 1},
                    {2, 3, 2},
                    {1, 3, 3},
            };
            EXPECT_EQ(GetMSTWeight(3, edges), 3);
        }
    }
}