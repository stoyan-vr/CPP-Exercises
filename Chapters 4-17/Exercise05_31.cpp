#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Enter a year: ";
	int year;
	cin >> year;
	cout << "Enter the first day: ";
	int firstDay;
	cin >> firstDay;
	
	for (int month = 1; month <= 12; month++) {
		int n = 0;
		switch (month) {
			case 1: cout << "\tJanuary " << year << endl; n = 31; break;
			case 2: cout << "\tFebruary " << year << endl; 
        n = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;	break;
			case 3: cout << "\tMarch " << year << endl; n = 31; break;
			case 4: cout << "\tApril " << year << endl; n = 30; break;
			case 5: cout << "\tMay " << year << endl; n = 31; break;
			case 6: cout << "\tJune " << year << endl; n = 30; break;
			case 7: cout << "\tJuly " << year << endl; n = 31; break;
			case 8: cout << "\tAugust " << year << endl; n = 31; break;
			case 9: cout << "\tSeptember " << year << endl; n = 30; break;
			case 10: cout << "\tOctober " << year << endl; n = 31; break;
			case 11: cout << "\tNovember " << year << endl; n = 30; break;
			case 12: cout << "\tDecember " << year << endl; n = 31; break;
		}
		cout << "-----------------------------------" << endl;
		cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
		for (int i = 0; i < firstDay; i++)
			cout << "     ";
		for (int i = 1; i <= n; i++)
			cout << setw(5) << i << ((i + firstDay) % 7 == 0 ? "\n" : "");
		cout << endl;
		firstDay = (firstDay + n) % 7;
	}
}