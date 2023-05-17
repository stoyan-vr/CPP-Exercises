#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter a letter grade: ";
	char grade;
	cin >> grade;
	
	char ch = toupper(grade);
	
	cout << (ch < 'A') << endl;
	cout << (ch > 'D') << endl;
	cout << (ch != 'F') << endl;
	
	if (ch < 'A' || ch > 'D' && ch != 'F') {
		cout << grade << " is an invalid grade" << endl;
		exit(1);
	}
	
	cout << "The numeric value for grade " << grade << " is ";
	if (ch == 'A')
		cout << 4 << endl;
	else if (ch == 'B')
		cout << 3 <<  endl;
	else if (ch == 'C')
		cout << 2 << endl;
	else if (ch == 'D')
		cout << 1 << endl;
	else
		cout << 0 << endl;
	
	return 0;
}