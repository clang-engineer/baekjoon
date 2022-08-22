#include <iostream>
#include <vector>

int main()
{
	int A, B, V;

	std::cin >> A;
	std::cin >> B;
	std::cin >> V;


	int height = 0;
	int i = 0;
	while (1)
	{
		++i;
		height += A;
		
		if (height >= V)
		{
			std::cout << i << std::endl;
			break;
		}

		height -= B;
	}


    return 0;
}

