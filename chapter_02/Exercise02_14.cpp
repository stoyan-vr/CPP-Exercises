#include <iostream>
using namespace std;

int main()
{
	cout << "Enter weight in pounds: ";
	double pounds;
	cin >> pounds;
	cout << "Enter weight in inches: ";
	double inches;
	cin >> inches;
	
	double weight = pounds * 0.45359237;
	double height = inches * 0.0254;
	double bmi = weight / (height * height);
	
	cout << "BMI is " << bmi << endl;
	
	return 0;
}