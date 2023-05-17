#include <iostream>
using namespace std;

int main() 
{
	cout << "Enter the driving distance: ";
	double distance;
	cin >> distance;
	cout << "Enter miles per gallon: ";
	double milesPerGallon;
	cin >> milesPerGallon;
	cout << "Enter price per gallon: ";
	double pricePerGallon;
	cin >> pricePerGallon;
	
	double costOfDriving = distance / milesPerGallon * pricePerGallon;
	
	cout << "The cost of driving is $" << static_cast<int>(costOfDriving * 100) / 100.0 << endl;
	
	return 0;
}