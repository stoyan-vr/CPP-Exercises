#include <iostream>
#include <string>
using namespace std;

void countDigits(const int& number, int dArray[], int size)
{
	for (int i = 0; i < size; i++)
		dArray[i] = 0;
	int temp = number;
	while (temp != 0)
	{
		dArray[temp % 10]++;
		temp /= 10;
	}
}

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	
	const int SIZE = 10;
	int dArray[SIZE];
	countDigits(n, dArray, SIZE);
	
	for (int i = 0; i < SIZE; i++)
		cout << i << ": " << dArray[i] << (dArray[i] != 1 ? " times" : " time") << endl;
	
	return 0;
}