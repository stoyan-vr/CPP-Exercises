#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter a three digit number
	cout << "Enter a three digit number: ";
	int number;
	cin >> number;
	
	if (number >= 100 && number < 1000) {
		int sum = number / 100 + number / 10 % 10 + number % 10;
		cout << "The sum of three integers is " << sum << endl;
	}
	else
		cout << "Invalid input" << endl;
  
	return 0;
}