#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int total_num;

	std::cin >> total_num;

	std::vector<int> vec;
	while (total_num > 0) {
		int input;
		std::cin >> input;
		vec.push_back(input);

		total_num--;
	}

	std::sort(vec.begin(), vec.end());

	for (auto it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << std::endl;
	}

	return 0;
}

