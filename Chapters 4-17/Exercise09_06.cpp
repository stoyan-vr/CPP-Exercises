#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
  cout << "Enter a, b, c: ";
  double a, b, c, discriminant, r1, r2;
  cin >> a >> b >> c;

  QuadraticEquation equation(a, b, c);
  discriminant = equation.getDiscriminant();

  if (discriminant < 0)
  {
    cout << "The equation has no roots" << endl;
  }
  else if (discriminant == 0)
  {
    cout << "The root is " << equation.getRoot1() << endl;
  }
  else // (discriminant >= 0)
  {
     cout << "The roots are " << equation.getRoot1() << " and "
       << equation.getRoot2() << endl;
  }

  return 0;
}