#include "_17103.h"

#include <cmath>

namespace _17103 {
Solution::Solution(int target_num_) : target_num(target_num_) {
  for (int i = 2; i < std::sqrt(target_num_) + 1; i++) {
    if (erastos[i] == 0) {
      for (int j = i * i; j <= target_num_; j += i) {
        erastos[j] = 1;
      }
    }
  }
}

bool Solution::IsPrime(int n) {
  if (n == 1) {
    return false;
  }

  for (int i = 2; i < std::sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int Solution::GetGoldBachPartitionNum() {
  int count = 0;
  for (int i = 2; i <= target_num / 2; ++i) {
    if (erastos[i] == 0 && erastos[target_num - i] == 0) {
      ++count;
    }
  }
  return count;
}
} // namespace _17103
