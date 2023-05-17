#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << left << setw(12) << "Number" << "Exponent\n";
	for (int i = 0; i <= 10; i++)
		cout << setw(12) << i << setprecision(6) << showpoint << exp(i) << "\n";
	
	return 0;
}