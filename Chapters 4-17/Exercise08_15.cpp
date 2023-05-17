#include <iostream>
#include <iomanip>
using namespace std;

void inverse(const double a1[][2], double inverseOfA[][2])
{
	double a = a1[0][0];
	double b = a1[0][1];
	double c = a1[1][0];
	double d = a1[1][1];
	
	double div = a * d - b * c;
	
	inverseOfA[0][0] = 1 / div * d;
	inverseOfA[0][1] = 1 / div * -b;
	inverseOfA[1][0] = 1 / div * -c;
	inverseOfA[1][1] = 1 / div * a;
}		
  
int main()
{
	double a[2][2];
	cout << "Enter a, b, c, d: ";
	cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
	
	double inverseOfA[2][2];
	
	inverse(a, inverseOfA);
	
	cout << fixed << setprecision(1) << inverseOfA[0][0] << " " << inverseOfA[0][1] << endl;
	cout << fixed << setprecision(1) << inverseOfA[1][0] << " " << inverseOfA[1][1] << endl;
	
	return 0;
}