#include "10798.h"
#include <vector>

namespace bj10798 {
std::string Solution::GetVerticalConcatString(std::vector<std::string> *list) {
    std::string result;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < list->size(); ++j) {
            if (i < list->at(j).size()) {
                result += list->at(j)[i];
            }
        }
    }
    return result;
}
}