#include <iostream>
#include <iomanip>
using namespace std;

// Convert from pounds to ounces
double poundsToOunces(double pounds)
{
	return pounds * 16;
}
// Convert from ounces to pounds
double ouncesToPounds(double ounces)
{
	return ounces * 0.0625;
}

int main()
{
	cout << left << setw(10) << "Pounds" << setw(10) << "Ounces" << "|\t" <<
	  setw(10) << "Ounces" << setw(10) << "Pounds" << endl;
	cout << "--------------------------------------------" << endl;
	for (int i = 1; i <= 10; i++)
		cout << left << setw(10) << (10 + i) << setw(10) << 
	    poundsToOunces(10 + i) << "|\t" << setw(10) << i << fixed << 
		  setprecision(4) << ouncesToPounds(i) <<  setprecision(0) << endl;
		
	return 0;
}