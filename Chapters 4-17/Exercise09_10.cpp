#include <iostream>
#include "LinearEquation.h"
using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3, x4, y4;

  cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  // Build a 2 by 2 linear equation
  double a = (y1 - y2);
  double b = (-x1 + x2);
  double c = (y3 - y4);
  double d = (-x3 + x4);
  double e = -y1 * (x1 - x2) + (y1 - y2) * x1;
  double f = -y3 * (x3 - x4) + (y3 - y4) * x3;

  LinearEquation equation(a, b, c, d, e, f);

  if (equation.isSolvable()) 
  {
    cout << "The intersecting point is: (" <<
      equation.getX() << ", " << equation.getY() << ")" << endl;
  }
  else 
  {
    cout << "The two lines do not cross " << endl;
  }

  return 0;
}