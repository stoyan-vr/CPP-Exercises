#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a day number of a week and the hours passed: ";
	int day, hoursPassed;
	cin >> day >> hoursPassed;
	
	cout << "Today is ";
	
	switch (day) 
	{
		case 1: cout << "Sunday"; break;
		case 2: cout << "Monday"; break;
		case 3: cout << "Tuesday"; break;
		case 4: cout << "Wednesday"; break;
		case 5: cout << "Thursday"; break;
		case 6: cout << "Friday"; break;
		case 7: cout << "Saturday"; break;
	}
	
	cout << endl << "Remaining hours " << (24 - hoursPassed) << endl;
	
	return 0;
}