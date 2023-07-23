#include <iostream>
#include <string>
#include <vector>

#include "_2745.h"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::string N;
  int B;

  std::cin >> N >> B;

  _2745::Solution solution;

  std::cout << solution.GetDecimalNumber(N, B) << '\n';
  return 0;
}

