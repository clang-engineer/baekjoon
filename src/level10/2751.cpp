#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int total_num, tmp;

	std::vector<int> vec;
	std::cin >> total_num;

	for (int i = 0; i < total_num; i++)
	{
		std::cin >> tmp;
		vec.push_back(tmp);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < total_num; i++)
	{
		std::cout << vec[i] << "\n";
	}

	return 0;
}
