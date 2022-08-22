#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

std::vector<char> add_string_int(std::string& A, std::string& B);

int main()
{
	std::string A, B;

	std::cin >> A >> B;

	std::vector<char> result = add_string_int(A, B);

	for (auto i : result)
	{
		std::cout << i;
	}

	std::cout << std::endl;

	return 0;
}

std::vector<char> add_string_int(std::string& a, std::string& b)
{
	std::stack<int> stack_a;
	std::stack<int> stack_b;

	std::vector<char> result;

	for (char& c : a)
	{
		stack_a.push(c - '0');
	}

	for (char& c : b)
	{
		stack_b.push(c - '0');
	}

	int round = 0;

	if (stack_a.size() >= stack_b.size())
	{
		while (!stack_b.empty())
		{
			int top_a = stack_a.top();
			stack_a.pop();

			int top_b = stack_b.top();
			stack_b.pop();

			int temp = top_a + top_b + round;

			if (temp > 9)
			{
				round = 1;
				temp -= 10;
			}
			else
			{
				round = 0;
			}

			result.push_back(temp + '0');
		}

		while (!stack_a.empty())
		{
			int top_a = stack_a.top();
			stack_a.pop();

			int temp = top_a + round;

			if (temp > 9)
			{
				round = 1;
				temp -= 10;
			}
			else
			{
				round = 0;
			}

			result.push_back(temp + '0');
		}
	}
	else
	{
		while (!stack_a.empty())
		{
			int top_a = stack_a.top();
			stack_a.pop();

			int top_b = stack_b.top();
			stack_b.pop();

			int temp = top_a + top_b + round;

			if (temp > 9)
			{
				round = 1;
				temp -= 10;
			}
			else
			{
				round = 0;
			}

			result.push_back(temp + '0');
		}

		while (!stack_b.empty())
		{
			int top_b = stack_b.top();
			stack_b.pop();

			int temp = top_b + round;

			if (temp > 9)
			{
				round = 1;
				temp -= 10;
			}
			else
			{
				round = 0;
			}

			result.push_back(temp + '0');
		}
	}

	if (round == 1)
	{
		result.push_back(1 + '0');
	}

	std::reverse(result.begin(), result.end());
	return result;
}
