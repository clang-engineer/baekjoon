#include <iostream>
#include "_1463.h"


int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;
  std::cin >> N;

    std::cout << _1463::GetMake1OperationCount(N) << std::endl;

  return 0;
}

