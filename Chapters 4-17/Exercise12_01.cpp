#include <iostream>
#include <string>
using namespace std;

template<typename T>
T min(const T list[], int size)
{
	T min = list[0];
	for (int i = 1; i < size; i++)
		if (min > list[i])
			min = list[i];
		
	return min;
}

int main()
{
	int list1[] = {2, 4, 9, 11, 0, 1};
	double list2[] = {3.5, 1.8, 2.9, 11.8, 12};
	string list3[] = {"Atlanta", "Chicago", "New York", "London"};
	
	cout << "The minimum integer is " << min(list1, 6) << endl;
	cout << "The minimum double value is " << min(list2, 5) << endl;
	cout << "The minimum string is " << min(list3, 4);
	
	return 0;
}