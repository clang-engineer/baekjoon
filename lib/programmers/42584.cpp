//
// Created by planit on 2025-01-27.
//

#include "programmers/42584.h"

#include <vector>
#include <iostream>
#include <stack>

using std::vector;
using std::stack;

namespace programmers_42584 {
    void PrintVector(const std::vector<int>& v) {
        for (size_t i = 0; i < v.size(); i++) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }

    vector<int> solution(const vector<int> &prices) {
        vector<int> result;
        size_t size = prices.size();

        result.resize(size);
        stack<int> index_stack;

        for (size_t i = 0; i < prices.size(); i++) {
            while (!index_stack.empty() && prices[index_stack.top()] > prices[i]) {
                int top = index_stack.top();
                index_stack.pop();

                result[top] = i-top;
            }
            index_stack.push(i);
        }

        while (!index_stack.empty()) {
            int top = index_stack.top();
            index_stack.pop();

            result[top] = size - top -1;
        }


        return result;
    }

}


