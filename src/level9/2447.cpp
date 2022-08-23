#include <iostream>
#include <vector>

void print_pattern(int num);
void print_header();
void print_center();
void print_footer();

int main()
{
	int num;

	std::cin >> num;

	print_pattern(num);

	return 0;
}

void print_pattern(int num)
{
	for (int i = 0; i < num/3; i++)
	{
		print_header();
	}

	std::cout << std::endl;
	for (int i = 0; i < num/3; i++)
	{
		print_center();
	}
	std::cout << std::endl;

	for (int i = 0; i < num/3; i++)
	{
		print_footer();
	}
	std::cout << std::endl;
};

void print_header()
{
	std::cout << "***";
};
void print_center()
{
	std::cout << "* *";
};
void print_footer()
{
	std::cout << "***";
};
