#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int n;
int m;
int d;
int y;

int date2()
{
	cout << "Please enter in your birth month: ";
	cin >> m;
	cout << "Enter in the exact day in the month you were born: ";
	cin >> d;
	cout << "Enter in the year your were born: ";
	cin >> y;
	cout << y << "-" << "0" << m << "-" << d << endl;
	return 0;
}

int date()
{
	cout << "Please enter in your birth month: ";
	cin >> m;
	cout << "Enter in the exact day in the month you were born: ";
	cin >> d;
	cout << "Enter in the year your were born: ";
	cin >> y;
	cout << m << "/" << d << "/" << y << endl;
	date2();
	return 0;
}

int main()
{
	cout << "Please enter in any interger: " << endl;
	cin >> n;
	cout << (n + 1) * (n + 1) << endl;
	cout << "" << endl;
	date();
	return 0;
}