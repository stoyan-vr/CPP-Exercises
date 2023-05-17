#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	
	cout << "The first ten multiples in reverse order of " << n << endl;
	
	StackOfIntegers stack;
	
	for (int i = 1; i <= 10; i++)
		stack.push(i * n);
	
	while (!stack.isEmpty())
		cout << stack.pop() << " ";
	
	return 0;
}