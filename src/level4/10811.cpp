#include <iostream>
#include <vector>

void reversing(std::vector<int> *v, int start, int end) {
  int temp;
  while (start < end) {
    temp = (*v)[start];
    (*v)[start] = (*v)[end];
    (*v)[end] = temp;
    start++;
    end--;
  }
}

int main() {
  int N, M;

  std::cin >> N >> M;

  std::vector<int> v(N);

  for (int i = 0; i < N; i++) {
    v[i] = i + 1;
  }

  for (int i = 0; i < M; i++) {
    int start, end;
    std::cin >> start >> end;
    reversing(&v, start - 1, end - 1);
  }

  for (int i = 0; i < N; i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}

