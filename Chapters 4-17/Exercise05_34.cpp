#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int d1 = rand() % 10;
	int d2 = rand() % 10;
	int d3 = rand() % 10;
	
	while (d1 == d2 || d1 == d3 || d2 == d3) {
		d2 = rand() % 10;
		d3 = rand() % 10;
	}
	
	cout << "Enter your guess three digit number: ";
	int guess;
	cin >> guess;
	
	int guessDigit1 = guess / 100;
	int guessDigit2 = guess / 10 % 10;
	int guessDigit3 = guess % 10;
	
	int number = d1 * 100 + d2 * 10 + d3;
	
	cout << "The number is " << number << endl;
	
	if (number == guess)
		cout << "Match all digits" << endl;
	else if (d1 == guessDigit1 && d2 == guessDigit2 ||
	         d1 == guessDigit1 && d3 == guessDigit3 ||
					 d2 == guessDigit2 && d3 == guessDigit3)
		cout << "Match two digits" << endl;
	else if (d1 == guessDigit1 || d2 == guessDigit2 || d3 == guessDigit3)
		cout << "Match one digit" << endl;
	else
		cout <<  "No match" << endl;
	return 0;
}