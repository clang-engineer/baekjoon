#include <iostream>

using namespace std;

int main()
{
	int count, upper;

	cin >> count;
	cin >> upper;

	int arr[count - 1];
	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < count; i++)
	{
		if (arr[i] < upper)
			cout << arr[i] << " ";
	}

	cout << endl;
    return 0;
}

