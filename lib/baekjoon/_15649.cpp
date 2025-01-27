#include <iostream>

namespace baekjoon_15649 {
#define MAX 9

int N, M;

int arr[MAX] = {
    0,
};

bool visited[MAX] = {
    0,
};

void dfs(int cnt) {
  if (cnt == M) {
    for (int i = 0; i < M; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return;
  }

  for (int i = 1; i <= N; i++) {
    if (!visited[i]) {
      visited[i] = true;
      arr[cnt] = i;
      dfs(cnt + 1);
      visited[i] = false;
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::cin >> N >> M;
  dfs(0);

  return 0;
}
} // namespace baekjoon_15649
