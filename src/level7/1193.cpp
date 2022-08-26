#include <iostream>
#include <vector>

int get_row_num(int position);

int main()
{

	unsigned int input;
	std::cin >> input;

	unsigned int row_num = get_row_num(input);

	unsigned int row_num_index = 1 + row_num * (row_num - 1) /2;

	unsigned int gap = input - row_num_index;


	if (row_num % 2 == 0)
	{
		std:: cout << 1 +  gap << "/" << row_num - gap << std::endl;
	}
	else
	{
		std:: cout << row_num - gap << "/" << 1 + gap << std::endl;
	}

	return 0;
}

int get_row_num(int position)
{
	int row = 0;

	for (int i = 1; i <= position; i++)
	{
		int value = 1 + i * (i - 1) / 2;

		if (value <= position)
		{
			row +=1;
		}
	}

	return row;
}
