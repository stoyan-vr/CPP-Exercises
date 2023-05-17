#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time time1;
	cout << time1.getHour() << ":" << time1.getMinute() 
	  << ":" << time1.getSecond() << endl;
		
	Time time2(555550);
	cout << time2.getHour() << ":" << time2.getMinute() 
	  << ":" << time2.getSecond() << endl;
		
	return 0;
}