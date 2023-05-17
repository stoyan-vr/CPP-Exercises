#include <iostream>
using namespace std;

void displayPattern(int n) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << '*';
		cout << endl;
	}
}

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	displayPattern(n);
	
	return 0;
}