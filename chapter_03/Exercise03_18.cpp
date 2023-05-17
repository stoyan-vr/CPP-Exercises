#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand ans srand functions
using namespace std;

int main()
{
	// 1. Generate four random numbers less than 5
	srand(time(0));
	int number1 = rand() % 5;
	int number2 = rand() % 5;	
	int number3 = rand() % 5;	
	int number4 = rand() % 5;	
	
	// 3. Prompt the student to answer 
	cout << "What is " << number1 << " * " << number2 << 
	  " * " << number3 << " * " << number4 << "? ";
	int answer;
	cin >> answer;
	
	// 4. Grade the answer and display the result
	if (number1 * number2 * number3 * number4 == answer)
		cout << "You are correct!";
	else
		cout << "Your answer is wrong. " << endl << number1 << " * " << number2
	    << " * " << number3 << " * " << number4 << " should be " 
			<< (number1 * number2 * number3 * number4) << endl;
			
	return 0;
}