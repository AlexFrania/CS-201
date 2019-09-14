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
		int c,n = 1;
		int s = i - 1; //s is spaces in the diamond
		for (n = 1; n <= i; n++) //creates top rows
		{
			for (c = 1; c <= s; c++) //c is character amount
			{
				cout << " ";
			}
			s--; //reduces amount of space
			for (c = 1; c <= 2 * n - 1; c++)
			{
				cout << "*"; 
			}
			cout << "\n";
		}
		int s = 1;
		for (n = 1; n <= i - 1; n++) //creates bottom rows
		{
			for (c = 1; c <= s; c++)
			{
				cout << " ";
			}
			s++;
	}
	return 0;
}