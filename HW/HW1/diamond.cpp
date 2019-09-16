/*Alex Frania
CS-201
Date: 09/15/19
Description: Program takes in a positive integer
and uses it to set the size and proportion of a
characters in the shape of a diamond.
*/
#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	cout << "Please enter a positive integer: ";
	int i;
	cin >> i;
	if (i <= 0)
	{
		cout << "Your input was not valid.\n";
	}
	else
	{
		int c, n = 1;
		int space = i - 1;
		for (n = 1; n <= i; n++)
		{
			for (c = 1; c <= space; c++)
			{
				cout << " ";
			}
			space--;
			for (c = 1; c <= (2 * n) - 1; c++)
			{
				cout << "*";
			}
			cout << "\n";
		}
		space = 1;
		for (n = i-1; n >=1 ; n--)
		{
			for (c = 1; c <= space; c++)
			{
				cout << " ";
			}
			space++;
			for (c = 1; c <= (n * 2) - 1; c++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
	return 0;
}