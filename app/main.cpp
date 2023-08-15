#include <iostream>
#include <set>
#include <string>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::set<std::string> set = {};

  int N;

  std::cin >> N;

  int result = 0;

  for (int i = 0; i < N; i++) {
    std::string input;

    std::cin >> input;

    if (input == "ENTER") {
      set.clear();
    } else if (set.find(input) == set.end()) {
      result++;
      set.insert(input);
    }
  }

  std::cout << result << '\n';

  return 0;
}

