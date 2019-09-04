#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int n;
int m;
int d;
int y;
string zeroM;
string extY;
string zeroD;

int date2()
{
	if (m <= 9)
	{
		zeroM = "0";
	}

	if (d <= 9)
	{
		zeroD = "0";
	}

	if (y <= 9)
	{
		extY = "200";
	}
	else if (y > 9, y <= 19)
	{
		extY = "20";
	}
	else if (y >= 20, y <= 99)
	{
		extY = "19";
	}

	cout << extY << y << "-" << zeroM << m << "-" << zeroD << d << endl;
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
	cout << "" << endl;
	cout << m << "/" << d << "/" << y << endl;
	cout << "" << endl;
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