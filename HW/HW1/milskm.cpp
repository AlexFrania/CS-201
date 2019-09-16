/*Alex Frania
CS-201
Date: 09/15/19
Description: This program takes in the a number of miles and converts it to kilometers.
*/

#include <iostream>
#include <iomanip>

int main()
{
	using std::cout;
	using std::cin;

	float m = 0;
	cout << "Enter in any number of miles: ";
	cin >> m;
	cout << m << " is " << std::fixed << std::setprecision(3) << (m * 1.609) <<  " in kilometers.\n";
	return 0;
}