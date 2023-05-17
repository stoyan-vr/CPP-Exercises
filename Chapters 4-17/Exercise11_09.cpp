#include <iostream>
#include "Rectangle2D.h"

using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	
	cout << "Area " << r1.getArea() << " Perimeter " << r1.getPerimeter() << endl;
	cout << "Contains (3, 3) " << (r1.contains(3, 3) ? " Yes" : " No") << endl;
	cout << "Contains(r(4, 5, 10.5, 3.2) " << (r1.contains(r2) ? " Yes" : " No") << endl;
	cout << "Overlaps(r(3, 5, 2.3, 5.4) " << (r1.overlaps(r3) ? " Yes" : " No") << endl;
	
	return 0;
}