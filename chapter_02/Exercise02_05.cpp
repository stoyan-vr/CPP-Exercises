#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter the subtotal and a gratuity rate: ";
	double subtotal, gratuityRate;
	cin >> subtotal >> gratuityRate;
	
	double gratuity = subtotal * gratuityRate / 100;
	double total = subtotal + gratuity;
	
	cout << "The gratuity is " << gratuity << 
	  " and total is $" << total << endl;
	
	
	return 0;
}