#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a positive integer: ";
	int n;
	cin >> n;
	
	cout << "The first five miltiples ";
	for (int i = 1; i <= 5; i++)
		cout << i * n << " ";
	
	return 0;
}