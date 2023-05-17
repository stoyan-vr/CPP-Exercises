#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter a desired profit amount: ";
	double profitDesired;
	cin >> profitDesired;
	double profit = 0;
	double quantity = 0;
	
	while (profitDesired > profit) 
	{
		quantity++;
		if (quantity <= 1000)
			profit += 1;
		else if (quantity <= 5000)
			profit += 2;
		else 
			profit += 5;
	} 
	
	cout << "The quantity is " << quantity << endl;
	
	return 0;
}