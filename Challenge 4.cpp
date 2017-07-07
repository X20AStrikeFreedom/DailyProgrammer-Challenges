//  You're challenge for today is to create a random password generator!
// For extra credit, allow the user to specify the amount of passwords to generate.
// For even more extra credit, allow the user to specify the length of the strings he wants to generate!

// Reddit - dailyprogrammer - Challenge #4(easy)
// https://www.reddit.com/r/dailyprogrammer/comments/pm6oj/2122012_challenge_4_easy/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;
string password(int letters)
{
	string password;

	int random_integer;
	char a;
	int lowest = 65, highest = 122;
	int range = (highest - lowest) + 1;
	for (int index = 0; index<letters; index++)
	{
		random_integer = lowest + int(range*rand() / (RAND_MAX + 1.0));
		a = random_integer;
		password += a;
	}

	return password;
}

int main()
{
	srand((unsigned)time(0));
	int choice = 0;
	int letters = 0;
	int number = 0;

	while( choice != 3)
	{ 
		cout << "Please select from the options below:" << endl;
		cout << "1. Generate 1 random password." << endl;
		cout << "2. Generate multiple passwords." << endl;
		cout << "3. Exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Please enter the amount of letters you wish the password to have: ";
			cin >> letters;
			cout << password(letters) << endl;
			
		}
		if (choice == 2)
		{
			cout << "Please enter how many passwords you wish to generate: ";
			cin >> number;
			cout << "Please enter how many letters you wish the passwords to have: ";
			cin >> letters;
			for (int i = 0; i < number;i++)
			{
				cout << password(letters) << endl;
			}
			
		}
	}

	
	system("PAUSE");
	return 0;
}