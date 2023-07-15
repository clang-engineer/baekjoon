#include "_18870.h"
#include <algorithm>

namespace _18870 {
Solution::Solution(std::vector<int> input) : input(input) {
}

std::vector<int> Solution::GetResult() {
    std::vector<int> result;
    std::vector<int> sorted_input = input;
    std::sort(sorted_input.begin(), sorted_input.end());
    sorted_input.erase(std::unique(sorted_input.begin(), sorted_input.end()), sorted_input.end());

    for (int i = 0; i < input.size(); i++) {
        int index = std::lower_bound(sorted_input.begin(), sorted_input.end(), input[i]) - sorted_input.begin();
        result.push_back(index);
    }

    return result;
}
}
