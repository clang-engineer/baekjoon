#include <iostream>

#include "_15894.h"

int main() {

    long target_number;
    std::cin >> target_number;

    _15894::Solution s(target_number);
    std::cout << s.GetResult() << std::endl;

    return 0;
}

