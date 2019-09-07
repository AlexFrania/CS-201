#include <iostream>

using std::cout;
using std::endl;

int a = 1;
int b = 0;


int FirstGrid()
{
	while (b < 600)
	{
		cout << "#";
		++b;
		if (b % 60 == 0)
		{
			cout << "\n";
		}
	}
	return 0;
}

int main()
{
	while (a <= 20)
	{
		cout << a << endl;
		++a;
	}
	FirstGrid();
	return 0;
}