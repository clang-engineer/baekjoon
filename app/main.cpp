#include <iostream>

#include "_9506.h"

int main() {

    int target_number;
    while (std::cin >> target_number) {
        if (target_number == -1) {
            break;
        }

        _9506::Solution s(target_number);
        std::cout << s.GetResultString() << std::endl;
    }

    return 0;
}

