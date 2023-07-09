#include <iostream>

#include "5086.h"

int main() {
    for (int first, second; std::cin >> first >> second;) {

        if (first == 0 && second == 0) {
            break;
        }
        std::cout << bj5086::Solution().solution(first, second) << std::endl;
    }
    return 0;
}

