#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	cout << "Enter the first complext number: ";
	double a, b;
	cin >> a >> b;
	
	Complex c1(a, b);
	
	cout << "Enter the second complex number: ";
	cin >> a >> b;
	
	Complex c2(a, b);
	
	cout << "(" << c1 << ") + (" << c2 << ") = " << c1 + c2 << endl; 
	cout << "(" << c1 << ") - (" << c2 << ") = " << c1 - c2 << endl; 
	cout << "(" << c1 << ") * (" << c2 << ") = " << c1 * c2 << endl; 
	cout << "(" << c1 << ") / (" << c2 << ") = " << c1 / c2 << endl; 
	cout << "|" << c1 << "| = " << c1.abs() << endl;
	return 0;
}