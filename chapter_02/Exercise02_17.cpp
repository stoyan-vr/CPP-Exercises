#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter the temperature in Fahrenheit: ";
	double t;
	cin >> t;
	cout << "Enter the wind speed in miles per hour: ";
	double v;
	cin >> v;
	
	double twc = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) +
	  0.4275 * t * pow(v, 0.16);
		
	cout << "The wind chill index is " << twc << endl;
	
	return 0;
}