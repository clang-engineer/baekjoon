//
// Created by zero on 2024/02/10.
//

#include "_1753.h"
#include <gtest/gtest.h>

namespace _1753 {
    namespace {
        TEST(_1753, case1) {
            int node_count = 5, edge_count = 6, start_node = 1;

            std::vector<std::vector<edge>> graph;
            graph.resize(node_count + 1);
            graph[5].push_back({1, 1});
            graph[1].push_back({2, 2});
            graph[1].push_back({3, 3});
            graph[2].push_back({3, 4});
            graph[2].push_back({4, 5});
            graph[3].push_back({4, 6});

            std::vector<int> result = _1753::GetDijkstraDistance(node_count, start_node, graph);

            std::vector<int> expected = {INT_MAX, 0, 2, 3, 7, INT_MAX, INT_MAX};

            for (int i = 0; i < node_count; i++) {
                EXPECT_EQ(result[i], expected[i]);
            }
        }
    }
}
