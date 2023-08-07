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
    int cmd;
    std::cin >> cmd;

    switch (cmd) {
    case 1:
      int x;
      std::cin >> x;
      s.push(x);
      break;
    case 2:
      if (!s.empty()) {
        int top = s.top();
        std::cout << top << '\n';
        s.pop();
      } else {
        std::cout << -1 << '\n';
      }
      break;
    case 3:
      std::cout << s.size() << '\n';
      break;
    case 4:
      if (s.empty()) {
        std::cout << 1 << '\n';
      } else {
        std::cout << 0 << '\n';
      }
      break;
    case 5:
      if (!s.empty()) {
        std::cout << s.top() << '\n';
      } else {
        std::cout << -1 << '\n';
      }
      break;
    default:
      break;
    }
  }
  return 0;
}

