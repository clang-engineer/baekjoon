//
// Created by zero on 2024/02/07.
//
#include "_1717.h"
#include <gtest/gtest.h>
#include <vector>

namespace _1717 {
    namespace {
        TEST(_1717, case1) {
            int N = 7;
            int M = 8;
            parent.resize(N + 1);
            for (int i = 0; i <= N; i++) {
                parent[i] = i;
            }

            std::vector<std::vector<int>> input{{0, 1, 3},
                                                {1, 1, 7},
                                                {0, 7, 6},
                                                {1, 7, 1},
                                                {0, 3, 7},
                                                {0, 4, 2},
                                                {0, 1, 1},
                                                {1, 1, 1}};
            std::vector<std::string> output{"NO", "NO", "YES"};
            std::vector<std::string> result;

            for (int i = 0; i < M; i++) {
                int question = input[i][0];
                int a = input[i][1];
                int b = input[i][2];

                if (question == 0) {
                    unionfunc(a, b);
                } else {
                    if (checkSame(a, b)) {
                        result.emplace_back("YES");
                    } else {
                        result.emplace_back("NO");
                    }
                }
            }
            EXPECT_EQ(result, output);
        }
    }
}
