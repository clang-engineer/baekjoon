#include <gtest/gtest.h>
#include "_18352.h"

namespace _18352 {

    TEST(_18352, Solution) {
        int n = 4;
        std::vector<std::pair<int, int>> edges = {
                {1, 2},
                {1, 3},
                {2, 3},
                {2, 4}
        };
        Solution solution(n, edges);
        std::vector<int> result = solution.getBFSDistance(1);
        std::vector<int> expected = {0, 1, 1, 2};
        EXPECT_EQ(result, expected);
    };
};