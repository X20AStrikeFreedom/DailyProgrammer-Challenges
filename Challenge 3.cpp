//Welcome to cipher day!
//write a program that can encrypt texts with an alphabetical caesar cipher.This cipher can ignore numbers, symbols, and whitespace.
//for extra credit, add a "decrypt" function to your program!

// Reddit - dailprogrammer - Challenge #3 (easy)
// https://www.reddit.com/r/dailyprogrammer/comments/pkw2m/2112012_challenge_3_easy/


#include<iostream>
#include<string>

using namespace std;

string encrypt(string text, int key)
{
	char charArray[60];
	if (key > 26)
	{
		key = key % 26; 
	}

	string encrypt;

	for (int i = 0; i < text.length(); i++)
	{
		charArray[i] = text[i];

		if (charArray[i] > ('z' - key))
		{
			charArray[i] = (charArray[i] - 26) + key;
		}
		else
		{
			charArray[i] += key;
		}

		encrypt += charArray[i];
	}

	return encrypt;
}
//string decrypt(string text, int key)
//{
//	string decrypt;
//
//
//
//
//	return decrypt;
//}

int main()
{
	string input;
	int key;
	int choice = 0;
	while (choice != 2)
	{
		
		cout << "This program uses the caesar cipher in order to encrypt text." << endl;
		cout << endl;
		cout << "1. To encrypt text." << endl;
		//cout << "2. To decrypt text." << endl; TODO 
		cout << "2. Exit." << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Please enter a series of lower case letters, with no special characters or spaces, to be encrypted." << endl;
			cin >> input;
			cout << "now please enter a number to encode the text." << endl;
			cin >> key;
			cout << "The text you entered is: " << input << endl;
			cout << "The text after cipher implementation: " << encrypt(input, key) << endl;
			cout << endl;
			cout << endl;
			system("PAUSE");
			system("CLS");
			
		}

	}
	
	cout << endl;
	
	return 0;
}