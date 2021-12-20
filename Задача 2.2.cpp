#include <iostream>
using namespace std;
int main()
{
	int n,ch,pro=1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ch;
		pro*= ch;
	}
	cout << pro << endl;
}