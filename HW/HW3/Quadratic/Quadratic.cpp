#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
	int a, b, c;
	int x1, x2;

	cout << "Here's a quadratic equation: ax^2 + bx + c = 0\n";
	cout << "Enter in the number for a: ";
	cin >> a;
	cout << "Enter in the number for b: ";
	cin >> b;
	cout << "Enter in the number for c: ";
	cin >> c;
	cout << "\n";

	int D = ((b * b) - ((4 * a) * c));

	if (D < 0)
	{
		cout << "The discriminant is less than zero. There are no real roots.\n";
		return 0;
	}
	else 
	{
		int x1Div = (-1 * b) + sqrt(D);
		int x2Div = (-1 * b) - sqrt(D);

		x1 = (x1Div) / (2 * a);
		x2 = (x2Div) / (2 * a);

		cout << "Roots: " << x1 << " and " << x2 << ".\n";
	}
	return 0;
}