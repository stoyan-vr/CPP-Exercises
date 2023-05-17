#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter three integers
	cout << "Enter three integers: ";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	if (n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	if (n1 > n3) 
	{
		int temp = n1; 
		n1 = n3;
		n3 = temp;
	}
	
	if (n2 > n3) 
	{
		int temp = n2;
		n2 = n3;
		n3 = temp;
	}
	
	// Display results
	cout << "The integers in non-decresing order: "
  	<< n1 << " " << n2 << " " << n3 << endl;
		
	return 0;
}