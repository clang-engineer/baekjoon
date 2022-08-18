#include <iostream>
#include <vector>

int returnVal (char x)
{
	return (int) x - 64;
}

int get_dial_number(int num)
{
	switch (num)
	{
		case 1: case 2: case 3:
			return 2;
		case 4: case 5: case 6:
			return 3;
		case 7: case 8: case 9:
			return 4;
		case 10: case 11: case 12:
			return 5;
		case 13: case 14: case 15:
			return 6;
		case 16: case 17: case 18: case 19:
			return 7;
		case 20: case 21: case 22:
			return 8;
		case 23: case 24: case 25: case 26:
			return 9;
		default:
			return 0; 
	}
}

int main()
{
	std::string s;
	std::cin >> s;

	int result = 0;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		result += get_dial_number(returnVal(s[i])) + 1;
	}

	std::cout << result << std::endl;
	return 0;
}
