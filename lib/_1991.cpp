//
// Created by zero on 2024/03/04.
//

#include "_1991.h"
#include <iostream>

namespace _1991 {
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
}
