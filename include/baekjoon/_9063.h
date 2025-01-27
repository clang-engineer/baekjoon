#ifndef BAEKJOON__9063_H
#define BAEKJOON__9063_H

#include <vector>

namespace baekjoon_9063 {
    class Solution {
    private:
        std::vector<std::pair<int, int>> coordinates;
    public:
        Solution(std::vector<std::pair<int, int>> coordinates);
        int GetMaxWidth() const;
    };

};


#endif
