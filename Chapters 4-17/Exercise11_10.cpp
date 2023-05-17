#include <iostream>
using namespace std;

int* countDigits(const int& number)
{
	int* counts = new int[10];
	for (int i = 0; i < 10; i++)
		counts[i] = 0;
	int temp = number;
	
	while (temp != 0)
	{
		counts[temp % 10]++;
		temp /= 10;
	}
	
	return counts;
}

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	
	int* counts = countDigits(n);
  
	for (int i = 0; i < 10; i++)
		cout << i << " " << counts[i] << endl;
	
	return 0;
}