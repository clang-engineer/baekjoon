#include <iostream>
#include <vector>

class Solution {
	public:
		void print_datatype(int num) {
			for (int i = 0; i < num/4; i++) {
				std::cout << "long ";
			}
			std::cout << "int" << std::endl;
		}
};

int main()
{
	int a;
	std::cin >> a;

	Solution s;
	s.print_datatype(a);
	return 0;
}

