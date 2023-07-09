#include <iostream>
#include <vector>

#include "10798.h"

int main() {
    std::vector<std::string> list;

    for (int i = 0; i < 5; ++i) {
        std::string str;
        std::cin >> str;
        list.push_back(str);
    }
    bj10798::Solution s;
    std::cout << s.GetVerticalConcatString(&list) << std::endl;
    return 0;
}

