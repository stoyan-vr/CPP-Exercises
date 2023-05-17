#include <iostream>
using namespace std;

void displayLargest(double num1, double num2, double num3)
{ 
  double max = num1;
  if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	
	cout << max;
}

int main()
{
	cout << "Enter three numbers: ";
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	cout << "The largest is ";
	displayLargest(n1, n2, n3);
	
	return 0;
}