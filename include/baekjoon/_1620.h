#include <string>
#include <unordered_map>
#include <vector>

namespace baekjoon_1620 {
    class Solution {
        private:
            std::unordered_map<std::string, int> m;
            std::vector<std::string> v;

        public:
            Solution(std::unordered_map<std::string, int> m, std::vector<std::string> v);
            std::string FindMatch(std::string s);


    };
}
