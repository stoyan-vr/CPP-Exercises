#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand ans srand functions
using namespace std;

int main()
{
	// 1. Generate two random integer less than 50
	srand(time(0));
	int number1 = rand() % 50;
	int number2 = rand() % 50;	
	
	// 3. Prompt the student to answer "what is number * number2?
	cout << "What is " << number1 << " * " << number2 << "? ";
	int answer;
	cin >> answer;
	
	// 4. Grade the answer and display the result
	if (number1 * number2 == answer)
		cout << "You are correct!";
	else
		cout << "Your answer is wrong. " << endl << number1 << " * " << number2
	    << " should be " << (number1 * number2) << endl;
			
	return 0;
}