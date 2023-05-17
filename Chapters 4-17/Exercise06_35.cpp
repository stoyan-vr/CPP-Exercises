#include <iostream>
using namespace std;

void intersectingPoint(double x1, double y1, double x2, double y2, double x3, 
  double y3, double x4, double y4, double& x, double& y, bool& isIntersecting)
{
	double a = (y1 - y2);
  double b = -(x1 - x2);
  double c = (y3 - y4);
  double d = -(x3 - x4);
  double e = (y1 - y2) * x1 - (x1 -x2) * y1;
  double f = (y3 - y4) * x3 - (x3 -x4) * y3;
	
	const double DBL_EPSILON = 0.1e-15;
	double detA = a * d - b * c;
	isIntersecting = detA > DBL_EPSILON;
	
	if (isIntersecting) 
	{
		x = (e * d - b * f) / detA;
	  y = (a * f - e * c) / detA;
	}
}
int main()
{
	cout << "Enter the endpoints of the first line segment: ";
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	cout << "Enter the endpoints of the second line segment: ";
	double x3, y3, x4, y4;
	cin >> x3 >> y3 >> x4 >> y4;
	
	double x, y;
	bool isIntersecting;
	
	intersectingPoint(x1, y1, x2, y2, x3, y3, x4, y4, x, y, isIntersecting);
	
	if (isIntersecting)
		cout << "The intersecting point is (" << x << ", " << y << ")" << endl;
	else
		cout << "The two lines do not cross" << endl;
	
	return 0;
}