//
// Created by zero on 2023/07/14.
//

#include "baekjoon/_10101.h"

namespace baekjoon_10101 {
    std::string Solution::GetTriangleType(int angle1, int angle2, int angle3) const {
        if (angle1 + angle2 + angle3 != 180) {
            return "Error";
        }

        if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
            return "Equilateral";
        }

        if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1) {
            return "Isosceles";
        }

        return "Scalene";

    }
};