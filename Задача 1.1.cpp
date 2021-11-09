#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	bool g = a > b && a > c;
	if (g)
	{
		cout << a << endl;
	}
	else
	{
		bool i = b > c && b > a;
		if (i)
		{
			cout << b << endl;
		}
		else
		{
			bool u = c > b && c > a;
			if (u)
			{
				cout << c << endl;
			}
			
		}
	}
	return 0;
}