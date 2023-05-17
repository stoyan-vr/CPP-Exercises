#include <iostream>
#include <cmath>
using namespace std;

double f(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1.0 / (i * i);
	
	return sqrt(6 * sum);
}

int main()
{
	cout << "n\t\tf(n)" << endl;
	for (int i = 1; i <= 10; i++)
		cout << i * 2 << "\t\t" << f(i * 2) << endl;
	
	return 0;
}