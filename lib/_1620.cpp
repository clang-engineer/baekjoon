#include "_1620.h"
#include <string>

namespace _1620 {
    Solution::Solution(std::unordered_map<std::string, int> m, std::vector<std::string> v) {
        this->m = m;
        this->v = v;
    }

    std::string Solution::FindMatch(std::string s) {
        if (s[0] >= '0' && s[0] <= '9') {
            return v[std::stoi(s) - 1];
        } else {
            return std::to_string(m[s] + 1);
        }
    }
}