//
// Created by zero on 2024/02/22.
//

#include <iostream>
#include "_14425.h"

namespace _14425 {
    void Node::insert(const char *key) {
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

    Node *Node::find(const char *key) {
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

    Node::Node() : isEnd(false) {
        std::fill(next, next + 26, nullptr);
    }

    Node::~Node() {
        for (auto &child: next) {
            delete child;
        }
    }
}
