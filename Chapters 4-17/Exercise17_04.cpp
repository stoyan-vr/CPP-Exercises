#include <iostream>

using namespace std;

double f(int);

int main()
{
	int n = 15;
	
	for (int i = 1; i <= 15; i++)
		cout << "n = " << i << " f(n) = " << f(i) << endl;
	
	return 0;
}

double f(int n) {
	if (n == 1)
		return 1;
	else
		return f(n - 1) + 1.0 / (n * n);
}