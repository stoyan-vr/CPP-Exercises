#include <iostream>
#include <iomanip>
using namespace std;

double computeProfit(double quantity)
{
	if (quantity <= 1000)
		return quantity;
	else if (quantity <= 5000)
		return 1000 + (quantity - 1000) * 2;
	else
		return 9000 + (quantity - 5000) * 5;
}

int main()
{
	cout << left << setw(13) << "Quantity" << "Profit" << endl;
	for (int i = 1; i <= 10; i++)
		cout << left << setw(13) << i * 1000 << computeProfit(i * 1000) << endl;
	
	return 0;
}