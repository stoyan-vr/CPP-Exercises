#include <iostream>
#include "StackOfIntegers.h"

using namespace std;

int main()
{
	StackOfIntegers stack;
	
	for (int i = 0; i < 10; i++)
		stack.push(i + 1);
	
	stack[5] = 20;
	cout << stack[2];
	
	return 0;
}