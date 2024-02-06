//
// Created by zero on 2024/02/06.
//

#include "_1707.h"

#include <string>

namespace _1707 {
    long V, E;
    std::vector<std::vector<int>> A;
    std::vector<bool> visited;
    std::vector<int> check;
    bool IsEven = true;

    void DFS(int node) {
        visited[node] = true;

        for (int i: A[node]) {
            if (!visited[i]) {
                check[i] = (check[node] + 1) % 2;
                DFS(i);
            } else if (check[node] == check[i]) {
                IsEven = false;
            }
        }
    }

    std::string GetResult() {
        for (int i = 1; i <= V; i++) {
            if (IsEven) {
                DFS(i);
            } else {
                break;
            }
        }

        return IsEven ? "YES" : "NO";
    }
}
