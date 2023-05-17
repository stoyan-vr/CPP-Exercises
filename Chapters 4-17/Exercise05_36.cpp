#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int count = 0;
	
	int userWin = 0;
	int computerWin = 0;
	
	while (count++ < 10) {
		srand(time(0));
		int number = rand() % 3;
		cout << "scissor (0), rock (1), paper (2): ";
		int guess;
		cin >> guess;
		
		if (number == 0)
		{
		  cout << "The computer is scisor. ";
		  if (guess == 0) 
			  cout << "You are scisor too. It's a draw." << endl;
		  else if (guess == 1) {
			  cout << "You are rock. You won." << endl;
				userWin++;
			}
		  else if (guess = 2) {
			  cout << "You are paper. You lost." << endl;
				computerWin++;
			}
	  }
	  else if (number == 1) 
		{
		  cout << "The computer is rock. ";
		  if (guess == 0) {
		  	cout << "You are scisor. You lost." << endl;
			  computerWin++;
		  }
		  else if (guess == 1)
		  	cout << "You are rock too. It's a draw." << endl;
		  else if (guess == 2) {
			  cout << "You are paper. You won." << endl;
				userWin++;
			}
	  }
	  else if (number == 2) 
		{
	  	cout << "The computer is paper. ";
		  if (guess == 0) {
		  	cout << "You are scisor. You won." << endl;
				userWin++;
			}
		  else if (guess == 1) {
		  	cout << "You are rock. You lost." << endl;
				computerWin++;
			}
		  else if (guess == 2)
			  cout << "You are paper too. It's a draw." << endl;
	  }
	}
		
	cout << "Computer wins: " << computerWin << endl;
	cout << "User wins: " << userWin << endl;
	cout << "Draws: " << (10 - computerWin - userWin) << endl;
		
	return 0;
}	