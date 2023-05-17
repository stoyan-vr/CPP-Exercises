#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LinearSearch.h"
#include "BinarySearch.h"
#include "SelectionSort.h"
using namespace std;

int main()
{
	srand(time(0));
  int list[100000];
  for (int i = 0; i < 100000; i++)
  {
    list[i] = rand();
  }

  int key = rand() % 100000;

  long startTime = time(0);
	linearSearch(list, key, 100000);
	long endTime = time(0);
  long executionTime = endTime - startTime;
	
  cout << "Execution time for linear search is " << executionTime << endl;

  startTime = time(0);
  selectionSort(list, 100000);
  binarySearch(list, key, 100000);
  endTime = time(0);
  executionTime = endTime - startTime;
	
  cout << "Execution time for binary search is " << executionTime << endl;

  return 0;
}
