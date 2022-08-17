#include <iostream>
#include <vector>

int main()
{
	int count;
	std::cin >> count;

	int target_num;
	std::cin >> target_num;

	std::vector<int> vec;

	while (target_num != 0)
	{
		vec.push_back(target_num % 10);
		target_num /= 10;
	}

	int result = 0;
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		result += *it;
	}

	std::cout << result << std::endl;
	
	return 0;
}

