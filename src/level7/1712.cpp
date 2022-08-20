#include <iostream>
#include <vector>
#include <limits>

int main()
{
	int A, B, C;
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	if (B > C)
	{
		std::cout << -1 << std::endl;
		return 0;
	}

	for (int i = 0; i < std::numeric_limits<int>::max(); i++)
	{
		int result = C * i - (A + B * i);

		if (result > 0)
		{
			std::cout << i << std::endl;
			return 0;
		}
	}

	std::cout << -1 << std::endl;

	return 0;
}

