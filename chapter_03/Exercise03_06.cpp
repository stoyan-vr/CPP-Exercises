#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter the weight in pounds
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;
	
	// Prompt the user to enter the feet
	cout << "Enter feet: ";
	double feet;
	cin >> feet;
	
	// Prompt the user to enter inches
	cout << "Enter inches: ";
	double inches;
	cin >> inches;
	
	// Compuet height in inches
	double height = 12 * feet + inches;
	
	// Compute BMI
  double bmi = weight * 0.45359237 /
    ((height * 0.0254) * (height * 0.0254));
	
		// Display result
	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;
	
	return 0;
}