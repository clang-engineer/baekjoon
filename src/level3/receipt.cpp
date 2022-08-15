#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int total, count;

	cin >> total; 
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int price, num;
		
		cin >> price;
		cin >> num;

		total -= price * count;
	}

	if (total == 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
    return 0;
}

