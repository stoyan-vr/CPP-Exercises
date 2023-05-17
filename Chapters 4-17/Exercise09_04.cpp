#include <iostream>
#include "MyPoint.h"
using namespace std;

int main()
{
	MyPoint p1;
	MyPoint p2(10, 30.5);
	cout << p1.distance(p2);
	
	return 0;
}