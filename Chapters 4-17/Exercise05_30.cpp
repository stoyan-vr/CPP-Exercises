#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter a month (1-12): ";
	int month;
	cin >> month;
	
  int numberOfDaysInMonth;
	if (month == 2)
		numberOfDaysInMonth = 29;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		numberOfDaysInMonth = 30;
	else
		numberOfDaysInMonth = 31;
	
	cout << "Enter the first day of a month (0-6): ";
	int firstDay;
	cin >> firstDay;
	
	string dayOfWeek;
	switch (firstDay) 
	{
		case 0: dayOfWeek = "Sunday"; break;
		case 1: dayOfWeek = "Monday"; break;
		case 2: dayOfWeek = "Tuesday"; break;
		case 3: dayOfWeek = "Wednesday"; break;
		case 4: dayOfWeek = "Thursday"; break;
		case 5: dayOfWeek = "Friday"; break;
		case 6: dayOfWeek = "Sunday"; break;
		default: cout << "Invalid input" << endl;
		         exit(1); 
	}
   
  cout << "The first day of this month is " << dayOfWeek << endl;
  for (int i = 1; i <= numberOfDaysInMonth; i++)
		if ((firstDay + i - 1) % 7 == 0)
			cout << "Next Sunday of this month is on " << i << endl;
		
  return 0;
}