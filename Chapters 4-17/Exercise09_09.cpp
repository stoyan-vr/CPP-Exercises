#include <iostream>
#include "LinearEquation.h"
using namespace std;

int main()
{
	cout << "Enter a, b, c, d, e, f: ";
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	LinearEquation equation(a, b, c, d, e, f);
	
	if (equation.isSolvable())
		cout << "x is " << equation.getX() << " and y is " << equation.getY() << endl;
	else 
		cout << "The equation has no solution" << endl;
	
	return 0;
}