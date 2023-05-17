#include <iostream>
#include "Fan.h"
using namespace std;

int main()
{
	Fan fan1;
	fan1.setSpeed(3);
	fan1.setOn(true);
	fan1.setRadius(10);
	cout << "Fan1\n" 
	     << "speed: " << fan1.getSpeed() 
			 << "\nIs on: " << (fan1.isOn() ? "on" : "off")
			 << "\nRadius: " << fan1.getRadius() << endl;
	
	Fan fan2;
	fan2.setSpeed(2);
	fan2.setOn(false);
	fan2.setRadius(5);
	cout << "\nFan2\n" 
	     << "speed: " << fan2.getSpeed() 
			 << "\nIs on: " << (fan2.isOn() ? "on" : "off")
			 << "\nRadius: " << fan2.getRadius() << endl;
	
	return 0;
}