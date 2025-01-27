//
// Created by zero on 2024/02/12.
//

#include "baekjoon/_11404.h"

namespace baekjoon_11404 {
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

        for (size_t i = 0; i < edges.size(); i++) {
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
}
