#include <iostream>

#include "_5073.h"

int main() {

    while(true) {
        int side1, side2, side3;

        std::cin >> side1 >> side2 >> side3;

        if (side1 == 0 && side2 == 0 && side3 == 0) {
            break;
        }

        _5073::Solution solution = _5073::Solution();

        std::cout <<  solution.GetTriangleType(side1, side2, side3) << std::endl;

    }
    return 0;
}

