#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> vec(n);

	for (int i = 0; i < n; i++)
		std::cin >> vec[i];


	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int sum = vec[i] + vec[j] + vec[k];
				if (sum <= m && sum > max)
					max = sum;
			}
				
		}
	}
	
	std::cout << max << std::endl;

    return 0;
}

