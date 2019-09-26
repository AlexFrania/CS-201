#include <iostream>

using std::cout;
using std::cin;

int main()
{
	double pennies = 0;
	double nickles = 0;
	double dimes = 0;
	double quarters = 0;

	double total;

	cout << "How many pennies do you have?: ";
	cin >> pennies;
	cout << "How many nickles?: ";
	cin >> nickles;
	cout << "How many dimes?: ";
	cin >> dimes;
	cout << "How many quarters?: ";
	cin >> quarters;
	cout << "\n";

	if (pennies != 1)
	{
		cout << pennies << " pennies.\n";
	}
	else
	{
		cout << "1 penny.\n";
	}

	if (nickles != 1)
	{
		cout << nickles << " nickles.\n";
	}
	else
	{
		cout << "1 nickle.\n";
	}

	if (dimes != 1)
	{
		cout << dimes << " dimes.\n";
	}
	else
	{
		cout << "1 dime.\n";
	}

	if (quarters != 1)
	{
		cout << quarters << " quarters.\n";
	}
	else
	{
		cout << "1 quarter.\n";
	}
	cout << "\n";
	return 0;
}