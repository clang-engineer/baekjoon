#include "_11005.h"

#include <string>

namespace _11005 {
std::string Solution::GetBaseNumber(int number, int base) {
  std::string result;
  while (number > 0) {
    int remainder = number % base;
    if (remainder < 10) {
      result.insert(result.begin(), remainder + '0');
    } else {
      result.insert(result.begin(), remainder - 10 + 'A');
    }
    number /= base;
  }
  return result;
};
}  // namespace _11005
