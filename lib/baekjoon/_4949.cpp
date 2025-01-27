#include "baekjoon/_4949.h"
#include <stack>

namespace baekjoon_4949 {
std::string IsBalanced(std::string str) {
  std::string result = "yes";
  std::stack<char> stack;

  for (auto c : str) {
    if (c == '(' || c == '[') {
      stack.push(c);
    } else if (c == ')') {
      if (stack.empty() || stack.top() != '(') {
        result = "no";
        break;
      }
      stack.pop();
    } else if (c == ']') {
      if (stack.empty() || stack.top() != '[') {
        result = "no";
        break;
      }
      stack.pop();
    }
  }

  if (!stack.empty()) {
    result = "no";
  }

  return result;
}
} // namespace baekjoon_4949
