#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter two integers: ";
	int n1, n2;
	cin >> n1 >> n2;
	
	if (n1 % n2 == 0)
		cout << n1 << " is divisible by " << n2 << endl;
	else
		cout << n1 << " is not divisible by " << n2 << endl;
  
	return 0;
}