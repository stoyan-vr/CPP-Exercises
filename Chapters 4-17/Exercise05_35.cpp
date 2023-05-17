#include <iostream>
using namespace std;

int main()
{
	int fib0 = 0;
	int fib1 = 1;
	int fibN = 0;
	
	cout << "The first ten numbers in Fibonacci series: ";
	for (int i = 0; i < 10; i++) 
  {
		cout << fib0 << " ";
		fibN = fib0 + fib1;
		fib0 = fib1;
		fib1 = fibN;
	}
	
	return 0;
}