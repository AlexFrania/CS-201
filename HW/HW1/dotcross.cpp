/*Alex Frania
CS-201
Date: 09/15/19
Description: Program takes in any floating numbers the user puts in
and converts the numbers into a single dot product number as well as
a cross product in (x,y,z) notation.
*/

#include <iostream>
#include <iomanip>

int dotcross()
{
	using std::cout;
	using std::cin;

	float x, y, z = 0;
	float x2, y2, z2 = 0;
	cout << "Enter in three floating-point numbers for vector A.\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "z: ";
	cin >> z;
	cout << "Now enter the floating-points for vector B.\n";
	cout << "x: ";
	cin >> x2;
	cout << "y: ";
	cin >> y2;
	cout << "z: ";
	cin >> z2;
	cout << "\n";
	float dot = (x * x2) + (y * y2) + (z * z2);
	cout << "A dot B = " << std::fixed << std::setprecision(5) << dot;
	cout << "\n";
	float Cx = (y * z2) - (z * y2);
	float Cy = (z * x2) - (x * z2);
	float Cz = (x * y2) - (y * x2);
	cout << "A cross B = " << std::fixed << std::setprecision(5) << "(" << Cx << "x, " << Cy << "y, " << Cz << "z)\n";
	cout << "\n";
	return 0;
}