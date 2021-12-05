
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n,z,t;
	cin >> n;
	cin >> z;
	while (n > 0)
	{
		t = n % 10;
		n /= 10;
		if (z == t)
		{
			cout << "Цифра входит в число" << endl;
		}
	}
}