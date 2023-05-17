#include <iostream>
#include <cmath>
using namespace std;

// Return the lcm of two integers
int lcm(int n1, int n2)
{
	int k = max(n1, n2);
	int lcm = k; // Possible lcm is the max number
	
	while (true)
	{
		if (lcm % n1 == 0 && lcm % n2 == 0)
			return lcm;
		else
			lcm += k;
	}
}

int main()
{
	// Prompt the user to enter two integers
	cout << "Enter the first integer: ";
	int n1;
	cin >> n1;
	
	cout << "Enter the second integer: ";
	int n2;
	cin >> n2;
	
	cout << "The Least Common Multiple for " << n1 <<
	  " and " << n2 << " is " << lcm(n1, n2) << endl;
	
	return 0;
}