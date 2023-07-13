#include <iostream>

#include "_10101.h"

int main() {

    int angle1, angle2, angle3;

    std::cin >> angle1 >> angle2 >> angle3;

    _10101::Solution solution;

    std::cout << solution.GetTriangleType(angle1, angle2, angle3) << std::endl;

    return 0;
}

