#include <gtest/gtest.h>
#include <vector>

#include "baekjoon/_9063.h"

namespace baekjoon_9063 {
    namespace {
        TEST(_9063, Solution) {
            std::vector<std::pair<int, int>> vec = {{20, 24},
                                                    {40, 21},
                                                    {10, 12}};


            Solution solution(vec);

            EXPECT_EQ(solution.GetMaxWidth(), 360);


        }

        TEST(_9063, Solution2) {
            std::vector<std::pair<int, int>> vec = {{2, 1},
                                                    {3, 2},
                                                    {5, 2},
                                                    {3, 4}};
            Solution solution(vec);

            EXPECT_EQ(solution.GetMaxWidth(), 9);
        }

        TEST(_9063, Solution3) {
            std::vector<std::pair<int, int>> vec = {{-2, -2},
                                                    {-1, -1}};
            Solution solution(vec);

            EXPECT_EQ(solution.GetMaxWidth(), 1);
        }

        TEST(_9063, Solution4) {
            std::vector<std::pair<int, int>> vec = {{15, 13}};
            Solution solution(vec);

            EXPECT_EQ(solution.GetMaxWidth(), 0);
        };
    }

}