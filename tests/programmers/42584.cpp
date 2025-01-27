#include "programmers/42584.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

using std::vector;

namespace programmers_42584 {
    namespace {
        TEST(programmers_42584, test) {
            vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            PrintVector(v);

            EXPECT_EQ(1, 1);
        }

        TEST(programmers_42584, case1) {
            vector<int> prices = {1, 2, 3, 2, 3};
            vector<int> expect_result = {4,3,1,1,0};
            EXPECT_EQ(solution(prices), expect_result);
        }
    }
}
