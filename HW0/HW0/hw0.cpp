# include <iostream>
using namespace std;

string repeat(string m, int n)
{
	string m1 = m;

	for (int i = 1; i < n; i++)
		m += m1;
	return m;
}

int main()
{
	string m = "|Hello, World| ";
	int n = 5;
	cout << repeat(m, n) << endl;
	return 0;
}