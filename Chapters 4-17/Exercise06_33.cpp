#include <iostream>
using namespace std;

void solveQuadraticEquation(double a, double b, double c, double d,
     double e, double f, double& x, double& y, bool& isSolvable)
{		 
	isSolvable = a * d - b * c != 0;
	if (isSolvable) 
	{
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);
	}
}

int main()
{
	cout << "Enter a, b, c, d, e, f: ";
	double a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	
	bool isSolvable;
	
	solveQuadraticEquation(a, b, c, d, e, f, x, y, isSolvable);
	
	if (isSolvable)
		cout << "x is " << x << " and y is " << y << endl;
	else
		cout << "The equation has no solution";
	
	return 0;
}