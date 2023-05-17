#include <iostream>
using namespace std;

int main()
{
	cout << "Enter three edges for a triangle: ";
	int value1, value2, value3;
	cin >> value1 >> value2 >> value3;
	
	if (value1 == value2 && value1 == value3)
		cout << "Equilateral Triangle" << endl;
	else if (value1 == value2 || value1 == value3 || value2 == value3)
		cout << "Isosceles Triangle" << endl;
	else
		cout << "Scalene Triangle" << endl;
	
	return 0;
}