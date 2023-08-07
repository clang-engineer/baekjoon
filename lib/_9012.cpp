#include "_9012.h"
#include <stack>
#include <string>

namespace _9012 {
int IsValidParenthesisString(const std::string &str) {
  std::stack<char> s;
  for (auto c : str) {
    if (c == '(') {
      s.push(c);
    } else {
      if (s.empty()) {
        return 0;
      }
      s.pop();
    }
  }
  return s.empty() ? 1 : 0;
}

} // namespace _9012

