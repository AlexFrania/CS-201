#include <iostream>

// Alex Frania
// CS-201
// Lab 3

using std::cout;
using std::endl;

int SecondGrid()
{
	int c = 0;
	while (c < 600)
	{
		++c;
		if (c % 2 != 0)
		{
			cout << "#";
		}
		else
		{
			cout << "@";
		}
		if (c % 60 == 0)
		{
			cout << "\n";
		}
	}
	return 0;
}

int FirstGrid()
{
	int b = 0;
	while (b < 600)
	{
		++b;
		cout << "#";
		if (b % 60 == 0)
		{
			cout << "\n";
		}
	}
	cout << "\n";
	SecondGrid();
	return 0;
}

int main()
{
	int a = 1;
	while (a <= 20)
	{
		cout << a << endl;
		++a;
	}
	cout << "\n";
	FirstGrid();
	return 0;
}