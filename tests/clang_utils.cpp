//
// Created by planit on 2025-01-29.
//

#include "clang_utils.h"

#include <gtest/gtest.h>

using clang_utils::is_prime;

namespace clang_utils {
    namespace {
        TEST(ClangCommon, IsPrime) {
            EXPECT_EQ(clang_utils::is_prime(1), false);
            EXPECT_EQ(clang_utils::is_prime(2), true);
            EXPECT_EQ(clang_utils::is_prime(3), true);
            EXPECT_EQ(clang_utils::is_prime(4), false);
            EXPECT_EQ(clang_utils::is_prime(5), true);
            EXPECT_EQ(clang_utils::is_prime(6), false);
            EXPECT_EQ(clang_utils::is_prime(7), true);
            EXPECT_EQ(clang_utils::is_prime(8), false);
            EXPECT_EQ(clang_utils::is_prime(9), false);
            EXPECT_EQ(clang_utils::is_prime(10), false);
        }
    }
}
