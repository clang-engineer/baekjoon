#include "_7785.h"

#include <gtest/gtest.h>
#include <vector>
#include <map>

namespace _7785 {
namespace {
TEST(_7785, case) {
    std::map<std::string, std::string> input;
    input["Baha"] = "enter";
    input["Askar"] = "enter";
    input["Baha"] = "leave";
    input["Artem"] = "enter";


    Solution solution(input);

    std::vector<std::string> result = solution.GetResult();
    std::vector<std::string> expected = {"Askar", "Artem"};
    EXPECT_EQ(result, expected);
}
}
}
