#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 4000; i <= 4500; i++)
		if (i % 10 == 0)
			cout << i << (++count % 15 == 0 ? "\n" : " ");
		
	return 0;
}