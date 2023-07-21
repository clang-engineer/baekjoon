//
// Created by zero on 2023/07/21.
//

#include "_2458.h"

#include <gtest/gtest.h>
#include <vector>


namespace _2458 {
    TEST(_2458, case1) {
        std::vector vec{1, 3, 7, 13};
        Solution solution(vec);
        EXPECT_EQ(3, solution.GetAnswer());
    }

    TEST(_2458, case2) {
        std::vector vec{2, 6, 12, 18};
        Solution solution(vec);
        EXPECT_EQ(5, solution.GetAnswer());
    }
};