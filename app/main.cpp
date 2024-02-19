#include <iostream>
#include <vector>

void DFS(int node, std::vector<int>& answer, std::vector<bool>& visited, std::vector<std::vector<int>>& tree);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<int> answer(N + 1, 0);
    std::vector<bool> visited(N + 1, false);
    std::vector<std::vector<int>> tree(N + 1, std::vector<int>());

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        std::cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    DFS(1, answer, visited, tree);

    for (int i = 2; i <= N; i++) {
        std::cout << answer[i] << '\n';
    }

}

void DFS(int node, std::vector<int>& answer, std::vector<bool>& visited, std::vector<std::vector<int>>& tree) {
    visited[node] = true;
    for (int i = 0; i < tree[node].size(); i++) {
        int next = tree[node][i];
        if (!visited[next]) {
            answer[next] = node;
            DFS(next, answer, visited, tree);
        }
    }
}
