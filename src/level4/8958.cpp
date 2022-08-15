#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
	int count;
	cin >> count;

	vector<int> result;
	for (int i = 0; i < count; i++)
	{
		string input;
		cin >> input;

		char char_array[input.length()];

		strcpy(char_array, input.c_str());

		int sum = 0;
		int acc = 0;
		for (int j = 0; j < sizeof(char_array); j++)
		{
			if (char_array[j] == 'O')
			{
				acc += 1;
				sum += acc;
			}
			else
			{
				acc = 0;
			}
		}

		result.push_back(sum);
	}

	for (auto iter = result.begin(); iter != result.end(); iter ++)
	{
		cout << *iter << endl;
	}

	return 0;
}

