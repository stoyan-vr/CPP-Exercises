#include <iostream>
#include <iomanip>
using namespace std;

// Convert from millimeters to inches
double millimetersToInches(double millimeters)
{
	return millimeters * 0.0393701;
}

// Convert from inches to millimeters
double inchesToMillimeters(double inches)
{
	return inches * 25.4;
}

int main()
{
	cout << "Millimeters\tInches\t\t|\tInches\tMillimeters" << endl;
	cout << "-------------------------------------------------------" << endl;
	for (int i = 1; i <= 50; i++)
		cout << i * 2 << "\t\t" << fixed << setprecision(3) << millimetersToInches(i * 2) << "\t"
	       << "\t|\t" << i << "\t" << inchesToMillimeters(i) << endl;
				 
	return 0;
}