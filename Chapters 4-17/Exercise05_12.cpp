#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 1; i <= 500; i++) 
		if (i % 3 == 0 && i % 4 == 0)
			if (++count % 5 == 0)
			  cout << setw(4) << i << "\n";
			else
				cout << setw(4) << i << " ";
			
	return 0;
}