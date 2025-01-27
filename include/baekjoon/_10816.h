#ifndef BAEKJOON__10816_H
#define BAEKJOON__10816_H

#include <string>
#include <vector>
#include <map>

namespace baekjoon_10816 {
    class Solution {
    public:
        Solution(const std::map<int, int> &map, const std::vector<int> &vec);
        std::string GetNumCountResult() const;
    private:
        std::vector<int> vec;
        std::map<int, int> map;
    };

};


#endif
