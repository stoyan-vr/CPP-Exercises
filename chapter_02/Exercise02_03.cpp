#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a value for feet: ";
	double feet;
	cin >> feet;
	
  double meters = feet * 0.305;
	
	cout << feet << " feet is " << meters << " meters " << endl;
	
	return 0;
}