#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter a point's x- and y-coordiantes: ";
	double x, y;
	cin >> x >> y;
	
  double y1 = y + -x * -0.5;
	
  if (y1 <= 100 && x > 0 && y > 0 && x <= 200 && y <= 100) 
    cout << "The point is in the triangle" << endl;
  else 
    cout << "The point is not in the triangle." << endl;
	
	return 0;
}