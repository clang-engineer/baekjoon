#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num1, num2, num3, money;
	int result[6] = {0, 0, 0, 0, 0, 0};
	cin >> num1 >> num2 >> num3;

	result[num1-1] += 1;
	result[num2-1] += 1;
	result[num3-1] += 1;

	int max_count = result[0];
	int max_idx = 0;

	for (int i = 0; i < 6; i++)
	{
		if (result[i] > max_count)
		{
			max_count = result[i];
			max_idx = i;
		}
	}

	if (max_count == 3) 
	{
		money = 10000 + (max_idx + 1) * 1000;
	}
	else if (max_count == 2)
	{
		money = 1000 + (max_idx + 1) * 100;
	}
	else
	{
		money = max({num1, num2, num3}) * 100;
	}

	cout << money << endl;

    return 0;
}

