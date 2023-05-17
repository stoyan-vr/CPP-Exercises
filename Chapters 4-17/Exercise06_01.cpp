#include <iostream>
#include <iomanip>
using namespace std;

int getTriangularNumber(int n) 
{
	return n * (n + 1) / 2;
}

int main()
{
	for (int i = 1; i <= 75; i++) 
		cout << setw(5) << getTriangularNumber(i) << (i % 5 == 0 ? "\n" : "");
  
	return 0;
}