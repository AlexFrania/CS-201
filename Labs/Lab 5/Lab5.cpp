/*Alex Frania
Lab 5
Date: 9/13/19
Program: User enters an integer and the program tells them whether the number they entered is a multiple of 3.
If the number isn't a multiple of 3 the program tells the user how much to add to make their number a multiple.
*/
#include <iostream>

using std::cin;
using std::cout;

int ifVersion()
{
	cout << "Please enter an integer: ";
	int i;
	cin >> i;
	if (i % 3 == 0)
	{
		cout << "Number is a multiple of 3.";
	}
	else if (i % 3 == 1)
	{
		cout << i << "+2 gives you a multiple of 3.";
	}
	else if (i % 3 == 2)
	{
		cout << i << "+1 gives you a multiple of 3.";
	}
	cout << "\n";
	return 0;
}

int main()
{
	cout << "Please enter an integer: ";
	int i;
	cin >> i;
	switch (i % 3)
	{
	case 0:
		cout << "Number is a multiple of 3.";
		break;
	case 1: 
		cout << i << "+2 gives you a multiple of 3.";
		break;
	case 2:
		cout << i << "+1 gives you a muliple of 3.";
		break;
	}
	cout << "\n";
	cout << "\n";
	cout << "Here's the if-statement version of the program:\n";
	ifVersion();
	return 0;
}