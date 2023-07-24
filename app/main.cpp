#include <iostream>

#include "_17103.h"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;

  std::cin >> N;

  for (int i = 0; i < N; i++) {
    int a;
    std::cin >> a;
    _17103::Solution solution = _17103::Solution(a);
    std::cout << solution.GetGoldBachPartitionNum() << '\n';
  }

  return 0;
}

