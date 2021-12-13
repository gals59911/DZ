
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    float x, xP;
    x = 2;
    xP = 0;
    double eps = 0.000001;
    while (abs(x - xP) > eps)
    {
        xP = x;
        x = (-0.05) * (pow(xP, 3) - xP - 1) + xP;
    }
    cout << x << xP << endl;
}