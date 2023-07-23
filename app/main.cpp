#include <iostream>
#include <string>
#include <vector>

#include "_11005.h"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int number, base;

  std::cin >> number >> base;

  _11005::Solution solution;

  std::cout << solution.GetBaseNumber(number, base) << '\n';
  return 0;
}

