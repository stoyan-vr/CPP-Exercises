#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	while (true)		
	{
		cout << "\nMain menu\n" 
		     << "1: Addition\n" 
				 << "2: Subtraction\n" 
				 << "3: Multiplication\n" 
				 << "4: Division\n" 
				 << "5: exit\n"
				 << "Enter a choice: ";
		int choice;
    cin >> choice;
		int number1 = rand() % 10;
		int number2 = rand() % 10;
		int answer;
    switch (choice) 
		{
			case 1: cout << "What is " << number1 << " + " << number2 << "? ";
							cin >> answer;
							if (number1 + number2 == answer)
								cout << "Correct" << endl;
							else
								cout << "Your answer is wrong. The correct answer is " << (number1 + number2) << endl;
							break;
			case 2: 
			        if (number1 < number2)
							{
								int temp = number1;
								number1 = number2;
								number2 = number1;
							}
							cout << "What is " << number1 << " - " << number2 << "? ";
							cin >> answer;
							if (number1 - number2 == answer)
								cout << "Correct" << endl;
							else
								cout << "Your answer is wrong. The correct answer is " << (number1 - number2) << endl;
							break;
			case 3: cout << "What is " << number1 << " * " << number2 << "? ";
							cin >> answer;
							if (number1 * number2 == answer)
								cout << "Correct" << endl;
							else
								cout << "Your answer is wrong. The correct answer is " << (number1 * number2) << endl;
							break;
			case 4: while (number2 == 0)
				        number2 = rand() % 10;
			        cout << "What is " << number1 << " / " << number2 << "? ";
							cin >> answer;
			        if (number1 / number2 == answer)
								cout << "Correct" << endl;
							else
								cout << "Your answer is wrong. The correct answer is " << (number1 / number2) << endl;
							break;
			case 5: exit(0); break;
			default: cout << "Wrong input" << endl; continue;
		}
	}
}