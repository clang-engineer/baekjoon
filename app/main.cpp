#include <iostream>
#include <vector>

static int N;
static std::vector<std::vector<int>> tree;
static int answer = 0;
static int delete_node = 0;
static std::vector<bool> visited;

void DFS(int number);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> N;
    visited.resize(N);
    tree.resize(N);
    int root = 0;

    for (int i = 0; i < N; i++) {
        int parent;
        std::cin >> parent;
        if (parent == -1) {
            root = i;
        } else {
            tree[i].push_back(parent);
            tree[parent].push_back(i);
        }
    }

    int delete_node;
    std::cin >> delete_node;

    if (delete_node == root) {
        std::cout << 0 << std::endl;
    } else {
        DFS(root);
        std::cout << answer << std::endl;
    }

}

void DFS(int number) {
    visited[number] = true;
    int node_count = 0;

    for (int i: tree[number]) {
        if (!visited[i] && i != delete_node) {
            node_count++;
            DFS(i);
        }
    }

    if (node_count == 0) {
        answer++;
    }
}