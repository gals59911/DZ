#include <iostream>
using namespace std;
int main()
{
	int mas[10],n,st;
	n = 10;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	for (int j = 0; j < n - 1; j++)
	{
		if (mas[j] > mas[j + 1]) { st = mas[j]; mas[j] = mas[j + 1]; mas[j + 1] = st; }
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}