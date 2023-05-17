#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
	RegularPolygon p1;
	RegularPolygon p2(6, 4);
	RegularPolygon p3(10, 4, 5.6, 7.8);
	
	cout << "Polygon1 perimeter " << p1.getPerimeter() << ", area " << p1.getArea() << endl;
	cout << "Polygon2 perimeter " << p2.getPerimeter() << ", area " << p2.getArea() << endl;
	cout << "Polygon3 perimeter " << p3.getPerimeter() << ", area " << p3.getArea() << endl;
	
	return 0;
}