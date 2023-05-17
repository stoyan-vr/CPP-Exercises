#include <iostream>
#include "GeometricObject.h"
#include "Triangle.h"

using namespace std;

int main()
{
	cout << "Enter three sides: ";
	double a, b, c;
	cin >> a >> b >> c;
	
	cout << "Enter a color: ";
	string s;	
	cin >> s;
	
	cout << "Enter filled (0 or 1): ";
	int filled;
	cin >> filled;
	
	Triangle t(a, b, c);
	t.setColor(s);
	t.setFilled(filled);
	
	cout << "Triangle info:\n"
	  << "color: " << t.getColor() 
		<< " filled: " << (t.isFilled() ? "true " : "false ")
		<< " area: " << t.getArea() 
		<< " perimeter: " << t.getPerimeter() << endl;
	return 0;
}