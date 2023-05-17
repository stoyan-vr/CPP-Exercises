#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double e = 1;
	double item = 1;
	
	for (int i = 1; i <= 15; i ++) {
		item = item / i;
		e += item;
	}
	
	cout << e << endl;
	
  return 0;
}	