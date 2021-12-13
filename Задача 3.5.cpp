#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ch, max, count;
	count = 0;
	max = 0;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> ch;
		a[i] = ch;
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (max == a[i])
		{
			count++;
		}
	}
	cout <<"Max element:"<< max << " Kol:" << count << endl;
}