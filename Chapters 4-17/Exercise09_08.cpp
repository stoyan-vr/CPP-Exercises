#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
  Date date1;
	cout << date1.getDay() << "/" << date1.getMonth() << "/" << date1.getYear() << endl;
	Date date2(555550);
	cout << date2.getDay() << "/" << date2.getMonth() << "/" << date2.getYear() << endl;
	return 0;
}