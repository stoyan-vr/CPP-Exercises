#include <iostream>
#include <string>
using namespace std;

template<typename T>
T maxValue(T value1, T value2, T value3)
{
  T maxValue = value1;
	if (value2 > maxValue)
		maxValue = value2;
	if (value3 > maxValue)
		maxValue = value3;
	
	return maxValue;
}

int main()
{
  cout << "Maximum between 1, 3, and 2 is " << maxValue(1, 3, 2) << endl;
  cout << "Maximum between 1.5, 0.3, and 2.5 is "
    << maxValue(1.5, 0.3, 2.5) << endl;
  cout << "Maximum between 'A', 'N', and 'Y' is "
    << maxValue('A', 'N', 'Y') << endl;
  cout << "Maximum between \"NBC\", \"ABC\", and \"BAC\" is "
    << maxValue(string("NBC"), string("ABC"), string("BAC")) << endl;

  return 0;
}
