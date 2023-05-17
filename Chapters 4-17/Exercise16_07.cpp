#include <iostream>
#include <stdexcept>
#include "Rational.h"
#include "IllegalSubscriptException.h"

using namespace std;

int main()
{
	Rational r(12, 3);
	cout << "Enter an index: ";
	int index;
	cin >> index;
	
	try 
	{
		cout << r[index] << endl;
	}
	
	catch (IllegalSubscriptException ex)
	{
		cout << ex.what() << " " << ex.getValue() << endl;
	}
	
	cout << "Execution continues.. " << endl;
	
	return 0;
}