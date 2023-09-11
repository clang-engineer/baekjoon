#include <iostream>
#include "_29736.h"


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int lower, upper, stand, gap;
    std::cin >> lower >> upper >> stand >> gap;

    std::cout << _29736::GetPossibleCount(lower, upper, stand, gap) << std::endl;
    return 0;
}

