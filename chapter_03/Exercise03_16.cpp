#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Enter three edges: ";
  double edge1, edge2, edge3;
  cin >> edge1 >> edge2 >> edge3;

  bool isValid = edge1 == edge2 && edge1 == edge3;
  // Display results
  if (!isValid)
    cout << "The input is invalid" << endl;
  else
  {
		double area = pow(3, 0.5) / 4 * edge1 * edge1;
		cout << "The area is " << area << endl;
  }

  return 0;
}
