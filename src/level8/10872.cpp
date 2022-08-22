#include <iostream>
#include <vector>

int main()
{
	int num;
	std::cin >> num;

	int result = 1;

	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	std::cout << result << std::endl;
	
    return 0;
}

