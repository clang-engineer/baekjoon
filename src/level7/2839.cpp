#include <iostream>
#include <vector>

int main()
{
	int target;
	std::cin >> target;


	if (target % 5 == 0)
	{
		std::cout << target / 5 << std::endl;
	}
	else if ((target % 5) % 3 == 0)
	{
		std::cout << target / 5 + target / 5 / 3 << std::endl;
	}
	else if ((target % 5) == 1)
	{
		std::cout << target / 5 + (target / 5 + 5) / 3 - 1 << std::endl;
	}
	else if ((target % 5) == 2)
	{
		std::cout << target / 5 + (target / 5 + 10) / 3 - 2 << std::endl;
	}
	else if ((target % 5) == 4)
	{
		std::cout << target / 5 + (target / 5 + 20) / 3 - 4 << std::endl;
	}
	else if (target % 3 == 0)
	{
		std::cout << target / 3 << std::endl;
	}
	else
	{
		std::cout << -1 << std::endl;
	}
	
    return 0;
}

