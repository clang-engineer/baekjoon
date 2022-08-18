#include <iostream>
#include <vector>


void reverse_number(int& n);

int main()
{
	int A, B;

	std::cin >> A;
	std::cin >> B;

	reverse_number(A);
	reverse_number(B);

	if (A > B)
	{
		std::cout << A << std::endl;
	}
	else
	{
		std::cout << B << std::endl;
	}

	return 0;
}

void reverse_number(int& n)
{
	int temp = n;
	int reversed_number = 0, remainder;

	while (temp != 0)
	{
		remainder = temp % 10;
		reversed_number = reversed_number * 10 + remainder;
		temp /= 10;
	}

	n = reversed_number;
}

