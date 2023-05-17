#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "Enter the number of secodns: ";
	int seconds;
	cin >> seconds;
	
	int startTime = time(0);
	
	while (seconds > 0) 
	{
		if (time(0) - startTime == 1) 
		{
			seconds--;
			if (seconds > 0)
			{
			  cout << seconds << " remaining" << endl;
			  startTime = time(0);
			}
			else
				cout << "Stopped" << endl;
		}
	}
	
	return 0;
}