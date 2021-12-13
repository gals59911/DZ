#include <iostream>
using namespace std;
int main()
{
    int n = 5,ch;
    int a[5];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        a[i] = ch;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1]) { flag = false; }
    }
    if (flag)
    {
        cout << "Aray is ordered" << endl;
    }
    else
    {
        cout << "Aray is not ordered" << endl;
    }
}