#include <iostream>
#include "_10828.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    _10828::Solution s(N);
    std::string command;

    for (int i = 0; i < N; ++i) {
        std::cin >> command;
        if (command == "push") {
            int X;
            std::cin >> X;
            s.Push(X);
        } else if (command == "pop") {
            std::cout << s.Pop() << '\n';
        } else if (command == "size") {
            std::cout << s.Size() << '\n';
        } else if (command == "empty") {
            std::cout << s.Empty() << '\n';
        } else if (command == "top") {
            std::cout << s.Top() << '\n';
        }
    }
    return 0;
}

