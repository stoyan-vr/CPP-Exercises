#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double sum = 0;
	for (int i = 1; i <= 600; i++) 
	{
		sum += 1.0 / pow(i, 2);
		if (i % 100 == 0)
			cout << "The value of pi is " << sqrt(6 * sum) << 
		    " for n = " << showpoint << i << endl;
	}
	
	return 0;
}