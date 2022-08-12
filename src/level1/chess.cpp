#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int answer[5] = {1, 1, 2, 2, 8};

	int inputArray[5];

	for (int i=0; i < 5; i++)
		cin >> inputArray[i];

	for (int i =0; i < 5; i++)
		cout << answer[i] - inputArray[i] << " ";

	cout << endl;

	return 0;
}

