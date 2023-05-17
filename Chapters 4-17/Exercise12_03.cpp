#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

template<typename T>
void bubbleSort(T list[], int size)
{
	bool changed = false;
	
	do 
	{
		changed = false;
		for (int i = 0; i < size - 1; i++)
			if (list[i] > list[i + 1])
			{
				T temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				changed = true;
			}
	}
	while (changed);
}

template<typename T>
void printArray(const T list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}


int main()
{
	int list1[10];
	double list2[10];
	string list3[10];
	
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		list1[i] = rand() % 100;
		list2[i] = 100.0 * rand() / RAND_MAX;
		for (int j = 0; j < rand() % 20; j++)
			list3[i] += static_cast<char>(rand() % 26 + 'A');
	}
	
	
	bubbleSort(list1, 10);
	bubbleSort(list2, 10);
	bubbleSort(list3, 10);
	
	printArray(list1, 10);
	printArray(list2, 10);
	printArray(list3, 10);
	
  return 0;
}	