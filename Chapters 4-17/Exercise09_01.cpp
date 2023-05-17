#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1;
	r1.setWidth(4);
	r1.setHeight(40);
	cout << "Rectangle1\n";
	cout << "Width: " << r1.getWidth() << endl;
	cout << "Height: " << r1.getHeight() << endl;
	cout << "Perimeter: " << r1.getPerimeter() << endl;
	cout << "Area: " << r1.getArea() << endl;
	cout << endl;
	
	Rectangle r2;
	r2.setWidth(3.5);
	r2.setHeight(35.9);
	cout << "Rectangle2\n";
	cout << "Width: " << r2.getWidth() << endl;
	cout << "Height: " << r2.getHeight() << endl;
	cout << "Perimeter: " << r2.getPerimeter() << endl;
	cout << "Area: " << r2.getArea() << endl;
	
	return 0;
}