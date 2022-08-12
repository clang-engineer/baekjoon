#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int answer[6] = {1, 1, 2, 2, 2, 8};

	int inputArray[6];

	for (int i=0; i < 6; i++)
		cin >> inputArray[i];

	for (int i =0; i < 6; i++)
		cout << answer[i] - inputArray[i] << " ";

	cout << endl;

	return 0;
}

