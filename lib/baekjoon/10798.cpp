#include "baekjoon/10798.h"
#include <vector>

namespace bj10798 {
std::string Solution::GetVerticalConcatString(std::vector<std::string> *list) {
    std::string result;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < static_cast<int>(list->size()); ++j) {
            if (i < static_cast<int>(list->at(j).size())) {
                result += list->at(j)[i];
            }
        }
    }
    return result;
}
}