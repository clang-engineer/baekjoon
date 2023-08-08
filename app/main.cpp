#include "../include/_4949.h"
#include <iostream>
#include <string>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::string input;

  while (input != ".") {
    std::getline(std::cin, input);
    if (input == ".") {
      break;
    }
    std::cout << _4949::IsBalanced(input) << std::endl;
  }

  return 0;
}

