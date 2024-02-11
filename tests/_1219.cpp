//
// Created by zero on 2024/02/11.
//
#include <gtest/gtest.h>
#include <vector>
#include <limits.h>

#include "_1219.h"

namespace _1219 {
    namespace {
        TEST(_1219, bellman_ford_case1) {
            int node_count = 5;
            int start_node = 0;
            int end_node = 4;

            std::vector<edge> edges = {
                    {0, 1, 13},
                    {1, 2, 17},
                    {2, 4, 20},
                    {0, 3, 22},
                    {1, 3, 4747},
                    {2, 0, 10},
                    {3, 4, 10}
            };

            std::vector<long> city_money = {0, 0, 0, 0, 0, 0};

            std::vector<long> result = GetDistances(edges, city_money, node_count, start_node);

            EXPECT_EQ(result[end_node], -32);
        }

        TEST(_1219, bellman_ford_case2) {
            int node_count = 5;
            int start_node = 0;
            int end_node = 4;

            std::vector<edge> edges = {
                    {0, 1, 10},
                    {1, 2, 10},
                    {2, 3, 10},
                    {3, 1, 10},
                    {2, 4, 10}
            };

            std::vector<long> city_money = {0, 10, 10, 110, 10};

            std::vector<long> result = GetDistances(edges, city_money, node_count, start_node);

            EXPECT_EQ(result[end_node], LONG_MAX);
        }

        TEST(_1219, bellman_ford_case3) {
            int node_count = 3;
            int start_node = 0;
            int end_node = 2;

            std::vector<edge> edges = {
                    {0, 1, 10},
                    {1, 0, 10},
                    {2, 1, 10},
            };

            std::vector<long> city_money = {1000, 1000, 47000};

            std::vector<long> result = GetDistances(edges, city_money, node_count, start_node);

            EXPECT_EQ(result[end_node], LONG_MIN);
        }

    }
}
