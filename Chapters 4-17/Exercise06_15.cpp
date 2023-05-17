#include <iostream>
using namespace std;

int numberOfDaysInFebruary(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
}

int main()
{
	for (int year = 1983; year < 2020; year++)
		cout << "February " << year << " has "
    	<< numberOfDaysInFebruary(year) << " days." << endl;
			
	return 0;
}