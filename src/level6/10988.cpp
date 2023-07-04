#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  void isPalindrome(std::string s) {
    for (int i = 0; i < s.length() / 2; i++) {
      if (s[i] != s[s.length() - i - 1]) {
        std::cout << 0 << std::endl;
        return;
      }
    }
    std::cout << 1 << std::endl;
  }
};

int main() {
  std::string N;
  std::cin >> N;

  Solution sol;
  sol.isPalindrome(N);
  return 0;
}

