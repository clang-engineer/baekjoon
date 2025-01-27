//
// Created by zero on 2024/03/23.
//

#include <vector>
#include <stack>

namespace baekjoon_17298 {
    std::vector<int> GetNextGreaterElement(const std::vector<int> &arr) {
        std::vector<int> answer(arr.size(), 0);
        std::stack<int> stack;
        stack.push(0);

        for (size_t i = 1; i < arr.size(); i++) {
            while (!stack.empty() && arr[stack.top()] < arr[i]) {
                answer[stack.top()] = arr[i];
                stack.pop();
            }
            stack.push(i);
        }

        while (!stack.empty()) {
            answer[stack.top()] = -1;
            stack.pop();
        }

        return answer;
    }
}