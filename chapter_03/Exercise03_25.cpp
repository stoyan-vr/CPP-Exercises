#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter r1's x-, y coordinates, width and height: ";
	double x1, y1, w1, h1;
	cin >> x1 >> y1 >> w1 >> h1;
	cout << "Enter r2's x-, y coordinates, width and height: ";
	double x2, y2, w2, h2;
	cin >> x2 >> y2 >> w2 >> h2;
	
	    
  double xDistance = x1 >= x2 ? x1 - x2 : x2 - x1;
  double yDistance = y1 >= y2 ? y1 - y2 : y2 - y1;
    
  if (xDistance <= (w1 - w2) / 2 && yDistance <= (h1 - h2) / 2)
    cout << "r2 is inside r1" << endl;
  else if (xDistance <= (w1 + w2) / 2 && yDistance <= (h1 + h2) / 2)
    cout << "r2 overlaps r1" << endl;
  else
    cout << "r2 does not overlap r1" << endl;
	
	return 0;
}