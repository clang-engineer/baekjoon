#include <iostream>
#include <queue>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N, K;

  std::cin >> N >> K;

  std::queue<int> q;

  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  std::cout << "<";

  int index = 0;

  while (!q.empty()) {
    index++;
    if (q.size() == 1) {
      std::cout << q.front() << ">";
      std::cout << "\n";
      break;
    } else if (index == K) {
      std::cout << q.front() << ", ";
      q.pop();
      index = 0;
    } else {
      q.push(q.front());
      q.pop();
    }
  }

  return 0;
}

