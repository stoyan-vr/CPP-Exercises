#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x11, y11, x12, y12, x13, y13, a1, b1, c1, A1, B1, C1;
    double x21, y21, x22, y22, x23, y23, a2, b2, c2, A2, B2, C2;
	
	// Prompt the user to enter three points for triangle 1
	cout << "Triangle 1 three points: ";
	cin >> x11 >> y11 >> x12 >> y12 >> x13 >> y13;
	// Prompt the user to enter three points for triangle 2
	cout << "Triangle 2 three points: ";
    cin >> x21 >> y21 >> x22 >> y22 >> x23 >> y23;
	
	// Compute three sides of triangle 1
    a1 = sqrt((x12 - x13) * (x12 - x13) + (y12 - y13) * (y12 - y13));
    b1 = sqrt((x11 - x13) * (x11 - x13) + (y11 - y13) * (y11 - y13));
    c1 = sqrt((x11 - x12) * (x11 - x12) + (y11 - y12) * (y11 - y12));
    
    // Obtain three angles in radians of triangle 2
    A1 = acos((a1 * a1 - b1 * b1 - c1 * c1) / (-2 * b1 * c1));
    B1 = acos((b1 * b1 - a1 * a1 - c1 * c1) / (-2 * a1 * c1));
    C1 = acos((c1 * c1 - b1 * b1 - a1 * a1) / (-2 * a1 * b1));
	
	// Compute three sides of triangle 1
    a2 = sqrt((x22 - x23) * (x22 - x23) + (y22 - y23) * (y22 - y23));
    b2 = sqrt((x21 - x23) * (x21 - x23) + (y21 - y23) * (y21 - y23));
    c2 = sqrt((x21 - x22) * (x21 - x22) + (y21 - y22) * (y21 - y22));
    
    // Obtain three angles in radians of triangle 2
    A2 = acos((a2 * a2 - b2 * b2 - c2 * c2) / (-2 * b2 * c2));
    B2 = acos((b2 * b2 - a2 * a2 - c2 * c2) / (-2 * a2 * c2));
    C2 = acos((c2 * c2 - b2 * b2 - a2 * a2) / (-2 * a2 * b2));
	
	// Display the angles in degress
	const double PI = 3.14159;
    cout << "The three angles are of triangle 1: " << A1 * 180 / PI << " " 
		<< B1 * 180 / PI << " " << C1 * 180 / PI << endl;
	cout << "The three angles are of triangle 2: " << A2 * 180 / PI << " " 
		<< B2 * 180 / PI << " " << C2 * 180 / PI << endl;
		
	if (A1 == A2 && B1 == B2 && C1 == C2)
		cout << "Equal angles" << endl;
	else
		cout << "Not equal angles" << endl;
	return 0;
}
