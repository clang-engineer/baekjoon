#include <iostream>
#include <vector>

int main()
{
	int num;
	
	std::cin >> num;

	if (num == 1) {
		std::cout << 1 << std::endl;
		return 0;
	}

	if (num >= 2 && num <= 7) {
		std::cout << 2 << std::endl;
		return 0;
	}
	
	int start = 2;
	int end = 7;

	for (int i = 1; i < num; i++) 
	{
		start += 6 * i;
		end += 6 * (i + 1);

		if (num >= start && num <= end)
		{
			std::cout << i + 2 << std::endl;
			break;
		}

	}
    return 0;
}

