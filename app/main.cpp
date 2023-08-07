#include "../include/_9012.h"
#include <iostream>
#include <string>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;
  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    std::string str;
    std::cin >> str;
    int result = _9012::IsValidParenthesisString(str);
    if (result == 0) {
      std::cout << "NO\n";
    } else {
      std::cout << "YES\n";
    }
  }

  return 0;
}

