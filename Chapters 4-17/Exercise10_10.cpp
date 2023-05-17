#include <iostream>
#include "MyInteger.h"
#include <string>
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	
	MyInteger myInteger(n);
	
	cout << "Is Even: " << myInteger.isEven() << endl;
	cout << "Is Prime: " << myInteger.isPrime();
	
	return 0;
}