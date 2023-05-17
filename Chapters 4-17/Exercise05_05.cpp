#include <iostream>
using namespace std;

int main()
{
	cout << "Millimeters\tInches\t|\tInches\tMillimeters\n";
	for (int i = 1; i <= 50; i++) 
		cout << i * 2 << "\t\t" << i * 2 * 0.039 << "\t|\t" << i << "\t" << i / 0.039 << "\n";
		
}