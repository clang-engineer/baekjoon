#include <string>
#include "5086.h"

namespace bj5086 {
std::string Solution::solution(int first, int second) {
    if (first == 0 && second == 0) {
        return "";
    }

    if (first % second == 0) {
        return "multiple";
    } else if (second % first == 0) {
        return "factor";
    }

    return "neither";
}
}
