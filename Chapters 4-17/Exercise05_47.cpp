#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter ten numbers: ";
	double sum1 = 0;
	double sum2 = 0;
	for (int i = 0; i < 10; i++) 
	{
		double number;
	  cin >> number;
		sum1 += number;
		sum2 += number * number;
	}
	
	double mean = sum1 / 10;
	double deviation = sqrt((sum2 - sum1 * sum1 / 10) / 9);
	
	cout << "The mean is " << mean << endl;
	cout << "The standard deviation is " << deviation << endl;
	
	return 0;
}