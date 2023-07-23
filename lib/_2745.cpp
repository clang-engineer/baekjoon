#include "_2745.h"

#include <cmath>
#include <string>

namespace _2745 {

int Solution::GetDecimalNumber(std::string scale, int base) {
  int result = 0;
  int scale_size = scale.size();
  for (int i = 0; i < scale_size; i++) {
    int num = scale[i] - '0';
    if (num >= 10) {
      num = scale[i] - 'A' + 10;
    }
    result += num * pow(base, scale_size - i - 1);
  }
  return result;
};
}  // namespace _2745
