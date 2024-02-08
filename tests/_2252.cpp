//
// Created by zero on 2024/02/08.
//

#include "_2252.h"

#include <gtest/gtest.h>

namespace _2252 {
    namespace {
       TEST(_2252, case1) {
           std::vector<std::vector<int>> A = {{}, {3}, {3}, {}};
           std::vector<int> indegree = {0, 0, 0, 2};

           std::vector<int> result = GetTopologySort(A, indegree);

           EXPECT_EQ(result, std::vector<int>({1, 2, 3}));
       }
    }
}
