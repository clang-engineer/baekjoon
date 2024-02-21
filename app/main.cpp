#include <iostream>
#include <vector>

#include "_1068.h"

using namespace _1068;

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

        if (parent != -1) {
            tree[parent].push_back(i);
        } else {
            root = i;
        }
    }

    std::cin >> delete_node;

    if (delete_node == root) {
        std::cout << 0 << "\n";
    } else {
        DFS(root);
        std::cout << answer << "\n";
    }

    return 0;
}