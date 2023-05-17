#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;

void ftoa(double f, char s[])
{
	int pos = 0;
	while (abs(f - static_cast<int>(f)) > 0.000001)
	{
		f *= 10;
		pos++;
	}
	
	itoa(static_cast<int>(f), s, 10);
	
	int i = strlen(s);
	int t = pos;
	while (t-- != 0)
		s[i--] = s[i];
	if (pos != 0)
	  s[i] = '.';
}

int main()
{
	cout << "Enter a number: ";
	double n;
	cin >> n;
	
	char s[15];
	
  ftoa(n, s);
 
	for (int i = 0; i < strlen(s); i++)
    cout << s[i] << " ";
  
	return 0;
}