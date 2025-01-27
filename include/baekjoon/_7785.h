#ifndef BAEKJOON_INCLUDE__7785_H_
#define BAEKJOON_INCLUDE__7785_H_

#include <vector>
#include <string>
#include <map>

namespace baekjoon_7785 {
class Solution {
 private:
  std::map<std::string, std::string> input;
 public:
  Solution(std::map<std::string, std::string> input);

  std::vector<std::string> GetResult();
};

};


#endif
