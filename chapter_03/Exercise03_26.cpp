#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter circle1's center x-, y-coordiantes, and radius: ";
	double x1, y1, r1;
	cin >> x1 >> y1 >> r1;
	
	cout << "Enter circle2's center x-, y-coordiantes, and radius: ";
	double x2, y2, r2;
	cin >> x2 >> y2 >> r2;
	
	double distance = pow((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1), 0.5);
	
	if (distance <= r1 - r2)
		cout << "circle2 is inside circle1" << endl;
	else if (distance <= r1 + r2)
		cout << "circle2 overlaps circle1" << endl;
	else
		cout << "circle2 does not over overlap circle1" << endl;
	
	return 0;
}