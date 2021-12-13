#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ch, max;
	max = 0;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> ch;
		a[i] = ch;
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}

	}
	cout <<"Max element:"<< max << endl;
}