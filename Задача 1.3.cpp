#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a,l,g,e;
	cin >> a;
	bool x = a< 5;
	if (x)
	{
		g = a * 3;
		cout << g << endl;
	}
	else
	{
		bool f = a > 7;
		if (f)
		{
			l = a + 3;
			cout << l << endl;
		}
		else
		{
			e = a / 10;
			cout << e << endl;
		}
	}
	return 0;
}