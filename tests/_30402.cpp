#include <gtest/gtest.h>

#include "_30402.h"

namespace _30402 {
    namespace {
        TEST(_30402, Solution) {
            EXPECT_EQ(getCatName("w"), "chunbae");

            EXPECT_EQ(getCatName("b"), "nabi");

            EXPECT_EQ(getCatName("g"), "yeongcheol");

            EXPECT_EQ(getCatName("h"), "what?");
        }
    }
}
