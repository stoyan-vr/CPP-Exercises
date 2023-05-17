#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	cout << "Enter the side: ";
	double side;
	cin >> side;
	
	double area = 3 * pow(3, 0.5) / 2 * side * side;
	
	cout << "The area of the hexagon is " << area << endl;
	
	return 0;
}