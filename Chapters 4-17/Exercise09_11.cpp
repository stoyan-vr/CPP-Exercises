#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
	EvenNumber evenNumber(16);
	
	cout << "Next value is " << evenNumber.getNext().getValue()
	     << "\nPrevious value is " << evenNumber.getPrevious().getValue() << endl;
	
	return 0;
}