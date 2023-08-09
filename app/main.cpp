#include <deque>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;

  std::cin >> N;

  std::deque<int> dq;

  for (int i = 0; i < N; i++) {
    int cmd;
    std::cin >> cmd;
    int x;
    switch (cmd) {
    case 1:
      std::cin >> x;
      dq.push_front(x);
      break;
    case 2:
      std::cin >> x;
      dq.push_back(x);
      break;
    case 3:
      if (dq.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << dq.front() << '\n';
        dq.pop_front();
      }
      break;
    case 4:
      if (dq.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << dq.back() << '\n';
        dq.pop_back();
      }
      break;
    case 5:
      std::cout << dq.size() << '\n';
      break;
    case 6:
      if (dq.empty()) {
        std::cout << 1 << '\n';
      } else {
        std::cout << 0 << '\n';
      }
      break;
    case 7:
      if (dq.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << dq.front() << '\n';
      }
      break;
    case 8:
      if (dq.empty()) {
        std::cout << -1 << '\n';
      } else {
        std::cout << dq.back() << '\n';
      }
      break;
    default:
      break;
    }
  }

  return 0;
}

