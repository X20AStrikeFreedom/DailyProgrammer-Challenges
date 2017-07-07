// Hello, coders!An important part of programming is being able to apply your programs, so your challenge for 
// today is to create a calculator application that has use in your life.It might be an interest calculator, or 
// it might be something that you can use in the classroom.For example, if you were in physics class, you might
// want to make a F = M * A calc.

// EXTRA CREDIT : make the calculator have multiple functions!Not only should it be able to calculate F = M * A, but also A = F / M, and M = F / A!

//Reddit - dailyprogrammers - Challenge #2(easy)
// https://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/

#include<iostream>

using namespace std;

int forceCalc(int mass, int accel)
{
	int force;
	return force = mass * accel;
}

int massCalc(int force, int accel)
{
	int mass;
	return mass = (force / accel);
}

int accelCalc(int force, int mass)
{
	int accel;
	return accel = (force / mass);
}


int main()
{
	int accel = 0;
	int force= 0;
	int mass = 0;
	int select = 0;
	cout << "Here is a simple calculator to calculate force, mass or acceleration" << endl;
	cout << "plase select which you wish to calculate: " << endl;
	cout << "1. Force." << endl;
	cout << "2. Mass." << endl;
	cout << "3. Acceleration." << endl;
	cin >> select;

	if (select == 1)
	{
		cout << "To calculate Force please enter the mass: ";
		cin >> mass;
		cout << " then the acceleration: ";
		cin >> accel;
		cout << "The force is: " << forceCalc(mass, accel) << endl;
	}
	if (select == 2)
	{
		cout << "To calculate Mass please enter the Force: ";
		cin >> force;
		cout << " then the Acceleration: ";
		cin >> accel;
		cout << "The Mass is: " << massCalc(force, accel) << endl;
	}

	if (select == 3)
	{
		cout << "To calculate Acceleration please enter the Force: ";
		cin >> force;
		cout << " then the Mass: ";
		cin >> mass;
		cout << "The Acceleration is: " << accelCalc(force, mass) << endl;
	}
	system("PAUSE");
	return 0;
}