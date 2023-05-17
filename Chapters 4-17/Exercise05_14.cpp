#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 1;
	while (pow(2, n) < 30000)
		n++;
	
	cout << "The number is " << (n - 1) << endl;
	
	return 0;
}