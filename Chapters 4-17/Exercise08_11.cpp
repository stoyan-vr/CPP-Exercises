#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between 0 and 511: ";
	int n;
	cin >> n;
	
	int m[3][3];
	
	int i = 0;
	while (i < 9)
	{
		int bit = n % 2;
		m[(8 - i) / 3][(8 - i) % 3] = bit;
		n /= 2;
		i++;
	}
	
	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 3; k++)
			cout << (m[j][k] == 0 ? "H " : "T ");
		cout << endl;
	}
	
	return 0;
}