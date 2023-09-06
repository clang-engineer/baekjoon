#include <iostream>
#define MAX 9

int N, M;

int arr[MAX] = {
    0,
};

void dfs(int num, int cnt) {
  if (cnt == M) {
    for (int i = 0; i < M; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return;
  }

  for (int i = num; i <= N; i++) {
    arr[cnt] = i;
    dfs(i, cnt + 1);
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::cin >> N >> M;
  dfs(1, 0);

  return 0;
}

