#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter three points for a triangle: ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	double side1 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	double side2 = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), 0.5);
	double side3 = pow(pow(x1 - x3, 2) + pow(y1 - y3, 2), 0.5);
	
	double s = (side1 + side2 + side3) / 2;
	double area = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);
	
	cout << "The area of the triangle is " << area << endl;
	
	return 0;
}