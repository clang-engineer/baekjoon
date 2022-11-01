#include <iostream>

int factorial(int n);

int main()
{
	int num;
	std::cin >> num;

	std::cout << factorial(num) << std::endl;
    return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return factorial(n - 1) + factorial(n - 2);
}

