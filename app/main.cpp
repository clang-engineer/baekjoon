#include <iostream>
#include <vector>

void DFS(int node);

static std::vector<std::vector<int>> A;
static std::vector<int> check;
static std::vector<int> visited;
static bool IsEven;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin >> N;

    for (int t = 0; t < N; t++) {
        int V, E;
        std::cin >> V >> E;
        A.resize(V + 1);
        check.resize(V + 1);
        visited.resize(V + 1);
        IsEven = true;

        for (int i = 0; i < E; i++) {
            int S, E;
            std::cin >> S >> E;
            A[S].push_back(E);
            A[E].push_back(S);
        }

        for (int i = 1; i <= V; i++) {
            if (IsEven) {
                DFS(i);
            } else {
                break;
            }
        }

        if (IsEven) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

        for (int i = 0; i <= V; i++) {
            A[i].clear();
            visited[i] = false;
            check[i] = 0;
        }
    }
}

void DFS(int node) {
    visited[node] = true;

    for (int i: A[node]) {
        if (!visited[i]) {
            check[i] = (check[node] + 1) % 2;
            DFS(i);
        } else {
            if (check[i] == check[node]) {
                IsEven = false;
            }
        }
    }

}