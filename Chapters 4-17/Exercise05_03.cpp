#include <iostream>
using namespace std;

int main()
{
	cout << "Millimeters\tInches\n";
	for (int i = 2; i < 100; i += 2)
		cout << i << "\t\t" << i * 0.039 << "\n";
	
	return 0;
}