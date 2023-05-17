#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the speed: ";
	double speed;
	cin >> speed;
	
	if (speed < 20)
		cout << "too slow" << endl;
	else if (speed > 80)
		cout << "too fast" << endl;
	else
		cout << "just right" << endl;
	
	return 0;
}