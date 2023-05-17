#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum1 = 0;
	for (int n = 1; n <= 50000; n++)
		sum1 += 1.0 / n;
	
	cout << "From left to right: " << fixed << setprecision(6) << sum1 << endl;
	
	double sum2 = 0;
	for (int n = 50000; n >= 1; n--)
		sum2 += 1.0 / n;
	
	cout << "From right to left: " << fixed << setprecision(6) << sum2 << endl;
	
	return 0;
}