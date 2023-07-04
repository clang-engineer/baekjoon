#include <iostream>
#include <vector>

class Solution {
public:
  Solution(int N) { this->N = N; }
  void printStar() {
    printUpperStar();
    printMiddleStar();
    printLowerStar();
  }

private:
  int N;
  void printUpperStar() {
    for (int i = 1; i < N; i++) {
      printStarPyramidFromStart(i);
    }
  };
  void printMiddleStar() {
    for (int i = 0; i < 2 * N - 1; i++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  };

  void printLowerStar() {
    for (int i = N - 1; i > 0; i--) {
      printStarPyramidFromStart(i);
    }
  };

  void printStarPyramidFromStart(int start) {
    for (int j = 0; j < N - start; j++) {
      std::cout << " ";
    }

    for (int j = 0; j < 2 * start - 1; j++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }
};

int main() {
  int N;

  std::cin >> N;

  Solution solution = Solution(N);

  solution.printStar();
}

