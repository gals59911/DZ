#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ch, max,min;
	max = 0;
	min = 0;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> ch;
		min = ch;
		a[i] = ch;
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "Max element:" << max << endl;
	cout << "Min element:" << min << endl;
}