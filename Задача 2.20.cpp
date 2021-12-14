#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float n, z, a;
	int i = 1;
	bool flag = false;
	cin >> n >> z;
	while (i <= n && !flag)
	{
		a = sin(n + i / n);
		a = round(a * 10) / 10;
		if (a == z)
		{
			flag = true;
		}
		else
		{
			i++;
		}
	}
	if (flag)
	{
		cout << z << i << endl;
	}
}
