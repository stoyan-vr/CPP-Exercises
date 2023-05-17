#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	cout << "Enter the length from the cente to a vertix: ";
	double length;
	cin >> length;
	
	double s = 2 * length * sin(3.14159 / 5);
	
	double area = 5 * s * s / (4 * tan(3.14159 / 5));
	
	cout << "The are of the pentagon is " << static_cast<int>(area * 100) / 100.0 << endl;
	
	return 0;
}