# include <iostream>
using namespace std;

string repeat(string m, int n)
{
	string m1 = m;

	for (int i = 1; i < n; i++)
		m += m1;
	return m;
}

void poem()
{
	cout << "" << endl;
	cout << "O God! Can I not grasp" << endl;
	cout << "Them with a tighter clasp?" << endl;
	cout << "O God! Can I not save" << endl;
	cout << "One from the pitiless wave?" << endl;
	cout << "Is all that we see or seem" << endl;
	cout << "But a dream within a dream?" << endl;
	cout << "" << endl;
}

void gameDescript()
{
	cout << "Resident Evil 2 is a survival horror game developed and published by Capcom." << endl;
	cout << "Players control police officer Leon S. Kennedy and college student Claire Redfield" << endl;
	cout << "as they attempt to escape from Raccoon City during a zombie apocalypse." << endl;
}

int main()
{
	string m = "|Hello, World| ";
	int n = 5;
	cout << repeat(m, n) << endl;
	poem();
	gameDescript();
	return 0;
}