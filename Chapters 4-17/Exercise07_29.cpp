#include <iostream>
#include <cmath>
using namespace std;

double getArea(const double [], int);
double distance(double []);
double tArea(double, double, double);

int main()
{
	const int SIZE = 12;
	double values[SIZE];
	cout << "Enter the coordiantes of six points: ";
	for (int i = 0; i < SIZE; i++)
		cin >> values[i];
	
	cout << "The total area is " << getArea(values, SIZE) << endl;
	
	return 0;
}
// Test numbers
// -8.5 10 0 11.4 5.5 7.8 6 -5.5 0 -7 -3.5 -3.5
double getArea(const double values[], int size)
{
	double sides1[6];
	for (int i = 0; i < size; i += 2)
	{
		double points[4];
		for (int j = 0; j < 4; j++)
			points[j] = values[(i + j) % 12];
		sides1[i / 2] = distance(points);
	}
	
	double sides2[3];
	for (int i = 0; i < 3; i++)
	{
		double points[] = {values[0], values[1], values[4 + i * 2], values[5 + i * 2]};
		sides2[i] = distance(points);
	}
	
	return tArea(sides1[0], sides1[1], sides2[0]) +
	       tArea(sides1[2], sides2[0], sides2[1]) +
	       tArea(sides1[3], sides2[1], sides2[2]) +
				 tArea(sides1[4], sides1[5], sides2[2]);
}

double tArea(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

double distance(double list[])
{
	return sqrt(pow(list[2] - list[0], 2) + pow(list[3] - list[1], 2));
}