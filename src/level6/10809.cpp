#include <iostream>
#include <vector>

int main()
{
	std::string keyword;
	std::cin >> keyword;

	const std::string albet{"abcdefghijklmnopqrstuvwxyz"};

	for (int i = 0; i < sizeof(albet); i++)
	{
		int pos = keyword.find(albet[i]);
		std::cout << pos << std::endl;
	}

    return 0;
}

