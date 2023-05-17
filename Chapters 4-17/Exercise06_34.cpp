#include <iostream>
#include <ctime>
using namespace std;

// Function Prototypes
bool isLeapYear(int);
int getNumberOfDaysInMonth(int, int);
int getCurrentYear(int);
int getCurrentMonth(int, int);
int getCurrentDay(int, int, int);
int getNumberOfDaysInYear(int);
void printCurrentDateAndTime();
int getElapsedDaysInCurrentYear(int, int);
string getMonthName(int);

int main()
{
	printCurrentDateAndTime();
	
	return 0;
}

void printCurrentDateAndTime()
{
	int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = (totalHours % 24 + 2) % 24;
	int totalDays = totalHours / 24;
	
	int currentYear = getCurrentYear(totalDays);
	int currentMonth = getCurrentMonth(currentYear, totalDays);
	int currentDay = getCurrentDay(currentYear, currentMonth, totalDays);
	
	cout << "Current date and time is " << getMonthName(currentMonth) << " " << currentDay << ", "
	     << currentYear << " " << currentHour << ":" << currentMinute << ":" << currentSecond << endl;
}

int getCurrentYear(int totalDays)
{
	int year = 1970;
	while (totalDays > (isLeapYear(year) ? 366 : 365))
	{
		totalDays -= (isLeapYear(year) ? 366 : 365);
		year++;
	}
		
  return year;
}

int getCurrentMonth(int currentYear, int totalDays)
{
	int elapsedDaysInCurrentYear = getElapsedDaysInCurrentYear(currentYear, totalDays);
	int month = 1;
	while (elapsedDaysInCurrentYear >= getNumberOfDaysInMonth(currentYear, month))
	{
		elapsedDaysInCurrentYear -= getNumberOfDaysInMonth(currentYear, month);
		month++;
	}
	
	return month;
}

int getCurrentDay(int currentYear, int currentMonth, int totalDays)
{
	int count = 1;
	int days = 0;
	while (count < currentMonth)
		days += getNumberOfDaysInMonth(currentYear, count++);
	
	return getElapsedDaysInCurrentYear(currentYear, totalDays) - days + 1;
}

int getNumberOfDaysInMonth(int year, int month)
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else if (month == 2)
		return isLeapYear(year) ? 366 : 365;
	else
		return 31;
}

int getElapsedDaysInCurrentYear(int currentYear, int totalDays)
{
  int elapsedDaysInPreviousYears = (currentYear - 1970) * 365;
	int year = 1970;
	while (year < currentYear)
		if (isLeapYear(year++))
			elapsedDaysInPreviousYears++;
	
	return  totalDays - elapsedDaysInPreviousYears;
}

string getMonthName(int month)
{
	switch (month)
	{
		case 1: return "January";
		case 2: return "February";
		case 3: return "March";
		case 4: return "April";
		case 5: return "May";
		case 6: return "June";
		case 7: return "July";
		case 8: return "August";
		case 9: return "September";
		case 10: return "October";
		case 11: return "November";
		case 12: return "December";
	}
}

bool isLeapYear(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}