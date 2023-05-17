#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int numbers[SIZE];
	
	// Initialize the array with 0 values
	for (int i = 0; i < SIZE; i++)
		numbers[i] = 0;
	
  int n;
	cout << "Enter the integers between 1 and 100: ";
	cin >> n;
	while (n > 0 && n <= 100)
	{
		numbers[n - 1]++;
		cin >> n;
	}
	
	for (int i = 0; i < SIZE; i++)
		if (numbers[i] > 0)
			cout << (i + 1) << " occurs " << numbers[i] << (numbers[i] > 1 ? " times" : " time") << endl;
		
	return 0;
}