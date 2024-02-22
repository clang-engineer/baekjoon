#include <iostream>

#include  "_14425.h"

using namespace _14425;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    Node *root = new Node();

    while (n > 0) {
        char text[501];
        std::cin >> text;
        root->insert(text);
        n--;
    }

    int count = 0;
    while (m > 0) {
        char text[501];
        std::cin >> text;
        Node *node = root->find(text);

        if (node != nullptr && node->isEnd) {
            count++;
        }
        m--;
    }

    std::cout << count << '\n';
}