#include "baekjoon/_10816.h"


namespace baekjoon_10816 {
    Solution::Solution(const std::map<int, int> &map, const std::vector<int> &vec) {
        this->map = map;
        this->vec = vec;
    }

    std::string Solution::GetNumCountResult() const {
        std::string result;
        for (auto num: vec) {
            if (map.find(num) != map.end()) {
                result += std::to_string(map.at(num)) + " ";
            } else {
                result += "0 ";
            }
        }


        if (result[result.size() - 1] == ' ') {
            result = result.substr(0, result.size() - 1);
        }

        return result;
    }

}