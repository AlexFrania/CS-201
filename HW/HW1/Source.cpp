#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int a;
	cin >> a;
	if (a <= 0)
	{
		cout << "Please enter a valid number.\n";
	}
	else
	{
		for (int h = 0; h <= a; ++h) //h is height
		{
			if (h <= a)
			{
				cout << "#\n";
			}
		}
	}
	return 0;
}