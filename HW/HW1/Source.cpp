#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int i; //i is input
	cin >> i;
	if (i <= 0)
	{
		cout << "You didn't enter a valid number.\n";
	}
	else
	{
		for (int r = 1; r <= (i * 2); r++) //initiates row
		{
			for (int c = 1; c <= (i * 2) - 1; c++) //initiates column
			{
				cout << "#";
			}
		}
	}
	return 0;
}