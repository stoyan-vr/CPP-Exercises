#include <iostream>
using namespace std;

int main() 
{
	// Prompt the user to enter a value
	cout << "Enter a degree in Celsius: ";
	double celsius;
	cin >> celsius;
	
	// Compute value in fahrenheit
	double fahrenheit = (9.0 / 5) * celsius + 32;
	
	// Display results
	cout << celsius << " Celsius is " << fahrenheit <<
	  " Fahrenheit" << endl;
	
	return 0;
}