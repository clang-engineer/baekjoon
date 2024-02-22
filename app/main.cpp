#include <iostream>

class Node {
public:
    Node *next[26];
    bool isEnd;

    Node() : isEnd(false) {
        std::fill(next, next + 26, nullptr);
    }

    ~Node() {
        for (auto &child: next) {
            delete child;
        }
    }

    void insert(const char *key) {
        if (*key == 0) {
            isEnd = true;
        } else {
            int next_index = *key - 'a';

            if (next[next_index] == nullptr) {
                next[next_index] = new Node();
            }

            next[next_index]->insert(key + 1);
        }
    }

    Node *find(const char *key) {
        if (*key == 0) {
            return this;
        } else {
            int next_index = *key - 'a';

            if (next[next_index] == nullptr) {
                return nullptr;
            }

            return next[next_index]->find(key + 1);
        }
    }
};

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