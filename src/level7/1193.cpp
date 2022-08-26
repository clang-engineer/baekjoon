#include <iostream>
#include <vector>

int get_row_num(int position);

int main()
{

	int input;
	std::cin >> input;

	int row_num = get_row_num(input);

	int row_num_index = 1 + row_num * (row_num - 1) /2;

	int gap = input - row_num_index;

	std:: cout << row_num - gap << "/" << 1 + gap << std::endl;

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
