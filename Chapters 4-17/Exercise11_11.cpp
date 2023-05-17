#include <iostream>
#include <algorithm>
#include "Rectangle2D.h"
using namespace std;

const int SIZE = 2;

Rectangle2D getRectangle(const double points[][SIZE])
{
	double listX[5];
	double listY[5];
	for (int i = 0; i < 5; i++)
  {
		listX[i] = points[i][0];
		listY[i] = points[i][1];
	}
	
	double* minX = min_element(listX, listX + 5);
	double* maxX = max_element(listX, listX + 5);
	double* minY = min_element(listY, listY + 5);
	double* maxY = max_element(listY, listY + 5);
	
	double width = *maxX - *minX;
	double height = *maxY - *minY;
	double x = *minX + width / 2;
	double y = *minY + height / 2;
	
	Rectangle2D* r = new Rectangle2D(x, y, width, height);
	return *r;
}

int main()
{
	cout << "Enter five points: ";
	double points[5][SIZE];
	
	for (int i = 0; i < 5; i++)
	{
		cin >> points[i][0];
		cin >> points[i][1];
	}
	
	Rectangle2D r = getRectangle(points);
	
	cout << "The bounding rectangle's center (" << r.getX() << ", " << r.getY() 
	  << ") width " << r.getWidth() << " height " << r.getHeight() << endl;
	
	return 0;
}