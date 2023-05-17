#include <iostream>
using namespace std;

template<typename T>
bool areStrictlyIdentical(const T list1[], const T list2[], int size)
{
	for (int i = 0; i < size; i++)
		if (list1[i] != list2[i])
			return false;
		
	return true;
}

int main()
{
	int intList1[] = {2, 3, 4, 9, 11};
	int intList2[] = {2, 3, 4, 9, 11};
	
	double doubleList1[] = {2.3, 4.9, 11.9, 12.09};
	double doubleList2[] = {2.3, 11.9, 12.09, 4.9};
	
	string stringList1[] = {"London", "Paris", "New York"};
	string stringList2[] = {"Boston", "Atlanta", "Sofia"};
	
	cout << areStrictlyIdentical(intList1, intList2, 5) << endl;
	cout << areStrictlyIdentical(doubleList1, doubleList2, 4) << endl;
	cout << areStrictlyIdentical(stringList1, stringList2, 3) << endl;
	
	return 0;
}