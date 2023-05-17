#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter a point with two coordinates: ";
	double x, y;
	cin >> x >> y;
	
	double distance = pow(x * x + y * y, 0.5);
	
	cout << "Point (" << x << ", " << y << ") is " << (distance <= 10 ? "" : "not ")
	  << "in the circle" << endl;
		
	return 0;
}