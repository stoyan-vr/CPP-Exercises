#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 1; i <= 7; i++)
		for (int j = i + 1; j <= 7; j++) {
			cout << i << " " << j << "\n";
			count++;
		}
	
	cout << "The total number of all combinations is " << count << endl;
	
	return 0;
}