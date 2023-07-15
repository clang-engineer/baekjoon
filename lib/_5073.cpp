#include "_5073.h"
#include <string>
#include <algorithm>

namespace _5073 {
    std::string Solution::GetTriangleType(int side1, int side2, int side3) const {
        if (side1 == 0 && side2 == 0 && side3 == 0) {
            return "Invalid";
        }

        int max = std::max(side1, std::max(side2, side3));

        if (max >= side1 + side2 + side3 - max) {
            return "Invalid";
        }


        if (side1 == side2 && side2 == side3) {
            return "Equilateral";
        }

        if (side1 == side2 || side2 == side3 || side3 == side1) {
            return "Isosceles";
        }

        return "Scalene";
    }
}