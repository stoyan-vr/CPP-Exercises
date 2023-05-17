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
	string name1, name2;
	double min1, min2;
	name1 = name;
	min1 = price;
	
	while (count < n) {
		cout << "Enter item " << count++ << " name and price: ";
		cin >> name >> price;
		if (price < min1) {
			min2 = min1;
			name2 = name1;
			min1 = price;
			name1 = name;
		}		  
	}
	
	cout << name1 << " has the lowest price of " << min1 << endl;
	cout << name2 << " has the second lowest price of " << min2 << endl;
	
	return 0;
}