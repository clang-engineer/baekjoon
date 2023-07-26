#include "_11050.h"

namespace _11050 {
int Solution::GetBinomialCoefficient(int n, int k) {
  if (n == k || k == 0) {
    return 1;
  }
  return GetBinomialCoefficient(n - 1, k - 1) +
         GetBinomialCoefficient(n - 1, k);
}
} // namespace _11050
