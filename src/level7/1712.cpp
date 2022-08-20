#include <iostream>
#include <vector>
#include <limits>

int main()
{
	int A, B, C;
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	
	int result = A / (C - B) + 1;

	if (result > 0)
	{
		std::cout << result << std::endl; 
	}
	else
	{
		std::cout << -1 << std::endl; 
	}

	return 0;
}

