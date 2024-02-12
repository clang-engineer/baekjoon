#include <iostream>
#include <vector>

long **FloydWarshall(int N, std::vector<std::vector<int>> edges) {
    long **distance = new long *[N + 1];
    for (int i = 0; i <= N; i++) {
        distance[i] = new long[N + 1];
        for (int j = 0; j <= N; j++) {
            if (i == j) {
                distance[i][j] = 0;
            } else {
                distance[i][j] = 1e9;
            }
        }
    }

    for (int i = 0; i < edges.size(); i++) {
        int start = edges[i][0];
        int end = edges[i][1];
        int weight = edges[i][2];
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

    return distance;
}

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

    long **result = FloydWarshall(N, edges);

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