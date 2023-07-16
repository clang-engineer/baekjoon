#include "_10816.h"
#include <gtest/gtest.h>

namespace _10816 {
    namespace {
        TEST(_10816, case1) {
            std::map<int, int> map = {{6,   1},
                                      {3,   2},
                                      {2,   1},
                                      {10,  3},
                                      {-10, 2},
                                      {7,   1}};

//            10 9 -5 2 3 4 5 -10

            std::vector<int> vec = {10, 9, -5, 2, 3, 4, 5, -10};

            Solution solution(map, vec);
            EXPECT_EQ(solution.GetNumCountResult(), "3 0 0 1 2 0 0 2");

        }

    }

}
