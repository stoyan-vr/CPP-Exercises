#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printMatrix(int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << rand() % 2 << " ";
		cout << endl;
	}
}

int main()
{
	cout << "Enter n: ";
	int n;
	cin >> n;
	
	printMatrix(n);
	
	return 0;
}