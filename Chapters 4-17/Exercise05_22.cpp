#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
		for (int d = 2; d <= i / 2; d++)
			if (i % d == 0) {
				cout << i << (++count % 5 == 0 ? "\n" : " "); 
				break;
			}
	cout << count << endl;		
	return 0;
}