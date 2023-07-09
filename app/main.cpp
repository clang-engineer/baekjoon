#include <iostream>

#include "2501.h"

int main() {

    int n, k;

    std::cin >> n >> k;

    _2501::Solution s = _2501::Solution(n);
    std::cout << s.GetKthFactor(k) << std::endl;

    return 0;
}

