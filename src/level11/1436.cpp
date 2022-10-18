#include <iostream>
#include <vector>

int main()
{
	int N = 0;
	std::cin >> N;

	int total_count = 0;

	int num = 666;
	while (total_count < N)
	{
		std::string num_string = std::to_string(num);

		if (num_string.find("666") != std::string::npos)
		{
			total_count++;
		}

		num++;
	}

	std::cout << num - 1 << std::endl;
				

    return 0;
}

