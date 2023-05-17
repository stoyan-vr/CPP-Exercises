#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;

int main()
{
	Circle c1(2.5);
	Circle c2(5);
	
	if (c1 > c2)
		cout << "c1 radius " << c1.getRadius() << " c2 radius " << c2.getRadius() << endl;
	else
		cout << "c2 radius " << c2.getRadius() << " c1 radius " << c1.getRadius() << endl;
	
	return 0;
}