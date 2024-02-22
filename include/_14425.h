//
// Created by zero on 2024/02/22.
//

#ifndef BAEKJOON__14425_H
#define BAEKJOON__14425_H

namespace _14425 {
    class Node {
    public:
        Node();

        ~Node();

        Node *next[26];
        bool isEnd;

        void insert(const char *key);

        Node *find(const char *key);
    };
}


#endif //BAEKJOON__14425_H
