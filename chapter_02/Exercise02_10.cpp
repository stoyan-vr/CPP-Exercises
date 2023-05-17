#include <iostream> 
using namespace std;

int main()
{
	cout << "Enter the amount of water in kilograms: ";
	double amount;
	cin >> amount;
	cout << "Enter the initial temperature: ";
	double initialTemperature;
	cin >> initialTemperature;
	cout << "Enter the final temperature: ";
	double finalTemperature;
	cin >> finalTemperature;
	
	double energy = amount * (finalTemperature - initialTemperature) * 4184;
	
	
	cout << "The energy needed is " << energy << endl;
	
	return 0;
}