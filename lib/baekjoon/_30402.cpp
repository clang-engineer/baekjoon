#include <string>

namespace baekjoon_30402 {
    std::string getCatName(std::string input) {
        if (input.find("w") != std::string::npos) {
            return "chunbae";
        } else if (input.find("b") != std::string::npos) {
            return "nabi";
        } else if (input.find("g") != std::string::npos) {
            return "yeongcheol";
        } else {
            return "what?";
        }
    }
}
