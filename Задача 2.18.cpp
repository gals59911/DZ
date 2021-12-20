#include <iostream>

using namespace std;

int main()
{
	int n, ch;
	cin >> n;
	while (n != 0)
	{
		ch = n % 10;
		n = n / 10;
		cout << ch;
	}
}