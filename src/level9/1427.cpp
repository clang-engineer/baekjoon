#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::string num;

	std::cin >> num;

	std::vector<int> vec;
	for (int i = 0; i < num.length(); i++)
	{
		vec.push_back(num[i] - '0');
	}

	std::sort(vec.begin(), vec.end(), std::greater<int>());
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
	{
		std::cout << *iter;
	}
	std::cout << std::endl;


    return 0;
}

