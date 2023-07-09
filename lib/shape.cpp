#include <fmt/core.h>
#include <shape.h>

namespace shape {
Rectangle::Rectangle(float w, float h) : w_(w), h_(h) {}

float Rectangle::GetSize() const { return w_ * h_; }

void Rectangle::Print() const {
  fmt::print("Rectangle: w = {}, h = {}, size = {}\n", w_, h_, GetSize());
}
}  // namespace shape
