#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum = 0;
	for (int i = 99; i >= 9; i -= 6) 
		sum += 1.0 / (pow(i, 1.0 / 3) - pow(i - 6, 1.0 / 3));
	
	cout << "The sum of the series is " << sum << endl;
	
	return 0;
}