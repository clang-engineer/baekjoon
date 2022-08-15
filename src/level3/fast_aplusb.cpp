#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int A, B;
		cin >> A;
		cin >> B;

		cout << A + B << "\n";
	}
    return 0;
}

