#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	// Generate comptere number
	srand(time(0));
	int number = rand() % 3;
	
	// Prompt the user to enter a guess
	cout << "scisor (0), rock (1), paper (2): ";
	int guess;
	cin >> guess;
	
  if (number == 0) 
	{
		cout << "The computer is scisor. ";
		if (guess == 0)
			cout << "You are scisor too. It's a draw." << endl;
		else if (guess == 1)
			cout << "You are rock. You won." << endl;
		else if (guess = 2)
			cout << "You are paper. You lost." << endl;
	}
	else if (number == 1) 
	{
		cout << "The computer is rock. ";
		if (guess == 0)
			cout << "You are scisor. You lost." << endl;
		else if (guess == 1)
			cout << "You are rock too. It's a draw." << endl;
		else if (guess == 2)
			cout << "You are paper. You won." << endl;
	}
	else if (number == 2)
	{
		cout << "The computer is paper. ";
		if (guess == 0)
			cout << "You are scisor. You won." << endl;
		else if (guess == 1)
			cout << "You are rock. You lost." << endl;
		else if (guess == 2)
			cout << "You are paper too. It's a draw." << endl;
	}
	
	return 0;
}