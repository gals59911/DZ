#include <iostream>
// #include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    int n = 6;
    int key;
    int arr[6] = { 5, 2, 4, 6, 1, 3 };

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int j = 1; j < n; j++)
    {
        key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
