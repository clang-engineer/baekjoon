#include <iostream>
#include <vector>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int target_count;
		std::string target_str;

		std::cin >> target_count;
		std::cin >> target_str;

		for (int j = 0; j < target_str.length(); j++)
		{
			for (int k = 0; k < target_count; k++)
			{
				std::cout << target_str.at(j);
			}
		}

		std::cout << std::endl;
	}
	return 0;
}

