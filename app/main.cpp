#include <iostream>

#include "../include/_1010.h"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int total;

  std::cin >> total;

  while (total > 0) {
    int N, M;

    std::cin >> N >> M;

    _1010::Solution solution;

    std::cout << solution.GetCombination(N, M) << std::endl;

    --total;
  }

  return 0;
}

