#include <iostream>

void PreOrder(int tree[26][2], int now);

void InOrder(int tree[26][2], int now);

void PostOrder(int tree[26][2], int now);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int tree[26][2];

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        char node_char, left, right;
        std::cin >> node_char >> left >> right;
        int node = node_char - 'A';

        if (left == '.') {
            tree[node][0] = -1;
        } else {
            tree[node][0] = left - 'A';
        }

        if (right == '.') {
            tree[node][1] = -1;
        } else {
            tree[node][1] = right - 'A';
        }
    }

    PreOrder(tree, 0);
    std::cout << '\n';
    InOrder(tree, 0);
    std::cout << '\n';
    PostOrder(tree, 0);
}

void PreOrder(int tree[26][2], int now) {
    if (now == -1) {
        return;
    }

    std::cout << (char) (now + 'A');

    PreOrder(tree, tree[now][0]);
    PreOrder(tree, tree[now][1]);
}

void InOrder(int tree[26][2], int now) {
    if (now == -1) {
        return;
    }

    InOrder(tree, tree[now][0]);
    std::cout << (char) (now + 'A');
    InOrder(tree, tree[now][1]);
}

void PostOrder(int tree[26][2], int now) {
    if (now == -1) {
        return;
    }

    PostOrder(tree, tree[now][0]);
    PostOrder(tree, tree[now][1]);
    std::cout << (char) (now + 'A');
}
