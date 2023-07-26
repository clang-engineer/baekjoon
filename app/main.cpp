#include <iostream>

#include "_11050.h"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N, K;

  std::cin >> N >> K;

  _11050::Solution solution;

  std::cout << solution.GetBinomialCoefficient(N, K) << '\n';
  return 0;
}

