#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter a, b, c: ";
	double a, b, c;
	cin >> a >> b >> c;
	
	double d = b * b - 4 * a * c;
	
	if (d > 0) {
		double r1 = (-b + pow(d, 0.5)) / (2 * a);
		double r2 = (-b - pow(d, 0.5)) / (2 * a);
		cout << "The roots are " << r1 << " and " << r2 << endl;
	}
	else if (d == 0) {
		double r = - b / (2 * a);
		cout << "The root is " << r << endl;
	}
	else
		cout << "The equation has no real roots" << endl;
	
	return 0;
}