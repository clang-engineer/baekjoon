#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int num;

  std::cin >> num;

  std::cout << num * (num - 1) << '\n';

  return 0;
}

