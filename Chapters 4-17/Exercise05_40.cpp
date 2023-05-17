#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int headCount = 0;
  int tailCount = 0;
  srand(time(0));

  for (int i = 0; i < 100000; i++)
  {
    int number = rand() % 2;

    if (number == 0)
      headCount++;
    else
      tailCount++;
  }

  cout << "even count: " << headCount << endl;
  cout << "odd count: " << tailCount << endl;

  return 0;
}
