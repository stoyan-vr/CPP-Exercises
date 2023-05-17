#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void addVector(vector<T>&, vector<T>&);

int main()
{
	vector<int> v1;
	cout << "Enter 6 values: ";
	for (int i = 0; i < 6; i++)
	{
		int n;
		cin >> n;
		v1.push_back(n);
	}
	
	vector<int> v2;
	cout << "Enter 6 values: ";
	for (int i = 0; i < 6; i++)
	{
		int n;
		cin >> n;
		v2.push_back(n);
	}
	
	addVector(v1, v2);
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " " ;
	
}

template <typename T>
void addVector(vector<T>& v1, vector<T>& v2)
{
	for (int i = 0; i < v1.size() && i < v2.size(); i++)
		v1[i] = v1[i] + v2[i];
}