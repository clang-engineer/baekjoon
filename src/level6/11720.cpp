#include <iostream>
#include <vector>

int main()
{
	int count;
	std::cin >> count;

	std::string target_num;
	std::cin >> target_num;

	int result = 0;

	for (int i = 0; i < sizeof(target_num); i++)
	{
		result += target_num[i] - '0';
	}

	std::cout << result << std::endl;

	return 0;
}

