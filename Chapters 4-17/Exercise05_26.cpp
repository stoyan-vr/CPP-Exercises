#include <iostream>
using namespace std;

int main()
{
	double product = 1;
	for (int n = 5; n <= 97; n += 4)
		product *= 1.0 / n;
	
	cout << "The product of the series is " << product << endl;
	
	return 0;
}