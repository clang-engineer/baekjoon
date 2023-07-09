#include "shape.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace shape {
namespace {

TEST(ShapeTest, RectangleSize) {
  Rectangle r(10, 20);
  EXPECT_EQ(r.GetSize(), 200);
}

}  // namespace
}  // namespace shape
