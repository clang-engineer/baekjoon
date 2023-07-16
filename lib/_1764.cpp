#include "_1764.h"

#include <algorithm>
#include <vector>
#include <unordered_set>

namespace _1764 {
Solution::Solution(std::vector<std::string> &&heard_,
                   std::vector<std::string> &&seen_)
        : heard(std::move(heard_)), seen(std::move(seen_)) {
};

std::vector<std::string> Solution::GetResult() const {

    std::vector<std::string> result;

    std::unordered_set<std::string> seen_set(seen.begin(), seen.end());
    std::unordered_set<std::string> heard_set(heard.begin(), heard.end());

    for (const auto &h : heard_set) {
        if (seen_set.find(h) != seen_set.end()) {
            result.push_back(h);
        }
    }

    std::sort(result.begin(), result.end());

    return result;
};
}  // namespace _1764
