#include <iostream>
using namespace std;

void multiply(double& num1, double& num2, double& num3, int constant)
{
	num1 = num1 * constant;
	num2 = num2 * constant;
	num3 = num3 * constant;
}

int main()
{
	cout << "Enter three numbers: ";
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	cout << "Enter a constant: ";
	int n;
	cin >> n;
	
	multiply(n1, n2, n3, n);
	cout << n1 << " " << n2 << " " << n3 << endl;
	
	return 0;
}