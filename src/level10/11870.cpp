#include <iostream>
#include <vector>

int main()
{

	int total_count;

	std::cin >> total_count;

	std::vector<int> vec;
	for (int i = 0; i < total_count; i++)
	{
		int temp;
		std::cin >> temp;
		vec.push_back(temp);
	}


	int info[total_count];


	for (int i = 0; i < total_count; i++)
	{

		if (info[i] != 0) {
			std::cout << info[i] << std::endl;
			continue;
		}

		int count = 0;
		for (int j = 0; j < total_count; j++)
		{
			if (vec[i] > vec[j])
			{
				count++;
			}
		}
		std::cout << count << " ";
		info[i] = count;
	}

	return 0;
}
