/*Alex Frania
CS-201
Date: 9/18/19
HW2: Money
Description: User inputs the amount of coins they have for each coin type
and the program outputs the number of coins and its total, either as the 
the number of coins if the total is lower than 100 or as a dollar amount if 
its over.
*/

#include <iostream>

using std::cout;
using std::cin;

int money()
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

	total = pennies + (nickles * 5) + (dimes * 10) + (quarters * 25);

	if (total < 100)
	{
		cout << "In total, you have " << total << "cents.\n\n";
	}
	else
	{
		total /= 100;
		cout << "You have $" << total << "\n\n";
	}
	return 0;
}