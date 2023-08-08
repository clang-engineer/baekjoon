#include <iostream>
#include <queue>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;

  std::cin >> N;

  std::queue<int> q;

  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  int index = 1;

  while (q.size() > 1) {
    if (index % 2 == 1) {
      q.pop();
    } else {
      int temp = q.front();
      q.pop();
      q.push(temp);
    }
    index++;
  }

  std::cout << q.front() << '\n';

  return 0;
}

