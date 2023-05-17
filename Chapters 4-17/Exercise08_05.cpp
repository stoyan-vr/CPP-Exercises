#include <iostream>
#include <iomanip>
using namespace std;

const int N = 3;
void addMatrix(const double a[][N], const double b[][N], double c[][N])
{
	for (int i = 0; i < N * N; i++)
		c[i / 3][i % 3] = a[i / 3][i % 3] + b[i / 3][i % 3];
}

void printResult(const double a[][N], const double b[][N], double c[][N])
{
	cout << "The addition of the matrix is\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << (i == 1 ? " + " : "   ");
		for (int j = 0; j < 3; j++)
			cout << left << b[i][j] << " ";
		cout << (i == 1 ? " = " : "   ");
		for (int j = 0; j < 3; j++)
			cout << left << " " << c[i][j];
		cout << endl;
  }		
}

int main()
{
	double a[N][N];
	cout << "Enter matrix1: ";
	for (int i = 0; i < N * N; i++)
		cin >> a[i / 3][i % 3];
	
	double b[N][N];
	cout << "Enter matrix2: ";
	for (int i = 0; i < N * N; i++)
		cin >> b[i / 3][i % 3];
	
	double c[N][N];
	
	addMatrix(a, b, c);
	
	printResult(a, b, c);
	
	return 0;
}