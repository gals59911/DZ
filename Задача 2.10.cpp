
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n,max=0,t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > max)
		{
			max = t;
		}
		cout <<"Максимальный елемент:"<<max << endl;
	}
}