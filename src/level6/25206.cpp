#include <iostream>
#include <map>
#include <string>
#include <vector>

class Solution {
public:
  double getFinalScore() {
    for (int i = 0; i < 20; ++i) {
      std::string input;
      std::getline(std::cin, input);

      std::vector<std::string> input_vector = input_split(input, ' ');

      if (input_vector[2] != "P") {
        sum_of_grade += std::stod(input_vector[1]);
        sum_of_grade_multiply_score +=
            std::stod(input_vector[1]) * grade_map[input_vector[2]];
      }
    }

    return sum_of_grade_multiply_score / sum_of_grade;
  }

private:
  std::vector<std::string> input_split(std::string input, char delimiter) {
    std::vector<std::string> answer;
    std::string temp = "";
    for (int i = 0; i < input.size(); ++i) {
      if (input[i] == delimiter) {
        answer.push_back(temp);
        temp = "";
      } else {
        temp += input[i];
      }
    }
    answer.push_back(temp);
    return answer;
  }

  std::map<std::string, double> grade_map = {
      {"A+", 4.5}, {"A0", 4.0}, {"A-", 3.7}, {"B+", 3.5}, {"B0", 3.0},
      {"B-", 2.7}, {"C+", 2.5}, {"C0", 2.0}, {"C-", 1.7}, {"D+", 1.5},
      {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}};

  double sum_of_grade = 0;
  double sum_of_grade_multiply_score = 0;
};

int main() {
  std::cout << std::fixed;
  std::cout.precision(7);
  Solution solution = Solution();
  std::cout << solution.getFinalScore() << std::endl;
  return 0;
}

