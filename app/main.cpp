#include <cmath>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int num;

  std::cin >> num;

  std::cout << std::pow(2, num) << '\n';

  return 0;
}

