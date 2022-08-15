#include <iostream>

using namespace std;

int main()
{
	int num, target_num, count = 0;
	cin >> num;

	target_num = num;

	while (1)
	{
		int prefix = target_num / 10;
		int subfix = target_num % 10;

		int sum = prefix + subfix;

		if (target_num == num && count != 0)
		{
			break;
		}
		else 
		{
			target_num = subfix * 10 + sum % 10;
		}

		count += 1;
	}

	cout << count << endl;

	return 0;
}
