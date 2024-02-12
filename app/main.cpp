#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;

    long distance[N + 1][N + 1];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j)
                distance[i][j] = 0;
            else
                distance[i][j] = 1e9;
        }
    }

    for (int i = 0; i < M; i++) {
        int start, end, weight;
        std::cin >> start >> end >> weight;
        if (distance[start][end] > weight) {
            distance[start][end] = weight;
        }
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (distance[i][j] > distance[i][k] + distance[k][j]) {
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (distance[i][j] == 1e9) {
                std::cout << "0 ";
            } else {
                std::cout << distance[i][j] << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}