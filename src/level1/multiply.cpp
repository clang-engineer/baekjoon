#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;

	int B_100 = B / 100;
	int B_10 = (B / 10) % 10;
	int B_1 = B % 10;

	cout << A * B_1 << endl;
	cout << A * B_10 << endl;
	cout << A * B_100 << endl;

	int result = (A * B_1) + (A * B_10) * 10 + (A * B_100) * 100; 
	cout << result << endl;
    return 0;
}

