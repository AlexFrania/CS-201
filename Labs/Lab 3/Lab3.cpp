#include <iostream>

using std::cout;
using std::endl;

int a = 1;

int FirstGrid()
{
	while (a <= 30)
	{
		cout << "#";
		a++;
	}
}

int main()
{
	while (a <= 20)
	{
		cout << a << endl;
		a++;
	}
	FirstGrid();
	return 0;
}