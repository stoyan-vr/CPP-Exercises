#include <iostream>
using namespace std;

int main()
{
	bool lockers[100];
	
	for (int i = 0; i < 100; i++)
		lockers[i] = false;
	
	for (int i = 1; i <= 100; i++)
		for (int j = i; j <= 100; j += i)
			lockers[j - 1] = lockers[j - 1] ? false : true;
	
  cout << "Open lockers are: ";	
	for (int i = 0; i < 100; i++)
		if (lockers[i])
			cout << (i + 1) << " ";
		
	return 0;
}