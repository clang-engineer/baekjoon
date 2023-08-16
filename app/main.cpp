#include <deque>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int N;
  std::cin >> N;

  std::vector<int> structure(N);

  for (int i = 0; i < N; ++i) {
    std::cin >> structure[i];
  }

  std::deque<int> dq;

  for (int i = 0; i < N; ++i) {
    int num;
    std::cin >> num;

    if (structure[i] == 0) {
      dq.push_front(num);
    }
  }

  int M;
  std::cin >> M;

  for (int i = 0; i < M; ++i) {
    int num;
    std::cin >> num;

    dq.push_back(num);

    std::cout << dq.front() << ' ';
    dq.pop_front();
  }

  std::cout << '\n';

  return 0;
}

