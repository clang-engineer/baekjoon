#include <iostream>
#include <limits.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int node_num, edge_num;
    long distances[101][101];

    std::cin >> node_num >> edge_num;

    for (int i = 1; i <= node_num; i++) {
        for (int j = 1; j <= node_num; j++) {
            if (i == j) {
                distances[i][j] = 0;
            } else {
                distances[i][j] = 10000001;
            }
        }
    }

    for (int i = 0; i < edge_num; i++) {
        int start, end;
        std::cin >> start >> end;
        distances[start][end] = 1;
        distances[end][start] = 1;
    }

    for (int k = 1; k <= node_num; k++) {
        for (int i = 1; i <= node_num; i++) {
            for (int j = 1; j <= node_num; j++) {
                if (distances[i][j] > distances[i][k] + distances[k][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }

    int Min = INT_MAX;
    int Answer = -1;

    for (int i = 1; i <= node_num; i++) {
        int sum = 0;
        for (int j = 1; j <= node_num; j++) {
            sum += distances[i][j];
        }
        if (Min > sum) {
            Min = sum;
            Answer = i;
        }
    }

    std::cout << Answer << std::endl;

    return 0;
}