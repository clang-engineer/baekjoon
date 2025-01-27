#include "baekjoon/_27323.h"

#include <gtest/gtest.h>

namespace baekjoon_27323 {
namespace {

TEST(_27323, case1) {
    Rectangle r(2, 3);
    EXPECT_EQ(r.GetSize(), 6);
}

TEST(_27323, case2) {
    Rectangle r(100, 1);
    EXPECT_EQ(r.GetSize(), 100);
}

TEST(_27323, case3) {
    Rectangle r(4, 4);
    EXPECT_EQ(r.GetSize(), 16);
}
}
}