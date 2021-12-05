
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n,t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > 0)
		{
			cout << "Положительное число:" << t << endl;
		}
		if (t < 0)
		{
			cout << "Отрицательное число:" << t << endl;
		}
		if (t == 0)
		{
			cout << "Ноль:" << t << endl;
		}
	}
}