#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int  a, b;

	cin >> a;
	cin >> b;

	float result = (float)a / (float)b;
	cout << fixed << setprecision(9);
	cout << result << endl;

	return 0;
}
