#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter speed and acceleration: ";
	double v, a;
	cin >> v >> a;
	
	double length = (v * v) / (2 * a);
	
	cout << "The minimum runwas legnth for this airplane is " 
	  << length << endl;
	
	return 0;
}