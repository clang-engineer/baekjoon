#include "_9063.h"
#include <vector>

namespace _9063 {
    Solution::Solution(std::vector<std::pair<int, int>> coordinates) : coordinates(coordinates) {}

    int Solution::GetMaxWidth() const {
        int min_left = 100000;
        int max_right = -100000;
        int min_bottom = 100000;
        int max_top = -100000;

        for (std::vector<std::pair<int, int>>::const_iterator itr = coordinates.cbegin(); itr != coordinates.cend(); itr++) {
            if (itr->first < min_left) {
                min_left = itr->first;
            }

            if (itr->first > max_right) {
                max_right = itr->first;
            }

            if (itr->second < min_bottom) {
                min_bottom = itr->second;
            }

            if (itr->second > max_top) {
                max_top = itr->second;
            }
        }

        return (max_right - min_left) * (max_top - min_bottom);
    }
}