#include "baekjoon/_1463.h"
#include <algorithm>

namespace baekjoon_1463 {
int GetMake1OperationCount(int num) {
  int DP[1000001] = {
      0,
  };

  for (int i = 2; i <= num; ++i) {
    DP[i] = DP[i - 1] + 1;
    if (i % 2 == 0) {
      DP[i] = std::min(DP[i], DP[i / 2] + 1);
    }
    if (i % 3 == 0) {
      DP[i] = std::min(DP[i], DP[i / 3] + 1);
    }
  }

  return DP[num];
}
} // namespace baekjoon_1463
