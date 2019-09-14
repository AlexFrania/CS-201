#include <iostream>

using std::cout;
using std::cin;

int main()
{
	cout << "Please enter an integer: ";
	int i; //i is input
	cin >> i;
	if (i <= 0)
	{
		cout << "You didn't enter a valid number.\n";
	}
	else
	{
		int c, n = 1;
		int s = i - 1; //s is spaces in the diamond
		for (n = 1; n <= i; n++) //creates top rows
		{
			for (c = 1; c <= s; c++) //c is character amount
			{
				cout << " ";
			}
			s--; //reduces amount of space
			for (c = 1; c <= (2 * n) - 1; c++)
			{
				cout << "*";
			}
			cout << "\n";
		}
		s = 1;
		for (n = i-1; n >=1 ; n--)
		{
			for (c = 1; c <= s; c++)
			{
				cout << " ";
			}
			s++;
			for (c = 1; c <= (n * 2) - 1; c++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
	return 0;
}