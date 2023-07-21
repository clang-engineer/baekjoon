//
// Created by zero on 2023/07/21.
//

#ifndef BAEKJOON__2458_H
#define BAEKJOON__2458_H

#include <vector>

namespace _2458 {
    class Solution {
    private:
        std::vector<int> vec;
        int GetGCD(int a, int b);
    public:
        Solution(std::vector<int> vec_);
        int GetAnswer();
    };

};


#endif //BAEKJOON__2458_H
