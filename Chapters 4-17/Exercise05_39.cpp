#include <iostream>
using namespace std;

int main() 
{
	double profit = 0;
	double quantity = 0;
	
	do 
	{
		quantity++;
		if (quantity <= 1000)
			profit += 1;
		else if (quantity <= 5000)
			profit += 2;
		else 
			profit += 5;
	} while (profit <= 50000);
	
	cout << "The quantity is " << quantity << endl;
	
	return 0;
}