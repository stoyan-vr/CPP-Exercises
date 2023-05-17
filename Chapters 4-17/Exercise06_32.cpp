#include <iostream>
#include <cmath>
using namespace std;

solveQuadraticEquation(double a, double b, double c, 
  double& discriminant, double& r1, double& r2)
{
	discriminant = b * b - 4 * a * c;
	if (discriminant >= 0) {
	  r1 = (-b + sqrt(discriminant)) / (2 * a);
	  r2 = (-b - sqrt(discriminant)) / (2 * a);
	}
}

int main()
{
	cout << "Enter a, b, and c: ";
	double a, b, c;
	cin >> a >> b >> c;
	
	double discriminant = 0, r1 = 0, r2 = 0;
	
	solveQuadraticEquation(a, b, c, discriminant, r1, r2);
	
	if (discriminant > 0)
		cout << "The roots are " << r1 << " and " << r2 << endl;
	else if (discriminant == 0)
		cout << "The root is " << r1 << endl;
	else
		cout << "The equation has no real roots" << endl;
	
	return 0;
}