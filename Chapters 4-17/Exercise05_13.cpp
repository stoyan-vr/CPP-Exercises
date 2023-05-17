#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 300; i <= 400; i++) 
		if ((i % 3 == 0 || i % 6 == 0) && !(i % 3 == 0 && i % 6 == 0))
			if (++count % 5 == 0)
			  cout << setw(4) << i << "\n";
			else
				cout << setw(4) << i << " ";
			
	return 0;
}