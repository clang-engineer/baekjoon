#include <vector>
#include <string>

namespace baekjoon_1764 {
class Solution {
 public:
  Solution(std::vector<std::string> &&heard, std::vector<std::string> &&seen);

  std::vector<std::string> GetResult() const;

 private:
  std::vector<std::string> heard;
  std::vector<std::string> seen;
};
}
