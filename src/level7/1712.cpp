#include <iostream>
#include <vector>

int main()
{
	int A, B, C;
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	if (A <= 0 || B <= 0 || C <= 0)
	{
		std::cout << -1 << std::endl; 
		return 0;
	}
	
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

