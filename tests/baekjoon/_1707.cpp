//
// Created by zero on 2024/02/06.
//

#include "baekjoon/_1707.h"

#include <gtest/gtest.h>
#include <vector>

namespace baekjoon_1707 {
    namespace {
        TEST(_1707, case1) {
            V = 3;
            E = 2;
            A = std::vector<std::vector<int>>(V + 1);
            visited = std::vector<bool>(V + 1);
            check = std::vector<int>(V + 1);

            A[1].push_back(3);
            A[2].push_back(3);

            std::string result = GetResult();

            std::string expected = "YES";

            EXPECT_EQ(result, expected);
        }

        TEST(_1707, case2) {
            V = 4;
            E = 4;
            A = std::vector<std::vector<int>>(V + 1);
            visited = std::vector<bool>(V + 1);
            check = std::vector<int>(V + 1);

            A[1].push_back(2);
            A[2].push_back(3);
            A[3].push_back(4);
            A[4].push_back(2);

            std::string result = GetResult();

            std::string expected = "NO";

            EXPECT_EQ(result, expected);
        }

        TEST(_1707, case3) {
            V = 5;
            E = 4;
            A = std::vector<std::vector<int>>(V + 1);
            visited = std::vector<bool>(V + 1);
            check = std::vector<int>(V + 1);

            A[1].push_back(2);
            A[3].push_back(4);
            A[4].push_back(5);
            A[5].push_back(3);

            std::string result = GetResult();

            std::string expected = "NO";

            EXPECT_EQ(result, expected);
        }
    }
}
