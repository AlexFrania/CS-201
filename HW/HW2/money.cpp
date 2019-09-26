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

	return 0;
}