#include <iostream>
#include <queue>
#include <string>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;

  std::cin >> N;

  std::queue<int> q;

  while (N > 0) {
    std::string cmd;

    std::cin >> cmd;

    if (cmd == "push") {
      int num;
      std::cin >> num;
      q.push(num);
    } else if (cmd == "pop") {
      if (q.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << q.front() << '\n';
        q.pop();
      }
    } else if (cmd == "size") {
      std::cout << q.size() << '\n';
    } else if (cmd == "empty") {
      std::cout << q.empty() << '\n';
    } else if (cmd == "front") {
      if (q.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << q.front() << '\n';
      }
    } else if (cmd == "back") {
      if (q.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << q.back() << '\n';
      }
    }

    N--;
  }

  return 0;
}

