#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Enter an integer (2-12): ";
	int number;
	cin >> number;
	
	srand(time(0));
	
	int d1 = rand() % 6 + 1, d2 = rand() % 6 + 1;
	int sum = d1 + d2;
	cout << d1 << " " << d2 << endl;
	
	int count = 1;
	while (sum != number)
	{
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		sum = d1 + d2;
		cout << d1 << " " << d2 << endl;
		count++;
	}
  
	cout << "Total combinations: " << count << endl;
	
  return 0;
}	