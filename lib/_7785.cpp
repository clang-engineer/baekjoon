#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "_7785.h"

namespace _7785 {
Solution::Solution(std::map<std::string, std::string> input) {
    this->input = input;
}

std::vector<std::string> Solution::GetResult() {
    std::vector<std::string> result;
    for (const auto &i : input) {
        if (i.second == "enter") {
            result.push_back(i.first);
        } else {
            result.erase(std::remove(result.begin(), result.end(), i.first), result.end());
        }
    }

    std::sort(result.begin(), result.end(), std::greater<std::string>());
    return result;
}

};
