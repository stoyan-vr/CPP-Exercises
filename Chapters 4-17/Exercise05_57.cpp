#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a Student ID: ";
	string id;
	cin >> id;
	
	bool isValid = isdigit(id[0]) && id.length() == 10;
	bool containsLetter = false;
	if (!isValid) {
		cout << "invalid Student ID" << endl;
		exit(1);
	}
	
	for (int i = 1; i < id.length(); i++) {
	  if (isalpha(id[i]))
		  containsLetter = true;
		if (!isalnum(id[i])) {
			isValid = false;
			break;
		}
	}		 
	
	if (isValid && containsLetter) 
		cout << "valid Student ID" << endl;
	else
		cout << "invalid Student ID" << endl;
	
	return 0;
}