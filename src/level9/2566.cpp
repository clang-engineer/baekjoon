#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> v;
	
	for (int i = 0; i < 9; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < 9; j++)
		{
			int t;
			std::cin >> t;

			temp.push_back(t);
		}
		v.push_back(temp);
	}

	int max = 0;
	int x, y;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max <= v[i][j])
			{
				max = v[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	std::cout << max << std::endl;
	std::cout << x << " " << y << std::endl;

	return 0;
}
