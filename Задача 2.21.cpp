
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n,t,o;
	cin >> n;
	t = n;
	while (n != 0)
	{
		cin >> n;
		if (n != t + 1 && n != 0)
		{
			o=0;
		}
		if (n == t + 1 || n != 0)
		{
			o=1;
		}
		t = n;
		
	}
	if (o == 0)
	{
		cout << "Числа упорядочены" << endl;
	}
	else
	{
		cout << "Числа не упорядочены" << endl;
	}
}