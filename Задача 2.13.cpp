
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, t, max, min,s;
	cin >> n;
	cin >> min;
	max = min;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > max)
		{
			max = t;
		}
		if (t <max || t<min)
		{
			min = t;
		}
		s = min + max;
		cout <<"Ñóììà:"<< s << endl;
	}
}