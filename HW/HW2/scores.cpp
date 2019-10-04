/*Alex Frania
CS-201
Date: 9/18/19
HW2: Score
Description: Program takes in inputs of name and scores from user until the user inputs the name "NoName" and a score of 0.
At this point an option screen is presented. For option 1 the user can continue to input new names and scores into the
existing list. For option 2 the user can print out all the names and scores from the list. For option 3 the user can
search the list by name and find the corresponding score for that name. Option 4 allows the user to search the list by score
and find the name or names that have that score.
*/
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;

bool SearchName(const std::string& nameToFind, const std::vector<std::string>& names, const std::vector<int> scores)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nameToFind)
		{
			cout << nameToFind << " has a score of " << scores[i] << ".\n";
			return true;
			break;
		}
	}
	cout << "Name not found.\n";
	return false;
}

bool SearchScore(const int& scoreToFind, const std::vector<std::string>& names, const std::vector<int> scores)
{
	bool NoScore = true;

	for (int i = 0; i < scores.size(); i++)
	{
		if (scores[i] == scoreToFind)
		{
			NoScore = false;
			cout << names[i] << "\n";
		}
	}
	while (NoScore == true)
	{
		cout << "No score found.\n";
		return false;
	}
	return true;
}

int scores()
{
	std::vector <std::string> names;
	std::vector <int> scores;

	std::string n;
	int s;
	bool flag = false;
	bool optionals = false;

	cout << "Enter in a name and then that person's score. Type in " << '"' << "NoName" << '"' << " and their score as " << '"'<< "0" << '"'<< " to stop.\n";

	while (optionals == false)
	{
		while (flag == false)
		{
			cout << "Name: ";
			cin >> n;

			if (n == "NoName")
			{
				for (int i = 0; i < names.size(); i++)
				{
					if (n == names[i])
					{
						cout << "\nERROR: This name has already been used. PROGRAM TERMINATED.\n";
						flag = true;
					}
				}
				if (flag == true)
				{
					break;
				}

				cout << "Score: ";
				cin >> s;

				if (s == 0)
				{
					cout << "\nLIST INPUT TERMINATED\n";
					flag = true;
				}
				if (flag == true)
				{
					break;
				}

				names.push_back(n);
				scores.push_back(s);
			}

			if (n != "NoName")
			{
				for (int i = 0; i < names.size(); i++)
				{
					if (n == names[i])
					{
						cout << "\nERROR: This name has already been used.\nLIST INPUT TERMINATED\n";
						flag = true;
					}
				}
				if (flag == true)
				{
					break;
				}

				cout << "Score: ";
				cin >> s;

				names.push_back(n);
				scores.push_back(s);
			}
		}
		int opt;

		cout << "\nPRESS 1 to add more names and scores.\nPRESS 2 to print the names and scores.\nPRESS 3 to search by name.\nPRESS 4 to search by score.\nOption: ";
		cin >> opt;

		if (opt == 1)
		{
			flag = false;
		}
		if (opt == 2)
		{
			cout << "\n";
			for (int i = 0; i < names.size(); i++)
			{
				std::cout << names[i] << " ";
				std::cout << scores[i];
				std::cout << "\n";
			}
		}
		if (opt == 3)
		{
			std::string nameToFind;

			cout << "\nSearch for name in list: ";
			cin >> nameToFind;
			SearchName(nameToFind, names, scores);
		}
		if (opt == 4)
		{
			int scoreToFind;
			cout << "\nSearch for name(s) with a score of: ";
			cin >> scoreToFind;
			SearchScore(scoreToFind, names, scores);
		}
	}
	return 0;
}