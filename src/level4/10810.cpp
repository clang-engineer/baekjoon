#include <iostream>
#include <vector>

int main() {
  int N, M;
  std::cin >> N >> M;

  std::vector<int> v(N);

  for (int i = 0; i < M; i++) {
    int start, end, value;

    std::cin >> start >> end >> value;

    for (int j = start; j <= end; j++) {
      v[j - 1] = value;
    }
  }

  for (int i = 0; i < N; i++) {
    std::cout << v[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}

