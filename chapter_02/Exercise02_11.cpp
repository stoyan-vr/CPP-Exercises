#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter the number of years: ";
	double numberOfYears;
	cin >> numberOfYears;
	
	int futurePopulation = 312032486 + 
	  numberOfYears * (365 * 24 * 60 * 60 / 7 - 365 * 24 * 60 * 60 / 13 + 365 * 24 * 60 * 60 / 45);
		
	cout << "The population in " << numberOfYears << " years is " << futurePopulation << endl;
	
	return 0;
}