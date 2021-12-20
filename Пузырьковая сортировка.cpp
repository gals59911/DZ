#include <iostream>
using namespace std;
int main()
{
    int arr[5], n,tmp;
    n = 5;
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}