#include <iostream>
#include "Circle2D.h"
using namespace std;

int main()
{
	Circle2D c1(2, 2, 5.5);
  cout << "Area: " << c1.getArea() << endl;
  cout << "Perimeter: " << c1.getPerimeter() << endl;

  cout << c1.contains(3, 3) << endl;

  Circle2D c2(4, 5, 10.5);
  cout << c1.contains(c2) << endl;
  cout << c1.overlaps(c2) << endl;
	
	return 0;
}