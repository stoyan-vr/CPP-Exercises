#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 2;

bool sameLine(const vector<vector<double> >&);
/** Return true if point (x2, y2) is on the same  
 *  line from (x0, y0) to (x1, y1) */ 
bool onTheSameLine(double x0, double y0, 
  double x1, double y1, double x2, double y2);

int main()
{
  vector<vector<double> > points(5);  
  cout << "Enter five points: ";
  for (int i = 0; i < 5; i++)
	{
    points[i] = vector<double>(2);
		cin >> points[i][0];
		cin >> points[i][1];
	}
	
  	
  if (sameLine(points))
    cout << "The five points are on the same line" << endl;
  else
    cout << "The five points are not on the same line" << endl;

  return 0;
}

/** Return true if point (x2, y2) is on the same  
 *  line from (x0, y0) to (x1, y1) */ 
bool onTheSameLine(double x0, double y0, 
  double x1, double y1, double x2, double y2)
{  
  return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0) < 0.000000001;
}

bool sameLine(const vector<vector<double> >& points)
{
  for (int i = 2; i < points.size(); i++) 
    if (!onTheSameLine(points[0][0], points[0][1], 
         points[1][0], points[1][1], points[i][0], points[i][1])) 
      return false;

  return true;
}