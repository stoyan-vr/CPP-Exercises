#include <iostream>
using namespace std;

int main()
{
	cout << "Enter today's day: ";
	int day;
	cin >> day;
	cout << "Enter the number of days elapsed since today: ";
	int n;
	cin >> n;
	
	int futureDay = (day + n) % 7;
	
	cout << "Today is ";
	if (day == 0)
		cout << "Sunday";
	else if (day == 1)
		cout << "Monday";
	else if (day == 2)
		cout << "Tuesday";
	else if (day == 3)
		cout << "Wednesday";
	else if (day == 4)
		cout << "Thursday";
	else if (day == 5)
		cout << "Friday";
	else
		cout << "Saturday";
	
	cout << " and the future day is ";
	
	if (futureDay == 0)
		cout << "Sunday" << endl;
	else if (futureDay == 1)
		cout << "Monday" << endl;
	else if (futureDay == 2)
		cout << "Tuesday" << endl;
	else if (futureDay == 3)
		cout << "Wednesday" << endl;
	else if (futureDay == 4)
		cout << "Thursday" << endl;
	else if (futureDay == 5)
		cout << "Friday" << endl;
	else
		cout << "Saturday" << endl;
	
	return 0;
}