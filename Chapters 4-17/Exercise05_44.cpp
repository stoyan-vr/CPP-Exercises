#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	const int NUMBER_OF_TRIALS = 1000000;
  int numberOfHits = 0;
	for (int i = 0; i < 1000000; i++) 
	{
		double x = rand() * 2.0 / RAND_MAX - 1;
    double y = rand() * 2.0 / RAND_MAX - 1;
		double y1 = y + -x * -1;
		if (x < 0 || y1 <= 1 && !(x > 0 && y < 0))
			numberOfHits++;
	}
	
	cout << "The probability in Region 1 and 3 is " <<
    (1.0 * numberOfHits / NUMBER_OF_TRIALS) << endl;
		
	return 0;
}