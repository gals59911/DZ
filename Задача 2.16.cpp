
#include <iostream>
using namespace std;
int main()
{
	int s=0, n;
	cin >> n;
	for (int i= 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			s = s - i;
		}
		if (i % 2 == 0)
		{
			s = s + i;
		}
	}
	cout << s << endl;
}