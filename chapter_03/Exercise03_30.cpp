#include <iostream>
using namespace std;

int main()
{
	cout << "Enter weight and price for package 1: ";
	double w1, p1;
	cin >> w1 >> p1;
	cout << "Enter weight and price for package 2: ";
	double w2, p2;
	cin >> w2 >> p2;
	
	if (p1 / w1 < p2 / w2)
		cout << "Package 2 has the best price" << endl;
	else if (p1 / w1 == p2 / w2)
		cout << "Two packages have the same price" << endl;
	else
		cout << "Package 2 has the best price" << endl;
	
	return 0;
}