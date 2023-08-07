#include <iostream>
#include <stack>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;
  std::cin >> N;

  std::stack<int> s;

  for (int i = 0; i < N; i++) {
    int num;

    std::cin >> num;

    if (num == 0) {
      s.pop();
    } else {
      s.push(num);
    }
  }

  int sum = 0;

  while (!s.empty()) {
    sum += s.top();
    s.pop();
  }

  std::cout << sum << '\n';

  return 0;
}

