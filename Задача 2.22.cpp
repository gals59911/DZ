
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float n, a, max;
	int i = 2;
	int p1 = 1;
	int pk = 1;
	cin >> n;
	max = sin(n + 1 / n);
	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			p1 = i;
			pk = i;
		}
		else if (a == max)
		{
			pk = i;
		}
		i++;
	}
	cout << "Макс" << max << endl;
	cout << "Первый элемент" << p1 << endl;
	cout << "Последний элемент" << pk << endl;
}