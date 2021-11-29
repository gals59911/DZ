#include <iostream>
using namespace std;
int main()
{
	int a, b, c, D;
	float x1, x2, x,O;
	cin >> a;
	cin >> b;
	cin >> c;
	D = (b * b) - (4 * a * c);
	O = sqrt(D);
	if (D > 0)
	{
		x1 = (-b + O) / (2 * a);
		x2 = (-b - O )/ (2 * a);
		cout << x1 << endl;
		cout << x2 << endl;
	}
	if (D == 0)
	{
		x = -b / 2 * a;
		cout << x << endl;
	}
	if (D < 0)
	{
		cout << "Решений нет" << endl;
	}
}