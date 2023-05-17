#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  cout << "Enter point 1 (latitude and longitude) in degrees: ";
	double x1, y1;
	cin >> x1 >> y1;
  cout << "Enter point 1 (latitude and longitude) in degrees: ";
	double x2, y2;
	cin >> x2 >> y2;
	
	x1 = x1 / 180 * 3.14159;
	y1 = y1 / 180 * 3.14159;
	x2 = x2 / 180 * 3.14159;
	y2 = y2 / 180 * 3.14159;
	
	double d = 6371.01 * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
	
	cout << "The distance between the two points is " << d << endl;
	
	return 0;
}