#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of lines: ";
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = n; j > i; j--)
			cout << "   ";
		for (int j = i; j >= 1; j--)
			cout << (j < 10 ? "  " : " ") << j;
		for (int j = 2; j <= i; j++)
			cout << (j < 10 ? "  " : " ") << j;
		cout << endl;
	}
}