#include <iostream>
#include <vector>

#include "_11404.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> edges;
    for (int i = 0; i < M; i++) {
        int start, end, weight;
        std::cin >> start >> end >> weight;
        edges.push_back({start, end, weight});
    }

    long **result = _11404::FloydWarshall(N, edges);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (result[i][j] == 1e9) {
                std::cout << "0 ";
            } else {
                std::cout << result[i][j] << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}