#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of minutes: ";
	int totalMinutes;
	cin >> totalMinutes;
	
	int numberOfYears = totalMinutes / 60 / 24 / 365;
	int numberOfDays = totalMinutes % (365 * 24 * 60) / 60 / 24;
	
	cout << totalMinutes << " minutes is approximately " <<
	  numberOfYears << " years and " << numberOfDays << " days" << endl;
	
	return 0;
}