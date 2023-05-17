#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include "RationalWithOperators.h"

using namespace std;

int main()
{
	cout << "Enter a decimal number: ";
	string s;
	cin >> s;
	
	int pos = s.find('.');
	int numerator;
	int denominator;
	if (pos != -1)
	{
		string temp = s.substr(0, pos) + s.substr(pos + 1);
		numerator = atoi(temp.c_str());
		denominator = pow(10, s.length() - 1 - pos);
	}
	else
	{
		numerator = atoi(s.c_str());
		denominator = 1;
	}
	
	Rational r(numerator, denominator);
	
	cout << "The fraction number is " << r << endl;
	
	cout << numerator << " " << denominator << endl;
	
	return 0;
}