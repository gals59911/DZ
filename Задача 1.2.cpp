#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b,x;
	cin >> a >> b;
	bool c = b != 0;
	if (c)
	{
		x = a / b;
		cout << x << endl;
	}
	else
	{
		cout << "�� ���� ������ ������" << endl;
	}

	return 0;
}