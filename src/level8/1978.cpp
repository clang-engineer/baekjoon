#include <iostream>
#include <vector>

int main()
{
	int total_num;

	std::cin >> total_num;

	std::vector<int> vec;
	for (int i = 0; i < total_num; i++)
	{
		int num;
		std::cin >> num;
		vec.push_back(num);
	}

	int result_count = 0;

	for (auto elem : vec)
	{
		if (elem == 0 || elem == 1)
		{
			continue;
		}

		for (int i = 2; i <= elem / 2 + 1; i++)
		{
			if (elem % i != 0)
			{
				result_count++;
				break;
			}
		}

	}

	std::cout << result_count << std::endl;

    return 0;
}

