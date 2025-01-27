//
// Created by zero on 2024/02/11.
//

#include <vector>
#include <gtest/gtest.h>

#include "baekjoon/_1916.h"

namespace baekjoon_1916 {
    namespace {
        TEST(_1916, dijkstra) {
            std::vector<std::vector<edge>> graph = {
                    {},
                    {{2, 2}, {3, 3}, {4, 1}, {5, 10}},
                    {{4, 2}},
                    {{4, 1}, {5, 1}},
                    {{5, 3}}
            };

            EXPECT_EQ(dijkstra(1, 5, 5, graph), 4);
        }

    }

}