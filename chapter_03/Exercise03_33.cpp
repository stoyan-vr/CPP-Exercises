#include <iostream>
using namespace std;

int main()
{
	cout << "Enter year (e.g 2012): ";
	int year;
	cin >> year;
	cout << "Enter month 1-12: ";
	int month;
	cin >> month;
	cout << "Enter the day of the month 1-31: ";
	int dayOfMonth;
	cin >> dayOfMonth;
	
	if (month == 1 || month == 2) {
		month += 12;
		year--;
	}
	
	int k = year % 100;
	int j = year / 100;
	
	int dayOfWeek = (dayOfMonth + 26 * (month + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
	
	cout << "Day of the week is ";
	switch (dayOfWeek) 
	{
		case 1: cout << "Sunday" << endl; break;
		case 2: cout << "Monday" << endl; break;
		case 3: cout << "Tuesday" << endl; break;
		case 4: cout << "Wednesday" << endl; break;
		case 5: cout << "Thursday" << endl; break;
		case 6: cout << "Friday" << endl; break;
		case 0: cout << "Saturday" << endl; break;
	}
	
	return 0;
}