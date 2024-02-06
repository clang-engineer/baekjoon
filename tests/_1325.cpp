#include "_1325.h"

#include <gtest/gtest.h>
#include <vector>

namespace _1325 {
    namespace {
        TEST(_1325, case1) {
            N = 5;

            A.resize(N + 1);
            answer.resize(N+1);
            visited.resize(N+1);

            A[3].push_back(1);
            A[3].push_back(2);
            A[4].push_back(3);
            A[5].push_back(3);

            answer.resize(N + 1);
            visited.resize(N + 1);

            std::vector<int> result = GetResult();

            std::vector<int> expected = {1, 2};

            EXPECT_EQ(result, expected);
        }

        TEST(_1325, case2) {
            N = 2;

            A.resize(N + 1);
            answer.resize(N+1);
            visited.resize(N+1);

            A[1].push_back(2);
            A[2].push_back(1);

            std::vector<int> result = GetResult();

            std::vector<int> expected = {1, 2};

            EXPECT_EQ(result, expected);
        }

    }
}