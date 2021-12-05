#include <iostream>
using namespace std;
int main()
{
	float n, b,g;
	cin >> n;
	b = sqrt(n);
	g = sqrt(n);
	if (b == round(g))
	{
		for (int i = 0; i < b; i++)
		{
			for (int i = 0; i < b; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	
}