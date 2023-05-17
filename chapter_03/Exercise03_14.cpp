#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  srand(time(0));
	
	int number = rand() % 100;
	
	cout << "Enter a two digit number: ";
	int guess;
	cin >> guess;
	
	cout << "The generated number is " << number << endl;
	
	if (guess == number)
		cout << "Accuracy is 100%" << endl;
	else if (number / 10 == guess / 10 || number % 10 == guess % 10)
		cout << "Accuracy is 50%" << endl;
	else
		cout << "Accuracy is 0%" << endl;
	
	return 0;
}