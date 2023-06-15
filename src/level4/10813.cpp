#include <iostream>
#include <vector>

class Solution {
public:
  void answer() {}
};

int main() {
  int N, M;

  std::cin >> N >> M;

  std::vector<int> v(N);

  for (int i = 0; i < N; i++) {
    v[i] = i + 1;
  }

  for (int i = 0; i < M; i++) {
    int a, b;
    std::cin >> a >> b;

    int temp = v[a - 1];
    v[a - 1] = v[b - 1];
    v[b - 1] = temp;
  }

  for (int i = 0; i < N; i++) {
    std::cout << v[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}
