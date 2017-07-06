// create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:
// your name is(blank), you are(blank) years old, and your username is(blank)
// for extra credit, have the program log this information in a file to be accessed later.

// Reddit - dailyprogrammer - Challenge #1(easy)
// https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string name;
	int age;
	string redditUser;
	string sentence;

	cout << "What is your name? ";
	cin >> name;
	cout << "What is your age? ";
	cin >> age;
	cout << "What is your reddit Username? ";
	cin >> redditUser;
	string sAge = to_string(age);
	sentence =  "your name is " + name +", you are " + sAge + " years old, and your username is " + redditUser + ".";
	cout << sentence;


	ofstream file_writer("test.txt"); // 
	file_writer << sentence;		  // This section is the code for the extra credit.
	
	
	system("PAUSE");
	return 0;
}