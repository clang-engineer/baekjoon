#include <iostream>
#include <vector>

int main()
{
	int num;
	
	std::cin >> num;

	int start = 2;
	int end = 1;
	for (int i = 0; i < num / 6; i++) 
	{
		start += 6 * i;
		end += 6 * (i + 1);

		if (start <= num && num <= end)
		{
			std::cout << i + 2 << std::endl;
			break;
		}

	}
    return 0;
}

