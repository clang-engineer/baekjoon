//
// Created by zero on 2024/02/12.
//

#include "baekjoon/_11404.h"
#include <gtest/gtest.h>

namespace baekjoon_11404 {
    namespace {
        TEST(_11404, case1) {
            int N = 5;
            std::vector<std::vector<int>> edges = {
                    {1, 2, 2},
                    {1, 3, 3},
                    {1, 4, 1},
                    {1, 5, 10},
                    {2, 4, 2},
                    {3, 4, 1},
                    {3, 5, 1},
                    {4, 5, 3},
                    {3, 5, 10},
                    {3, 1, 8},
                    {1, 4, 2},
                    {5, 1, 7},
                    {3, 4, 2},
                    {5, 2, 4}
            };

            long **result = FloydWarshall(N, edges);

            long expected[5][5] = {
                    {0,  2, 3,  1, 4},
                    {12, 0, 15, 2, 5},
                    {8,  5, 0,  1, 1},
                    {10, 7, 13, 0, 3},
                    {7,  4, 10, 6, 0}
            };

            for (int i = 1; i <= N; i++) {
                for (int j = 1; j <= N; j++) {
                    if (result[i][j] == 1e9) {
                        EXPECT_EQ(0, expected[i - 1][j - 1]);
                    } else {
                        EXPECT_EQ(result[i][j], expected[i - 1][j - 1]);

                    }
                }
                std::cout << "\n";
            }

        }
    }
}