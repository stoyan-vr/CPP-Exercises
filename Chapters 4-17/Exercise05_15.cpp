#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 1;
	while (pow(3, n) < 30000)
		n++;
	
	cout << "The number is " << n << endl;
	
	return 0;
}