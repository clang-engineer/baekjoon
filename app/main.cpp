#include <iostream>
#include "_30402.h"
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    while (true) {
        std::string input;
        std::cin >> input;

        std::string result = _30402::getCatName(input);

        if (result == "what?") {
            continue;
        } else {
            std::cout << result << std::endl;
            break;
        }
    }

    return 0;
}

