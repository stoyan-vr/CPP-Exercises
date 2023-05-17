#include <iostream>
using namespace std;

int sumOfEven(const int* array, int size)
{
  int total = 0;
  for (int i = 0; i < size; i++)
		if (i % 2 == 0)
      total += *(array + i);
  return total;
}

double sumOfEven(const double* array, int size)
{
  int total = 0;
  for (int i = 0; i < size; i++)
		if (i % 2 == 0)
      total += *(array + i);
  return total;
}

int main()
{
  const int SIZE = 5;
  double list2[SIZE];

  cout << "Enter five numbers: ";
  for (int i = 0; i < SIZE; i++)
    cin >> list2[i];

  cout << "The sum of the values at even places is " << sumOfEven(list2, SIZE) << endl;

  return 0;
}
