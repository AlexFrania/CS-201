/*Alex Frania
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main()
{
	float m = 0;
	cout << "Enter in any number of miles: ";
	cin >> m;
	cout << m << " is " << std::fixed << std::setprecision(3) << (m * 1.609) <<  " in kilometers.\n";
	return 0;
}