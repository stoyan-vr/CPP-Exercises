#include <iostream>
#include "EvenNumber.h"

using namespace std;

int main()
{
	EvenNumber n(0);
	for (int i = 0; i < 10; i++)
	{
		cout << (n++).getValue() << endl;
	}
	
	return 0;
}