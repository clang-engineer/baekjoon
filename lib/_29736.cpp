#include "../include/_29736.h"
#include <string>

namespace _29736 {
std::string GetPossibleCount(int lower, int upper, int stand, int gap) {
  int count = 0;
  for (int i = lower; i <= upper; i++) {
    if (std::abs(i - stand) <= gap) {
      count++;
    }
  }

  if (count == 0) {
    return "IMPOSSIBLE";
  }
  return std::to_string(count);
}
} // namespace _29736
