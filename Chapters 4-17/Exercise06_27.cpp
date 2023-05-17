#include <iostream>
#include <cmath>
using namespace std;

double sqrt(int n)
{
	double nextGuess = 1;
  double lastGuess = n;
	
	while (abs(nextGuess - lastGuess) > 0.000001) {
		lastGuess = nextGuess;
		nextGuess = (lastGuess + (n / lastGuess)) / 2;
	}
	
	return lastGuess;
}

int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	
	cout << "The square root of " << n << " is " << sqrt(n) << endl;
	
	return 0;
}