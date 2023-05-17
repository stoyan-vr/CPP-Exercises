#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	double sum = 0;
	for (int i = 1; i < 100; i++)
		sum += Rational(i, i + 1).doubleValue();
	
	cout << "The sum of the series is " << sum;

  return 0;
}