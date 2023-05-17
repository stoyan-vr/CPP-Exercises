#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of items: ";
	int n;
	cin >> n;
	
	cout << "Enter item 0 name and price: ";
	string name;
	double price;
	cin >> name >> price;
	int count = 1;
	string lowestPriceName = name;
	double lowestPrice = price;
	
	while (count < n) {
		cout << "Enter item " << count++ << " name and price: ";
		cin >> name >> price;
		if (price < lowestPrice) {
			lowestPrice = price;
			lowestPriceName = name;
		}
	}
	
	cout << lowestPriceName << " has the lowest price of " << lowestPrice << endl;
	
	return 0;
}