#include <iostream>
using namespace std;
int main()
{
    int n, tmp;
    n = 7;
    int arr[7] = { 41,223,23,12,23,34,56 };
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n / 2; i++)
    {
        // swap - оперция обмена
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}