#include <iostream>
using namespace std;
int main()
{
	int N,g,S=0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		g = 1;
		for (int j = 1; j <= i * 2; j++)
		{
			g *= j;
		}
		S += g;
	}
	cout << S << endl;
}