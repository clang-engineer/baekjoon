#include <iostream>
#include <vector>

int main()
{
	int A, B, target_height;

	std::cin >> A;
	std::cin >> B;
	std::cin >> target_height;

	int acc_height = 0;
	int i = 0;

	int gap = A - B;
	int jump = (target_height -  A) / gap;

	i += jump;
	acc_height += gap * jump;

	while (1)
	{
		++i;
		acc_height += A;

		if (acc_height >= target_height)
		{
			std::cout << i << std::endl;
			break;
		}

		acc_height -= B;
	}

	return 0;
}

