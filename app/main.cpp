#include "_1735.h"

#include <iostream>

int main() {
    int a_child, a_parent, b_child, b_parent;

    std::cin >> a_child >> a_parent >> b_child >> b_parent;

    _1735::Solution solution(a_child, a_parent, b_child, b_parent);
    std::cout << solution.GetAnswer() << '\n';

    return 0;
}

