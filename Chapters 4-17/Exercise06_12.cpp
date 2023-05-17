#include <iostream>
using namespace std;

double f(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1.0 / (i * (i + 2));
	
	return sum;
}

int main()
{
	cout << "n\t\tf(n)" << endl;
	for (int i = 1; i <= 7; i++)
		cout << i * 2 << "\t\t" << f(i * 2) << endl;
	
	return 0;
}