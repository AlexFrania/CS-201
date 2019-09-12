#include <iostream>

//Alex Frania
//CS-201
//Lab 4

using std::cout;

int main()
{
	for (int a = 1; a <= 100; ++a)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			cout << "Fizz Buzz\n";
		}
		else if (a % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if (a % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else
		{
			cout << a << "\n";
		}
	}
	return 0;
}