
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
			cout << "������������� �����:" << t << endl;
		}
		if (t < 0)
		{
			cout << "������������� �����:" << t << endl;
		}
		if (t == 0)
		{
			cout << "����:" << t << endl;
		}
	}
}