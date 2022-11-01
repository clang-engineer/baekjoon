#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int total_num, upper_num;

	std::cin >> total_num >> upper_num;

	std::vector<int> vec;

	for (int i = 0; i < total_num; i++)
	{
		int num;
		std::cin >> num;

		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end(), std::greater<>());

	std::cout << vec[upper_num - 1] << std::endl;
    return 0;
}
