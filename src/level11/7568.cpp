#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
		std::cin >> v[i].first >> v[i].second;

	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		}
		std::cout << rank << " ";
	}
	
    return 0;
}
