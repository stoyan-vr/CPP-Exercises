#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void shuffle(int m[3][5])
{
	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		int r = rand() % 5;
		for (int j = 0; j < 3; j++)
		{
			int temp = m[j][i];
			m[j][i] = m[j][r];
			m[j][r] = temp;
		}
	}
}
			
int main()
{
	int m[3][5] = {{1, 2, 3, 4, 5}, 
	               {3, 4, 5, 6, 7}, 
								 {5, 6, 7, 8, 9}};
	shuffle(m);
	
	for (int i = 0; i < 3; i++)
  {
		for (int j = 0; j < 5; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
								 
	return 0;
}