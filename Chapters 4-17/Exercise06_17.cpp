#include <iostream>
using namespace std;

// Returns true if all the sides of the triangle
// are same.
bool isValid(double side1, double side2, double side3) 
{
	return side1 == side2 && side1 == side3;
}
// Returns the perimeter of an equilateral triangle.
double perimeter(double side1)
{
	return 3 * side1;
}

int main()
{
	cout << "Enter three sides: ";
	double s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	
	if (isValid(s1, s2, s3))
		cout << "The perimeter is " << perimeter(s1) << endl;
	else
		cout << "Invalid input" << endl;
	
	return 0;
}