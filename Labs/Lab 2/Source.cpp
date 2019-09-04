#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int n;

int date2()
{
	int m;
	int d;
	int y;
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
	int m;
	int d;
	int y;
	cout << "Please enter in the month, day, and year of your birth. Press return for each part:";
	cin >> m;
	cin >> d;
	cin >> y;
	cout << m << "/" << d << "/" << y << endl;
	date2();
	return 0;
}

int main()
{
	cin >> n;
	cout << (n + 1) * (n + 1) << endl;
	date();
	return 0;
}