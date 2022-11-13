#include <iostream>
#include <vector>

int main()
{
	int n, m;

	std::cin >> n >> m;

	std::vector<std::vector<int>> a(n, std::vector<int>(m));
	std::vector<std::vector<int>> b(n, std::vector<int>(m));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> b[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << a[i][j] + b[i][j] << " ";
		std::cout << std::endl;
	}

    return 0;
}

